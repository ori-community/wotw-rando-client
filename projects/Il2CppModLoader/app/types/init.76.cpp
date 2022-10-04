#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/TimeSlicedJobPriority__Enum.h>
#include <Il2CppModLoader/app/types/UberPoolManager_ContinuousTimesliceJob.h>
#include <Il2CppModLoader/app/types/UberPoolManager_c.h>
#include <Il2CppModLoader/app/types/UberPoolManager_RunDelayed_d_89.h>
#include <Il2CppModLoader/app/types/UberPoolTimeslicedPrewarmer.h>
#include <Il2CppModLoader/app/types/UberPoolTimeslicedPrewarmer_c.h>
#include <Il2CppModLoader/app/types/RuntimeQuest.h>
#include <Il2CppModLoader/app/types/QuestIconsUI.h>
#include <Il2CppModLoader/app/types/QuestIconsUI_c.h>
#include <Il2CppModLoader/app/types/QuestsController.h>
#include <Il2CppModLoader/app/types/QuestsController_c_DisplayClass53_0.h>
#include <Il2CppModLoader/app/types/QuestsController_c_DisplayClass54_0.h>
#include <Il2CppModLoader/app/types/QuestsUI.h>
#include <Il2CppModLoader/app/types/QuestsUI_c.h>
#include <Il2CppModLoader/app/types/NavigableOnGUI_1.h>
#include <Il2CppModLoader/app/types/LoadFromMasterAtStart_c.h>
#include <Il2CppModLoader/app/types/BackupSaveCleverMenuItem.h>
#include <Il2CppModLoader/app/types/SaveSlotInfo.h>
#include <Il2CppModLoader/app/types/SaveSlotBackupInfo.h>
#include <Il2CppModLoader/app/types/SaveSlotBackupInfo__Array.h>
#include <Il2CppModLoader/app/types/BackupSaveCleverMenuItemSelectionManager_c.h>
#include <Il2CppModLoader/app/types/SaveSlotBackup.h>
#include <Il2CppModLoader/app/types/SaveSlotBackupsManager.h>
#include <Il2CppModLoader/app/types/SaveSlotBackupsManager_BackupParseQueue.h>
#include <Il2CppModLoader/app/types/SaveSlotBackupsManager_c.h>
#include <Il2CppModLoader/app/types/SaveSlotsManager.h>
#include <Il2CppModLoader/app/types/SaveSlotsManager_c.h>
#include <Il2CppModLoader/app/types/SaveSlotsScreenshotManager.h>
#include <Il2CppModLoader/app/types/SaveSlotsUI.h>
#include <Il2CppModLoader/app/types/SaveSlotsUI_StorageOperation.h>
#include <Il2CppModLoader/app/types/SaveSlotsUI_c_DisplayClass61_0.h>
#include <Il2CppModLoader/app/types/SaveSlotsUI_c_DisplayClass76_0.h>
#include <Il2CppModLoader/app/types/AspectRatioManager.h>
#include <Il2CppModLoader/app/types/DestroyManager.h>
#include <Il2CppModLoader/app/types/DestroyManager_CountAndCallback.h>
#include <Il2CppModLoader/app/types/GoToSceneController.h>
#include <Il2CppModLoader/app/types/ScenesManager.h>
#include <Il2CppModLoader/app/types/SceneResourcesUnloadSystem.h>
#include <Il2CppModLoader/app/types/IScenesManagerBehaviour.h>
#include <Il2CppModLoader/app/types/IScenesManagerBehaviour__Array.h>
#include <Il2CppModLoader/app/types/ScenesManagerSettings.h>
#include <Il2CppModLoader/app/types/ScenesManagerContext.h>
#include <Il2CppModLoader/app/types/SceneLoadingQueue.h>
#include <Il2CppModLoader/app/types/SceneLoadingQueue_QueueSceneToLoad.h>
#include <Il2CppModLoader/app/types/SceneLoadingQueue_QueueListComparer.h>
#include <Il2CppModLoader/app/types/InstantLoadScenesController.h>
#include <Il2CppModLoader/app/types/LateStartHook.h>
#include <Il2CppModLoader/app/types/LoadingBoostController_BoostModeSettings.h>
#include <Il2CppModLoader/app/types/LoadingBoostController.h>
#include <Il2CppModLoader/app/types/LoadingBoostController_BoostModeSettings__Array.h>
#include <Il2CppModLoader/app/types/SceneLoadingQueue_c_DisplayClass12_0.h>
#include <Il2CppModLoader/app/types/SceneOperation.h>
#include <Il2CppModLoader/app/types/ScenesManagerBehaviourCinematic.h>
#include <Il2CppModLoader/app/types/ScenesManagerBehaviourExplicit.h>
#include <Il2CppModLoader/app/types/ScenesManagerBehaviourGameplay.h>
#include <Il2CppModLoader/app/types/ScenesManagerBehaviourLegacy.h>
#include <Il2CppModLoader/app/types/ScenesManagerBehaviourStatic.h>
#include <Il2CppModLoader/app/types/ScenesManagerBehaviourUtility.h>
#include <Il2CppModLoader/app/types/ScenesManagerPrediction.h>
#include <Il2CppModLoader/app/types/AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask___Array.h>
#include <Il2CppModLoader/app/types/ScenesManagerBehaviourUtility_SceneMetaAndData.h>
#include <Il2CppModLoader/app/types/List_1_ScenesManagerBehaviourUtility_SceneMetaAndData___Array.h>
#include <Il2CppModLoader/app/types/ScenesManager_c_DisplayClass187_0.h>
#include <Il2CppModLoader/app/types/ScenesManager_c_DisplayClass188_0.h>
#include <Il2CppModLoader/app/types/ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215.h>
#include <Il2CppModLoader/app/types/ScenesManager_HandleSceneLoadedEvent_d_216.h>
#include <Il2CppModLoader/app/types/ScenesManager_ShowFellOutOfWorldMessage_d_257.h>
#include <Il2CppModLoader/app/types/ScenesManager_c.h>
#include <Il2CppModLoader/app/types/SceneModeManager_SceneModeOverride__Enum.h>
#include <Il2CppModLoader/app/types/SceneModeManager.h>
#include <Il2CppModLoader/app/types/SceneRoot_c.h>
#include <Il2CppModLoader/app/types/SceneRoot_c_DisplayClass59_0.h>
#include <Il2CppModLoader/app/types/SceneRoot_c_DisplayClass59_1.h>
#include <Il2CppModLoader/app/types/SceneRoot_UnloadSceneCoroutine_d_61.h>
#include <Il2CppModLoader/app/types/SceneRoot_c_DisplayClass78_0.h>
#include <Il2CppModLoader/app/types/SceneRoot_c_DisplayClass82_0.h>
#include <Il2CppModLoader/app/types/SceneRoot_c_DisplayClass95_0.h>
#include <Il2CppModLoader/app/types/Benchmark.h>
#include <Il2CppModLoader/app/types/SceneScreenshot.h>
#include <Il2CppModLoader/app/types/SceneScreenshotManager.h>
#include <Il2CppModLoader/app/types/SceneScreenshotManager_c.h>
#include <Il2CppModLoader/app/types/SharedInformation.h>
#include <Il2CppModLoader/app/types/SkinnedMeshLod_c_DisplayClass11_0.h>
#include <Il2CppModLoader/app/types/SkinnedMeshLod_c_DisplayClass11_1.h>
#include <Il2CppModLoader/app/types/MixerManager.h>
#include <Il2CppModLoader/app/types/MixerManager_c.h>
#include <Il2CppModLoader/app/types/DamageBasedSoundProvider_c.h>
#include <Il2CppModLoader/app/types/PhysicsMaterialManager.h>
#include <Il2CppModLoader/app/types/SoundProvider_c.h>
#include <Il2CppModLoader/app/types/VaryingAmbientSoundProvider.h>
#include <Il2CppModLoader/app/types/GameplaySoundManager.h>
#include <Il2CppModLoader/app/types/SoundLog.h>
#include <Il2CppModLoader/app/types/SoundPlayerRef.h>
#include <Il2CppModLoader/app/types/EnumOrderAttribute.h>
#include <Il2CppModLoader/app/types/OriSpellsAndShardsLists.h>
#include <Il2CppModLoader/app/types/SpellIconsCollection_Icons.h>
#include <Il2CppModLoader/app/types/SpellInventory_c.h>
#include <Il2CppModLoader/app/types/SpellPickup_c.h>
#include <Il2CppModLoader/app/types/WispPickupContext.h>
#include <Il2CppModLoader/app/types/SpellSettings.h>

namespace app::classes::types {
    namespace TimeSlicedJobPriority__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::TimeSlicedJobPriority__Enum__Class** type_info = (::app::TimeSlicedJobPriority__Enum__Class**)(modloader::win::memory::resolve_rva(0x04721AF0)); }
    namespace UberPoolManager_ContinuousTimesliceJob { IL2CPP_MODLOADER_DLLEXPORT ::app::UberPoolManager_ContinuousTimesliceJob__Class** type_info = (::app::UberPoolManager_ContinuousTimesliceJob__Class**)(modloader::win::memory::resolve_rva(0x04701F10)); }
    namespace UberPoolManager_c { IL2CPP_MODLOADER_DLLEXPORT ::app::UberPoolManager_c__Class** type_info = (::app::UberPoolManager_c__Class**)(modloader::win::memory::resolve_rva(0x04751FC0)); }
    namespace UberPoolManager_RunDelayed_d_89 { IL2CPP_MODLOADER_DLLEXPORT ::app::UberPoolManager_RunDelayed_d_89__Class** type_info = (::app::UberPoolManager_RunDelayed_d_89__Class**)(modloader::win::memory::resolve_rva(0x0476ED40)); }
    namespace UberPoolTimeslicedPrewarmer { IL2CPP_MODLOADER_DLLEXPORT ::app::UberPoolTimeslicedPrewarmer__Class** type_info = (::app::UberPoolTimeslicedPrewarmer__Class**)(modloader::win::memory::resolve_rva(0x04729928)); }
    namespace UberPoolTimeslicedPrewarmer_c { IL2CPP_MODLOADER_DLLEXPORT ::app::UberPoolTimeslicedPrewarmer_c__Class** type_info = (::app::UberPoolTimeslicedPrewarmer_c__Class**)(modloader::win::memory::resolve_rva(0x0471D0A8)); }
    namespace RuntimeQuest { IL2CPP_MODLOADER_DLLEXPORT ::app::RuntimeQuest__Class** type_info = (::app::RuntimeQuest__Class**)(modloader::win::memory::resolve_rva(0x04733CE8)); }
    namespace QuestIconsUI { IL2CPP_MODLOADER_DLLEXPORT ::app::QuestIconsUI__Class** type_info = (::app::QuestIconsUI__Class**)(modloader::win::memory::resolve_rva(0x0474B150)); }
    namespace QuestIconsUI_c { IL2CPP_MODLOADER_DLLEXPORT ::app::QuestIconsUI_c__Class** type_info = (::app::QuestIconsUI_c__Class**)(modloader::win::memory::resolve_rva(0x0476C840)); }
    namespace QuestsController { IL2CPP_MODLOADER_DLLEXPORT ::app::QuestsController__Class** type_info = (::app::QuestsController__Class**)(modloader::win::memory::resolve_rva(0x0471E068)); }
    namespace QuestsController_c_DisplayClass53_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::QuestsController_c_DisplayClass53_0__Class** type_info = (::app::QuestsController_c_DisplayClass53_0__Class**)(modloader::win::memory::resolve_rva(0x0472A098)); }
    namespace QuestsController_c_DisplayClass54_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::QuestsController_c_DisplayClass54_0__Class** type_info = (::app::QuestsController_c_DisplayClass54_0__Class**)(modloader::win::memory::resolve_rva(0x047457C8)); }
    namespace QuestsUI { IL2CPP_MODLOADER_DLLEXPORT ::app::QuestsUI__Class** type_info = (::app::QuestsUI__Class**)(modloader::win::memory::resolve_rva(0x04728988)); }
    namespace QuestsUI_c { IL2CPP_MODLOADER_DLLEXPORT ::app::QuestsUI_c__Class** type_info = (::app::QuestsUI_c__Class**)(modloader::win::memory::resolve_rva(0x0475A618)); }
    namespace NavigableOnGUI_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::NavigableOnGUI_1__Class** type_info = (::app::NavigableOnGUI_1__Class**)(modloader::win::memory::resolve_rva(0x04767F98)); }
    namespace LoadFromMasterAtStart_c { IL2CPP_MODLOADER_DLLEXPORT ::app::LoadFromMasterAtStart_c__Class** type_info = (::app::LoadFromMasterAtStart_c__Class**)(modloader::win::memory::resolve_rva(0x04743DC8)); }
    namespace BackupSaveCleverMenuItem { IL2CPP_MODLOADER_DLLEXPORT ::app::BackupSaveCleverMenuItem__Class** type_info = (::app::BackupSaveCleverMenuItem__Class**)(modloader::win::memory::resolve_rva(0x0475A140)); }
    namespace SaveSlotInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::SaveSlotInfo__Class** type_info = (::app::SaveSlotInfo__Class**)(modloader::win::memory::resolve_rva(0x04740510)); }
    namespace SaveSlotBackupInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::SaveSlotBackupInfo__Class** type_info = (::app::SaveSlotBackupInfo__Class**)(modloader::win::memory::resolve_rva(0x04708748)); }
    namespace SaveSlotBackupInfo__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::SaveSlotBackupInfo__Array__Class** type_info = (::app::SaveSlotBackupInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x04708890)); }
    namespace BackupSaveCleverMenuItemSelectionManager_c { IL2CPP_MODLOADER_DLLEXPORT ::app::BackupSaveCleverMenuItemSelectionManager_c__Class** type_info = (::app::BackupSaveCleverMenuItemSelectionManager_c__Class**)(modloader::win::memory::resolve_rva(0x0472FE48)); }
    namespace SaveSlotBackup { IL2CPP_MODLOADER_DLLEXPORT ::app::SaveSlotBackup__Class** type_info = (::app::SaveSlotBackup__Class**)(modloader::win::memory::resolve_rva(0x04709410)); }
    namespace SaveSlotBackupsManager { IL2CPP_MODLOADER_DLLEXPORT ::app::SaveSlotBackupsManager__Class** type_info = (::app::SaveSlotBackupsManager__Class**)(modloader::win::memory::resolve_rva(0x04765228)); }
    namespace SaveSlotBackupsManager_BackupParseQueue { IL2CPP_MODLOADER_DLLEXPORT ::app::SaveSlotBackupsManager_BackupParseQueue__Class** type_info = (::app::SaveSlotBackupsManager_BackupParseQueue__Class**)(modloader::win::memory::resolve_rva(0x047788E8)); }
    namespace SaveSlotBackupsManager_c { IL2CPP_MODLOADER_DLLEXPORT ::app::SaveSlotBackupsManager_c__Class** type_info = (::app::SaveSlotBackupsManager_c__Class**)(modloader::win::memory::resolve_rva(0x047070F8)); }
    namespace SaveSlotsManager { IL2CPP_MODLOADER_DLLEXPORT ::app::SaveSlotsManager__Class** type_info = (::app::SaveSlotsManager__Class**)(modloader::win::memory::resolve_rva(0x04760018)); }
    namespace SaveSlotsManager_c { IL2CPP_MODLOADER_DLLEXPORT ::app::SaveSlotsManager_c__Class** type_info = (::app::SaveSlotsManager_c__Class**)(modloader::win::memory::resolve_rva(0x04715310)); }
    namespace SaveSlotsScreenshotManager { IL2CPP_MODLOADER_DLLEXPORT ::app::SaveSlotsScreenshotManager__Class** type_info = (::app::SaveSlotsScreenshotManager__Class**)(modloader::win::memory::resolve_rva(0x0470A468)); }
    namespace SaveSlotsUI { IL2CPP_MODLOADER_DLLEXPORT ::app::SaveSlotsUI__Class** type_info = (::app::SaveSlotsUI__Class**)(modloader::win::memory::resolve_rva(0x047094A0)); }
    namespace SaveSlotsUI_StorageOperation { IL2CPP_MODLOADER_DLLEXPORT ::app::SaveSlotsUI_StorageOperation__Class** type_info = (::app::SaveSlotsUI_StorageOperation__Class**)(modloader::win::memory::resolve_rva(0x04727CD8)); }
    namespace SaveSlotsUI_c_DisplayClass61_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::SaveSlotsUI_c_DisplayClass61_0__Class** type_info = (::app::SaveSlotsUI_c_DisplayClass61_0__Class**)(modloader::win::memory::resolve_rva(0x04763D68)); }
    namespace SaveSlotsUI_c_DisplayClass76_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::SaveSlotsUI_c_DisplayClass76_0__Class** type_info = (::app::SaveSlotsUI_c_DisplayClass76_0__Class**)(modloader::win::memory::resolve_rva(0x047757D8)); }
    namespace AspectRatioManager { IL2CPP_MODLOADER_DLLEXPORT ::app::AspectRatioManager__Class** type_info = (::app::AspectRatioManager__Class**)(modloader::win::memory::resolve_rva(0x047568B0)); }
    namespace DestroyManager { IL2CPP_MODLOADER_DLLEXPORT ::app::DestroyManager__Class** type_info = (::app::DestroyManager__Class**)(modloader::win::memory::resolve_rva(0x0474F278)); }
    namespace DestroyManager_CountAndCallback { IL2CPP_MODLOADER_DLLEXPORT ::app::DestroyManager_CountAndCallback__Class** type_info = (::app::DestroyManager_CountAndCallback__Class**)(modloader::win::memory::resolve_rva(0x047352B0)); }
    namespace GoToSceneController { IL2CPP_MODLOADER_DLLEXPORT ::app::GoToSceneController__Class** type_info = (::app::GoToSceneController__Class**)(modloader::win::memory::resolve_rva(0x0474A7D0)); }
    namespace ScenesManager { IL2CPP_MODLOADER_DLLEXPORT ::app::ScenesManager__Class** type_info = (::app::ScenesManager__Class**)(modloader::win::memory::resolve_rva(0x0478D1B8)); }
    namespace SceneResourcesUnloadSystem { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneResourcesUnloadSystem__Class** type_info = (::app::SceneResourcesUnloadSystem__Class**)(modloader::win::memory::resolve_rva(0x0475AA18)); }
    namespace IScenesManagerBehaviour { IL2CPP_MODLOADER_DLLEXPORT ::app::IScenesManagerBehaviour__Class** type_info = (::app::IScenesManagerBehaviour__Class**)(modloader::win::memory::resolve_rva(0x0475C460)); }
    namespace IScenesManagerBehaviour__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::IScenesManagerBehaviour__Array__Class** type_info = (::app::IScenesManagerBehaviour__Array__Class**)(modloader::win::memory::resolve_rva(0x04794178)); }
    namespace ScenesManagerSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::ScenesManagerSettings__Class** type_info = (::app::ScenesManagerSettings__Class**)(modloader::win::memory::resolve_rva(0x04785730)); }
    namespace ScenesManagerContext { IL2CPP_MODLOADER_DLLEXPORT ::app::ScenesManagerContext__Class** type_info = (::app::ScenesManagerContext__Class**)(modloader::win::memory::resolve_rva(0x0473CCF0)); }
    namespace SceneLoadingQueue { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneLoadingQueue__Class** type_info = (::app::SceneLoadingQueue__Class**)(modloader::win::memory::resolve_rva(0x0475A910)); }
    namespace SceneLoadingQueue_QueueSceneToLoad { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneLoadingQueue_QueueSceneToLoad__Class** type_info = (::app::SceneLoadingQueue_QueueSceneToLoad__Class**)(modloader::win::memory::resolve_rva(0x0470C228)); }
    namespace SceneLoadingQueue_QueueListComparer { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneLoadingQueue_QueueListComparer__Class** type_info = (::app::SceneLoadingQueue_QueueListComparer__Class**)(modloader::win::memory::resolve_rva(0x04764C48)); }
    namespace InstantLoadScenesController { IL2CPP_MODLOADER_DLLEXPORT ::app::InstantLoadScenesController__Class** type_info = (::app::InstantLoadScenesController__Class**)(modloader::win::memory::resolve_rva(0x0471CD28)); }
    namespace LateStartHook { IL2CPP_MODLOADER_DLLEXPORT ::app::LateStartHook__Class** type_info = (::app::LateStartHook__Class**)(modloader::win::memory::resolve_rva(0x04762460)); }
    namespace LoadingBoostController_BoostModeSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::LoadingBoostController_BoostModeSettings__Class** type_info = (::app::LoadingBoostController_BoostModeSettings__Class**)(modloader::win::memory::resolve_rva(0x047109B8)); }
    namespace LoadingBoostController { IL2CPP_MODLOADER_DLLEXPORT ::app::LoadingBoostController__Class** type_info = (::app::LoadingBoostController__Class**)(modloader::win::memory::resolve_rva(0x047556E8)); }
    namespace LoadingBoostController_BoostModeSettings__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::LoadingBoostController_BoostModeSettings__Array__Class** type_info = (::app::LoadingBoostController_BoostModeSettings__Array__Class**)(modloader::win::memory::resolve_rva(0x0473FAB0)); }
    namespace SceneLoadingQueue_c_DisplayClass12_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneLoadingQueue_c_DisplayClass12_0__Class** type_info = (::app::SceneLoadingQueue_c_DisplayClass12_0__Class**)(modloader::win::memory::resolve_rva(0x0472FE30)); }
    namespace SceneOperation { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneOperation__Class** type_info = (::app::SceneOperation__Class**)(modloader::win::memory::resolve_rva(0x047295A0)); }
    namespace ScenesManagerBehaviourCinematic { IL2CPP_MODLOADER_DLLEXPORT ::app::ScenesManagerBehaviourCinematic__Class** type_info = (::app::ScenesManagerBehaviourCinematic__Class**)(modloader::win::memory::resolve_rva(0x04735670)); }
    namespace ScenesManagerBehaviourExplicit { IL2CPP_MODLOADER_DLLEXPORT ::app::ScenesManagerBehaviourExplicit__Class** type_info = (::app::ScenesManagerBehaviourExplicit__Class**)(modloader::win::memory::resolve_rva(0x0475A1F0)); }
    namespace ScenesManagerBehaviourGameplay { IL2CPP_MODLOADER_DLLEXPORT ::app::ScenesManagerBehaviourGameplay__Class** type_info = (::app::ScenesManagerBehaviourGameplay__Class**)(modloader::win::memory::resolve_rva(0x04718C38)); }
    namespace ScenesManagerBehaviourLegacy { IL2CPP_MODLOADER_DLLEXPORT ::app::ScenesManagerBehaviourLegacy__Class** type_info = (::app::ScenesManagerBehaviourLegacy__Class**)(modloader::win::memory::resolve_rva(0x04713B08)); }
    namespace ScenesManagerBehaviourStatic { IL2CPP_MODLOADER_DLLEXPORT ::app::ScenesManagerBehaviourStatic__Class** type_info = (::app::ScenesManagerBehaviourStatic__Class**)(modloader::win::memory::resolve_rva(0x0471AAF8)); }
    namespace ScenesManagerBehaviourUtility { IL2CPP_MODLOADER_DLLEXPORT ::app::ScenesManagerBehaviourUtility__Class** type_info = (::app::ScenesManagerBehaviourUtility__Class**)(modloader::win::memory::resolve_rva(0x047270B0)); }
    namespace ScenesManagerPrediction { IL2CPP_MODLOADER_DLLEXPORT ::app::ScenesManagerPrediction__Class** type_info = (::app::ScenesManagerPrediction__Class**)(modloader::win::memory::resolve_rva(0x047657A8)); }
    namespace AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask___Array { IL2CPP_MODLOADER_DLLEXPORT ::app::AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask___Array__Class** type_info = (::app::AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask___Array__Class**)(modloader::win::memory::resolve_rva(0x047078C0)); }
    namespace ScenesManagerBehaviourUtility_SceneMetaAndData { IL2CPP_MODLOADER_DLLEXPORT ::app::ScenesManagerBehaviourUtility_SceneMetaAndData__Class** type_info = (::app::ScenesManagerBehaviourUtility_SceneMetaAndData__Class**)(modloader::win::memory::resolve_rva(0x0476FC50)); }
    namespace List_1_ScenesManagerBehaviourUtility_SceneMetaAndData___Array { IL2CPP_MODLOADER_DLLEXPORT ::app::List_1_ScenesManagerBehaviourUtility_SceneMetaAndData___Array__Class** type_info = (::app::List_1_ScenesManagerBehaviourUtility_SceneMetaAndData___Array__Class**)(modloader::win::memory::resolve_rva(0x0472F4E8)); }
    namespace ScenesManager_c_DisplayClass187_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::ScenesManager_c_DisplayClass187_0__Class** type_info = (::app::ScenesManager_c_DisplayClass187_0__Class**)(modloader::win::memory::resolve_rva(0x047590D0)); }
    namespace ScenesManager_c_DisplayClass188_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::ScenesManager_c_DisplayClass188_0__Class** type_info = (::app::ScenesManager_c_DisplayClass188_0__Class**)(modloader::win::memory::resolve_rva(0x04745E18)); }
    namespace ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215 { IL2CPP_MODLOADER_DLLEXPORT ::app::ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215__Class** type_info = (::app::ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215__Class**)(modloader::win::memory::resolve_rva(0x0477A860)); }
    namespace ScenesManager_HandleSceneLoadedEvent_d_216 { IL2CPP_MODLOADER_DLLEXPORT ::app::ScenesManager_HandleSceneLoadedEvent_d_216__Class** type_info = (::app::ScenesManager_HandleSceneLoadedEvent_d_216__Class**)(modloader::win::memory::resolve_rva(0x0473ED10)); }
    namespace ScenesManager_ShowFellOutOfWorldMessage_d_257 { IL2CPP_MODLOADER_DLLEXPORT ::app::ScenesManager_ShowFellOutOfWorldMessage_d_257__Class** type_info = (::app::ScenesManager_ShowFellOutOfWorldMessage_d_257__Class**)(modloader::win::memory::resolve_rva(0x0477D060)); }
    namespace ScenesManager_c { IL2CPP_MODLOADER_DLLEXPORT ::app::ScenesManager_c__Class** type_info = (::app::ScenesManager_c__Class**)(modloader::win::memory::resolve_rva(0x047010D8)); }
    namespace SceneModeManager_SceneModeOverride__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneModeManager_SceneModeOverride__Enum__Class** type_info = (::app::SceneModeManager_SceneModeOverride__Enum__Class**)(modloader::win::memory::resolve_rva(0x04799290)); }
    namespace SceneModeManager { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneModeManager__Class** type_info = (::app::SceneModeManager__Class**)(modloader::win::memory::resolve_rva(0x0476DF08)); }
    namespace SceneRoot_c { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneRoot_c__Class** type_info = (::app::SceneRoot_c__Class**)(modloader::win::memory::resolve_rva(0x0471C6E0)); }
    namespace SceneRoot_c_DisplayClass59_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneRoot_c_DisplayClass59_0__Class** type_info = (::app::SceneRoot_c_DisplayClass59_0__Class**)(modloader::win::memory::resolve_rva(0x04719730)); }
    namespace SceneRoot_c_DisplayClass59_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneRoot_c_DisplayClass59_1__Class** type_info = (::app::SceneRoot_c_DisplayClass59_1__Class**)(modloader::win::memory::resolve_rva(0x04766A58)); }
    namespace SceneRoot_UnloadSceneCoroutine_d_61 { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneRoot_UnloadSceneCoroutine_d_61__Class** type_info = (::app::SceneRoot_UnloadSceneCoroutine_d_61__Class**)(modloader::win::memory::resolve_rva(0x047275C0)); }
    namespace SceneRoot_c_DisplayClass78_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneRoot_c_DisplayClass78_0__Class** type_info = (::app::SceneRoot_c_DisplayClass78_0__Class**)(modloader::win::memory::resolve_rva(0x04780CE0)); }
    namespace SceneRoot_c_DisplayClass82_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneRoot_c_DisplayClass82_0__Class** type_info = (::app::SceneRoot_c_DisplayClass82_0__Class**)(modloader::win::memory::resolve_rva(0x0471BC58)); }
    namespace SceneRoot_c_DisplayClass95_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneRoot_c_DisplayClass95_0__Class** type_info = (::app::SceneRoot_c_DisplayClass95_0__Class**)(modloader::win::memory::resolve_rva(0x047613C0)); }
    namespace Benchmark { IL2CPP_MODLOADER_DLLEXPORT ::app::Benchmark__Class** type_info = (::app::Benchmark__Class**)(modloader::win::memory::resolve_rva(0x04737B50)); }
    namespace SceneScreenshot { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneScreenshot__Class** type_info = (::app::SceneScreenshot__Class**)(modloader::win::memory::resolve_rva(0x04797EC8)); }
    namespace SceneScreenshotManager { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneScreenshotManager__Class** type_info = (::app::SceneScreenshotManager__Class**)(modloader::win::memory::resolve_rva(0x04757530)); }
    namespace SceneScreenshotManager_c { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneScreenshotManager_c__Class** type_info = (::app::SceneScreenshotManager_c__Class**)(modloader::win::memory::resolve_rva(0x0475F3C8)); }
    namespace SharedInformation { IL2CPP_MODLOADER_DLLEXPORT ::app::SharedInformation__Class** type_info = (::app::SharedInformation__Class**)(modloader::win::memory::resolve_rva(0x0472B3D0)); }
    namespace SkinnedMeshLod_c_DisplayClass11_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::SkinnedMeshLod_c_DisplayClass11_0__Class** type_info = (::app::SkinnedMeshLod_c_DisplayClass11_0__Class**)(modloader::win::memory::resolve_rva(0x047256C0)); }
    namespace SkinnedMeshLod_c_DisplayClass11_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::SkinnedMeshLod_c_DisplayClass11_1__Class** type_info = (::app::SkinnedMeshLod_c_DisplayClass11_1__Class**)(modloader::win::memory::resolve_rva(0x04725008)); }
    namespace MixerManager { IL2CPP_MODLOADER_DLLEXPORT ::app::MixerManager__Class** type_info = (::app::MixerManager__Class**)(modloader::win::memory::resolve_rva(0x04756668)); }
    namespace MixerManager_c { IL2CPP_MODLOADER_DLLEXPORT ::app::MixerManager_c__Class** type_info = (::app::MixerManager_c__Class**)(modloader::win::memory::resolve_rva(0x047644E0)); }
    namespace DamageBasedSoundProvider_c { IL2CPP_MODLOADER_DLLEXPORT ::app::DamageBasedSoundProvider_c__Class** type_info = (::app::DamageBasedSoundProvider_c__Class**)(modloader::win::memory::resolve_rva(0x04729390)); }
    namespace PhysicsMaterialManager { IL2CPP_MODLOADER_DLLEXPORT ::app::PhysicsMaterialManager__Class** type_info = (::app::PhysicsMaterialManager__Class**)(modloader::win::memory::resolve_rva(0x0473B3B0)); }
    namespace SoundProvider_c { IL2CPP_MODLOADER_DLLEXPORT ::app::SoundProvider_c__Class** type_info = (::app::SoundProvider_c__Class**)(modloader::win::memory::resolve_rva(0x0476F688)); }
    namespace VaryingAmbientSoundProvider { IL2CPP_MODLOADER_DLLEXPORT ::app::VaryingAmbientSoundProvider__Class** type_info = (::app::VaryingAmbientSoundProvider__Class**)(modloader::win::memory::resolve_rva(0x04774648)); }
    namespace GameplaySoundManager { IL2CPP_MODLOADER_DLLEXPORT ::app::GameplaySoundManager__Class** type_info = (::app::GameplaySoundManager__Class**)(modloader::win::memory::resolve_rva(0x0473B560)); }
    namespace SoundLog { IL2CPP_MODLOADER_DLLEXPORT ::app::SoundLog__Class** type_info = (::app::SoundLog__Class**)(modloader::win::memory::resolve_rva(0x0474F658)); }
    namespace SoundPlayerRef { IL2CPP_MODLOADER_DLLEXPORT ::app::SoundPlayerRef__Class** type_info = (::app::SoundPlayerRef__Class**)(modloader::win::memory::resolve_rva(0x0473B9A0)); }
    namespace EnumOrderAttribute { IL2CPP_MODLOADER_DLLEXPORT ::app::EnumOrderAttribute__Class** type_info = (::app::EnumOrderAttribute__Class**)(modloader::win::memory::resolve_rva(0x0472CBA8)); }
    namespace OriSpellsAndShardsLists { IL2CPP_MODLOADER_DLLEXPORT ::app::OriSpellsAndShardsLists__Class** type_info = (::app::OriSpellsAndShardsLists__Class**)(modloader::win::memory::resolve_rva(0x047184E0)); }
    namespace SpellIconsCollection_Icons { IL2CPP_MODLOADER_DLLEXPORT ::app::SpellIconsCollection_Icons__Class** type_info = (::app::SpellIconsCollection_Icons__Class**)(modloader::win::memory::resolve_rva(0x04731378)); }
    namespace SpellInventory_c { IL2CPP_MODLOADER_DLLEXPORT ::app::SpellInventory_c__Class** type_info = (::app::SpellInventory_c__Class**)(modloader::win::memory::resolve_rva(0x04705480)); }
    namespace SpellPickup_c { IL2CPP_MODLOADER_DLLEXPORT ::app::SpellPickup_c__Class** type_info = (::app::SpellPickup_c__Class**)(modloader::win::memory::resolve_rva(0x04741E38)); }
    namespace WispPickupContext { IL2CPP_MODLOADER_DLLEXPORT ::app::WispPickupContext__Class** type_info = (::app::WispPickupContext__Class**)(modloader::win::memory::resolve_rva(0x0471B760)); }
    namespace SpellSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::SpellSettings__Class** type_info = (::app::SpellSettings__Class**)(modloader::win::memory::resolve_rva(0x04772F08)); }
}
