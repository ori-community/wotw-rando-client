#include <Il2CppModLoader/app/types/AspectRatioManager.h>
#include <Il2CppModLoader/app/types/BackupSaveCleverMenuItem.h>
#include <Il2CppModLoader/app/types/BackupSaveCleverMenuItemSelectionManager_c.h>
#include <Il2CppModLoader/app/types/BuilderNPC_c.h>
#include <Il2CppModLoader/app/types/CameraFrustumOptimizer.h>
#include <Il2CppModLoader/app/types/CameraFrustumOptimizer_EarlyZActivation.h>
#include <Il2CppModLoader/app/types/CartographerNPC.h>
#include <Il2CppModLoader/app/types/CharacterPlatformMovementManager.h>
#include <Il2CppModLoader/app/types/CharacterPlatformMovementManager_LateFrameUpdater.h>
#include <Il2CppModLoader/app/types/CharacterPlatformMovement_MoveSeinToPositionSmoothly_d_224.h>
#include <Il2CppModLoader/app/types/CharacterPlatformMovement__Array.h>
#include <Il2CppModLoader/app/types/CharacterPlatformMovement_c.h>
#include <Il2CppModLoader/app/types/DestroyManager.h>
#include <Il2CppModLoader/app/types/DestroyManager_CountAndCallback.h>
#include <Il2CppModLoader/app/types/DisableGameObjectWhenOutOfFrustrum.h>
#include <Il2CppModLoader/app/types/EntityPlaceholder_c.h>
#include <Il2CppModLoader/app/types/GlobalPlaceholderCountData_Tally__Array.h>
#include <Il2CppModLoader/app/types/GoToSceneController.h>
#include <Il2CppModLoader/app/types/IScenesManagerBehaviour__Array.h>
#include <Il2CppModLoader/app/types/InstantLoadScenesController.h>
#include <Il2CppModLoader/app/types/InstantiateUtility.h>
#include <Il2CppModLoader/app/types/InstantiateUtility_c_DisplayClass30_0.h>
#include <Il2CppModLoader/app/types/InstantiationRecycleHelper_c_DisplayClass4_0.h>
#include <Il2CppModLoader/app/types/InstantiationRecycleHelper_c_DisplayClass5_0.h>
#include <Il2CppModLoader/app/types/LateStartHook.h>
#include <Il2CppModLoader/app/types/List_1_SoundZoneProcessor_Job_PositionZoneEvent___Array.h>
#include <Il2CppModLoader/app/types/List_1_SoundZoneProcessor_Job_PositionZoneEvent___Array__Array.h>
#include <Il2CppModLoader/app/types/LoadFromMasterAtStart_c.h>
#include <Il2CppModLoader/app/types/LoadingBoostController.h>
#include <Il2CppModLoader/app/types/LoadingBoostController_BoostModeSettings.h>
#include <Il2CppModLoader/app/types/LoadingBoostController_BoostModeSettings__Array.h>
#include <Il2CppModLoader/app/types/MenuTabManager.h>
#include <Il2CppModLoader/app/types/MenuTabManager_c.h>
#include <Il2CppModLoader/app/types/MeshRendererFrustrumOptimiser.h>
#include <Il2CppModLoader/app/types/NavigableOnGUI_1.h>
#include <Il2CppModLoader/app/types/PerspectiveRotationSystem.h>
#include <Il2CppModLoader/app/types/PlatformMovementPortalVisitor.h>
#include <Il2CppModLoader/app/types/PlatformMovementPortalVisitor_c.h>
#include <Il2CppModLoader/app/types/PlatformMovement_c.h>
#include <Il2CppModLoader/app/types/PositionSyncTask__Array__Array.h>
#include <Il2CppModLoader/app/types/QuestIconsUI.h>
#include <Il2CppModLoader/app/types/QuestIconsUI_c.h>
#include <Il2CppModLoader/app/types/QuestsController.h>
#include <Il2CppModLoader/app/types/QuestsController_c_DisplayClass53_0.h>
#include <Il2CppModLoader/app/types/QuestsController_c_DisplayClass54_0.h>
#include <Il2CppModLoader/app/types/QuestsUI.h>
#include <Il2CppModLoader/app/types/QuestsUI_c.h>
#include <Il2CppModLoader/app/types/RECT.h>
#include <Il2CppModLoader/app/types/RigidbodyInteractionController.h>
#include <Il2CppModLoader/app/types/RigidbodyInteractionController_SoundInteractionInfo.h>
#include <Il2CppModLoader/app/types/RollingMovement_c.h>
#include <Il2CppModLoader/app/types/RuntimeQuest.h>
#include <Il2CppModLoader/app/types/SaveSlotBackup.h>
#include <Il2CppModLoader/app/types/SaveSlotBackupInfo.h>
#include <Il2CppModLoader/app/types/SaveSlotBackupInfo__Array.h>
#include <Il2CppModLoader/app/types/SaveSlotBackupsManager.h>
#include <Il2CppModLoader/app/types/SaveSlotBackupsManager_BackupParseQueue.h>
#include <Il2CppModLoader/app/types/SaveSlotBackupsManager_c.h>
#include <Il2CppModLoader/app/types/SaveSlotInfo.h>
#include <Il2CppModLoader/app/types/SaveSlotsManager.h>
#include <Il2CppModLoader/app/types/SaveSlotsManager_c.h>
#include <Il2CppModLoader/app/types/SaveSlotsScreenshotManager.h>
#include <Il2CppModLoader/app/types/SaveSlotsUI.h>
#include <Il2CppModLoader/app/types/SaveSlotsUI_StorageOperation.h>
#include <Il2CppModLoader/app/types/SaveSlotsUI_c_DisplayClass61_0.h>
#include <Il2CppModLoader/app/types/SaveSlotsUI_c_DisplayClass76_0.h>
#include <Il2CppModLoader/app/types/SceneLoadingQueue.h>
#include <Il2CppModLoader/app/types/SceneLoadingQueue_QueueListComparer.h>
#include <Il2CppModLoader/app/types/SceneLoadingQueue_QueueSceneToLoad.h>
#include <Il2CppModLoader/app/types/SceneResourcesUnloadSystem.h>
#include <Il2CppModLoader/app/types/ScenesManager.h>
#include <Il2CppModLoader/app/types/ScenesManagerContext.h>
#include <Il2CppModLoader/app/types/ScenesManagerSettings.h>
#include <Il2CppModLoader/app/types/SeinDoubleJumpPuppet_Event__Enum.h>
#include <Il2CppModLoader/app/types/SeinEventsDebugger_Entry.h>
#include <Il2CppModLoader/app/types/SeinEventsDebugger_c.h>
#include <Il2CppModLoader/app/types/SeinIdlePuppet_c.h>
#include <Il2CppModLoader/app/types/SeinPlatformMovement.h>
#include <Il2CppModLoader/app/types/SeinWallJumpPuppet_Event__Enum.h>
#include <Il2CppModLoader/app/types/ShardTraderNPC.h>
#include <Il2CppModLoader/app/types/SoundCompositionPlayer_c_DisplayClass12_0.h>
#include <Il2CppModLoader/app/types/SoundCompositionTransition_FadeInformation.h>
#include <Il2CppModLoader/app/types/SoundZoneProcessor_Job.h>
#include <Il2CppModLoader/app/types/TimeSlicedJobPriority__Enum.h>
#include <Il2CppModLoader/app/types/Timer_2.h>
#include <Il2CppModLoader/app/types/UberPoolGroup.h>
#include <Il2CppModLoader/app/types/UberPoolGroupWarmer.h>
#include <Il2CppModLoader/app/types/UberPoolGroupWarmer_PrewarmItem.h>
#include <Il2CppModLoader/app/types/UberPoolGroupWarmer_PrewarmItem__Array.h>
#include <Il2CppModLoader/app/types/UberPoolItem.h>
#include <Il2CppModLoader/app/types/UberPoolManager.h>
#include <Il2CppModLoader/app/types/UberPoolManager_ContinuousTimesliceJob.h>
#include <Il2CppModLoader/app/types/UberPoolManager_ObjectTracking.h>
#include <Il2CppModLoader/app/types/UberPoolManager_RunDelayed_d_89.h>
#include <Il2CppModLoader/app/types/UberPoolManager_c.h>
#include <Il2CppModLoader/app/types/UberPoolTimeslicedPrewarmer.h>
#include <Il2CppModLoader/app/types/UberPoolTimeslicedPrewarmer_c.h>
#include <Il2CppModLoader/app/types/WotwWwiseBootstrapConfiguration_c_DisplayClass7_0.h>
#include <Il2CppModLoader/app/types/ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array.h>
#include <Il2CppModLoader/app/types/ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace List_1_SoundZoneProcessor_Job_PositionZoneEvent___Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::List_1_SoundZoneProcessor_Job_PositionZoneEvent___Array__Class** type_info = (::app::List_1_SoundZoneProcessor_Job_PositionZoneEvent___Array__Class**)(modloader::win::memory::resolve_rva(0x04772AA8));
    }
    namespace SoundZoneProcessor_Job {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SoundZoneProcessor_Job__Class** type_info = (::app::SoundZoneProcessor_Job__Class**)(modloader::win::memory::resolve_rva(0x0475BBC0));
    }
    namespace PositionSyncTask__Array__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PositionSyncTask__Array__Array__Class** type_info = (::app::PositionSyncTask__Array__Array__Class**)(modloader::win::memory::resolve_rva(0x047202C0));
    }
    namespace ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array__Class** type_info = (::app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array__Class**)(modloader::win::memory::resolve_rva(0x0478AD00));
    }
    namespace ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array__Class** type_info = (::app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array__Class**)(modloader::win::memory::resolve_rva(0x0477CF40));
    }
    namespace List_1_SoundZoneProcessor_Job_PositionZoneEvent___Array__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::List_1_SoundZoneProcessor_Job_PositionZoneEvent___Array__Array__Class** type_info = (::app::List_1_SoundZoneProcessor_Job_PositionZoneEvent___Array__Array__Class**)(modloader::win::memory::resolve_rva(0x04740430));
    }
    namespace WotwWwiseBootstrapConfiguration_c_DisplayClass7_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WotwWwiseBootstrapConfiguration_c_DisplayClass7_0__Class** type_info = (::app::WotwWwiseBootstrapConfiguration_c_DisplayClass7_0__Class**)(modloader::win::memory::resolve_rva(0x0476FF48));
    }
    namespace SoundCompositionTransition_FadeInformation {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SoundCompositionTransition_FadeInformation__Class** type_info = (::app::SoundCompositionTransition_FadeInformation__Class**)(modloader::win::memory::resolve_rva(0x0476EE30));
    }
    namespace SoundCompositionPlayer_c_DisplayClass12_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SoundCompositionPlayer_c_DisplayClass12_0__Class** type_info = (::app::SoundCompositionPlayer_c_DisplayClass12_0__Class**)(modloader::win::memory::resolve_rva(0x04707F50));
    }
    namespace BuilderNPC_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BuilderNPC_c__Class** type_info = (::app::BuilderNPC_c__Class**)(modloader::win::memory::resolve_rva(0x04711248));
    }
    namespace CartographerNPC {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CartographerNPC__Class** type_info = (::app::CartographerNPC__Class**)(modloader::win::memory::resolve_rva(0x0472F470));
    }
    namespace ShardTraderNPC {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShardTraderNPC__Class** type_info = (::app::ShardTraderNPC__Class**)(modloader::win::memory::resolve_rva(0x0476B9B0));
    }
    namespace MeshRendererFrustrumOptimiser {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MeshRendererFrustrumOptimiser__Class** type_info = (::app::MeshRendererFrustrumOptimiser__Class**)(modloader::win::memory::resolve_rva(0x0473B1C0));
    }
    namespace Timer_2 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Timer_2__Class** type_info = (::app::Timer_2__Class**)(modloader::win::memory::resolve_rva(0x04760070));
    }
    namespace CameraFrustumOptimizer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CameraFrustumOptimizer__Class** type_info = (::app::CameraFrustumOptimizer__Class**)(modloader::win::memory::resolve_rva(0x0477AA28));
    }
    namespace CameraFrustumOptimizer_EarlyZActivation {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CameraFrustumOptimizer_EarlyZActivation__Class** type_info = (::app::CameraFrustumOptimizer_EarlyZActivation__Class**)(modloader::win::memory::resolve_rva(0x0472F070));
    }
    namespace DisableGameObjectWhenOutOfFrustrum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DisableGameObjectWhenOutOfFrustrum__Class** type_info = (::app::DisableGameObjectWhenOutOfFrustrum__Class**)(modloader::win::memory::resolve_rva(0x047427D8));
    }
    namespace MenuTabManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MenuTabManager__Class** type_info = (::app::MenuTabManager__Class**)(modloader::win::memory::resolve_rva(0x0472A508));
    }
    namespace MenuTabManager_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MenuTabManager_c__Class** type_info = (::app::MenuTabManager_c__Class**)(modloader::win::memory::resolve_rva(0x047245D0));
    }
    namespace SeinDoubleJumpPuppet_Event__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinDoubleJumpPuppet_Event__Enum__Class** type_info = (::app::SeinDoubleJumpPuppet_Event__Enum__Class**)(modloader::win::memory::resolve_rva(0x047218C0));
    }
    namespace SeinIdlePuppet_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinIdlePuppet_c__Class** type_info = (::app::SeinIdlePuppet_c__Class**)(modloader::win::memory::resolve_rva(0x04717E50));
    }
    namespace SeinWallJumpPuppet_Event__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinWallJumpPuppet_Event__Enum__Class** type_info = (::app::SeinWallJumpPuppet_Event__Enum__Class**)(modloader::win::memory::resolve_rva(0x04715A40));
    }
    namespace RECT {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RECT__Class** type_info = (::app::RECT__Class**)(modloader::win::memory::resolve_rva(0x0473E098));
    }
    namespace PerspectiveRotationSystem {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PerspectiveRotationSystem__Class** type_info = (::app::PerspectiveRotationSystem__Class**)(modloader::win::memory::resolve_rva(0x04775920));
    }
    namespace RigidbodyInteractionController {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RigidbodyInteractionController__Class** type_info = (::app::RigidbodyInteractionController__Class**)(modloader::win::memory::resolve_rva(0x04761630));
    }
    namespace RigidbodyInteractionController_SoundInteractionInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RigidbodyInteractionController_SoundInteractionInfo__Class** type_info = (::app::RigidbodyInteractionController_SoundInteractionInfo__Class**)(modloader::win::memory::resolve_rva(0x04793C68));
    }
    namespace EntityPlaceholder_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EntityPlaceholder_c__Class** type_info = (::app::EntityPlaceholder_c__Class**)(modloader::win::memory::resolve_rva(0x04733970));
    }
    namespace GlobalPlaceholderCountData_Tally__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GlobalPlaceholderCountData_Tally__Array__Class** type_info = (::app::GlobalPlaceholderCountData_Tally__Array__Class**)(modloader::win::memory::resolve_rva(0x04771228));
    }
    namespace CharacterPlatformMovement_MoveSeinToPositionSmoothly_d_224 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CharacterPlatformMovement_MoveSeinToPositionSmoothly_d_224__Class** type_info = (::app::CharacterPlatformMovement_MoveSeinToPositionSmoothly_d_224__Class**)(modloader::win::memory::resolve_rva(0x0474E7A8));
    }
    namespace CharacterPlatformMovement_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CharacterPlatformMovement_c__Class** type_info = (::app::CharacterPlatformMovement_c__Class**)(modloader::win::memory::resolve_rva(0x0472CFE0));
    }
    namespace CharacterPlatformMovementManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CharacterPlatformMovementManager__Class** type_info = (::app::CharacterPlatformMovementManager__Class**)(modloader::win::memory::resolve_rva(0x04785BC8));
    }
    namespace CharacterPlatformMovement__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CharacterPlatformMovement__Array__Class** type_info = (::app::CharacterPlatformMovement__Array__Class**)(modloader::win::memory::resolve_rva(0x0472CA38));
    }
    namespace CharacterPlatformMovementManager_LateFrameUpdater {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CharacterPlatformMovementManager_LateFrameUpdater__Class** type_info = (::app::CharacterPlatformMovementManager_LateFrameUpdater__Class**)(modloader::win::memory::resolve_rva(0x04779B80));
    }
    namespace PlatformMovementPortalVisitor {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlatformMovementPortalVisitor__Class** type_info = (::app::PlatformMovementPortalVisitor__Class**)(modloader::win::memory::resolve_rva(0x0476CFB8));
    }
    namespace PlatformMovement_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlatformMovement_c__Class** type_info = (::app::PlatformMovement_c__Class**)(modloader::win::memory::resolve_rva(0x04732980));
    }
    namespace PlatformMovementPortalVisitor_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlatformMovementPortalVisitor_c__Class** type_info = (::app::PlatformMovementPortalVisitor_c__Class**)(modloader::win::memory::resolve_rva(0x04714460));
    }
    namespace RollingMovement_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RollingMovement_c__Class** type_info = (::app::RollingMovement_c__Class**)(modloader::win::memory::resolve_rva(0x0471F3E8));
    }
    namespace SeinEventsDebugger_Entry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinEventsDebugger_Entry__Class** type_info = (::app::SeinEventsDebugger_Entry__Class**)(modloader::win::memory::resolve_rva(0x04774A30));
    }
    namespace SeinEventsDebugger_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinEventsDebugger_c__Class** type_info = (::app::SeinEventsDebugger_c__Class**)(modloader::win::memory::resolve_rva(0x04767240));
    }
    namespace SeinPlatformMovement {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinPlatformMovement__Class** type_info = (::app::SeinPlatformMovement__Class**)(modloader::win::memory::resolve_rva(0x047818C0));
    }
    namespace InstantiateUtility {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InstantiateUtility__Class** type_info = (::app::InstantiateUtility__Class**)(modloader::win::memory::resolve_rva(0x04721660));
    }
    namespace InstantiateUtility_c_DisplayClass30_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InstantiateUtility_c_DisplayClass30_0__Class** type_info = (::app::InstantiateUtility_c_DisplayClass30_0__Class**)(modloader::win::memory::resolve_rva(0x04747420));
    }
    namespace InstantiationRecycleHelper_c_DisplayClass4_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InstantiationRecycleHelper_c_DisplayClass4_0__Class** type_info = (::app::InstantiationRecycleHelper_c_DisplayClass4_0__Class**)(modloader::win::memory::resolve_rva(0x04789448));
    }
    namespace InstantiationRecycleHelper_c_DisplayClass5_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InstantiationRecycleHelper_c_DisplayClass5_0__Class** type_info = (::app::InstantiationRecycleHelper_c_DisplayClass5_0__Class**)(modloader::win::memory::resolve_rva(0x0471F710));
    }
    namespace UberPoolGroup {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberPoolGroup__Class** type_info = (::app::UberPoolGroup__Class**)(modloader::win::memory::resolve_rva(0x047779B8));
    }
    namespace UberPoolItem {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberPoolItem__Class** type_info = (::app::UberPoolItem__Class**)(modloader::win::memory::resolve_rva(0x047460B8));
    }
    namespace UberPoolGroupWarmer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberPoolGroupWarmer__Class** type_info = (::app::UberPoolGroupWarmer__Class**)(modloader::win::memory::resolve_rva(0x0476DDB0));
    }
    namespace UberPoolGroupWarmer_PrewarmItem {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberPoolGroupWarmer_PrewarmItem__Class** type_info = (::app::UberPoolGroupWarmer_PrewarmItem__Class**)(modloader::win::memory::resolve_rva(0x0478B3E0));
    }
    namespace UberPoolGroupWarmer_PrewarmItem__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberPoolGroupWarmer_PrewarmItem__Array__Class** type_info = (::app::UberPoolGroupWarmer_PrewarmItem__Array__Class**)(modloader::win::memory::resolve_rva(0x04770210));
    }
    namespace UberPoolManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberPoolManager__Class** type_info = (::app::UberPoolManager__Class**)(modloader::win::memory::resolve_rva(0x0474D0D0));
    }
    namespace UberPoolManager_ObjectTracking {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberPoolManager_ObjectTracking__Class** type_info = (::app::UberPoolManager_ObjectTracking__Class**)(modloader::win::memory::resolve_rva(0x0478FB00));
    }
    namespace TimeSlicedJobPriority__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TimeSlicedJobPriority__Enum__Class** type_info = (::app::TimeSlicedJobPriority__Enum__Class**)(modloader::win::memory::resolve_rva(0x04721AF0));
    }
    namespace UberPoolManager_ContinuousTimesliceJob {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberPoolManager_ContinuousTimesliceJob__Class** type_info = (::app::UberPoolManager_ContinuousTimesliceJob__Class**)(modloader::win::memory::resolve_rva(0x04701F10));
    }
    namespace UberPoolManager_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberPoolManager_c__Class** type_info = (::app::UberPoolManager_c__Class**)(modloader::win::memory::resolve_rva(0x04751FC0));
    }
    namespace UberPoolManager_RunDelayed_d_89 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberPoolManager_RunDelayed_d_89__Class** type_info = (::app::UberPoolManager_RunDelayed_d_89__Class**)(modloader::win::memory::resolve_rva(0x0476ED40));
    }
    namespace UberPoolTimeslicedPrewarmer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberPoolTimeslicedPrewarmer__Class** type_info = (::app::UberPoolTimeslicedPrewarmer__Class**)(modloader::win::memory::resolve_rva(0x04729928));
    }
    namespace UberPoolTimeslicedPrewarmer_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberPoolTimeslicedPrewarmer_c__Class** type_info = (::app::UberPoolTimeslicedPrewarmer_c__Class**)(modloader::win::memory::resolve_rva(0x0471D0A8));
    }
    namespace RuntimeQuest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RuntimeQuest__Class** type_info = (::app::RuntimeQuest__Class**)(modloader::win::memory::resolve_rva(0x04733CE8));
    }
    namespace QuestIconsUI {
        IL2CPP_MODLOADER_DLLEXPORT ::app::QuestIconsUI__Class** type_info = (::app::QuestIconsUI__Class**)(modloader::win::memory::resolve_rva(0x0474B150));
    }
    namespace QuestIconsUI_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::QuestIconsUI_c__Class** type_info = (::app::QuestIconsUI_c__Class**)(modloader::win::memory::resolve_rva(0x0476C840));
    }
    namespace QuestsController {
        IL2CPP_MODLOADER_DLLEXPORT ::app::QuestsController__Class** type_info = (::app::QuestsController__Class**)(modloader::win::memory::resolve_rva(0x0471E068));
    }
    namespace QuestsController_c_DisplayClass53_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::QuestsController_c_DisplayClass53_0__Class** type_info = (::app::QuestsController_c_DisplayClass53_0__Class**)(modloader::win::memory::resolve_rva(0x0472A098));
    }
    namespace QuestsController_c_DisplayClass54_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::QuestsController_c_DisplayClass54_0__Class** type_info = (::app::QuestsController_c_DisplayClass54_0__Class**)(modloader::win::memory::resolve_rva(0x047457C8));
    }
    namespace QuestsUI {
        IL2CPP_MODLOADER_DLLEXPORT ::app::QuestsUI__Class** type_info = (::app::QuestsUI__Class**)(modloader::win::memory::resolve_rva(0x04728988));
    }
    namespace QuestsUI_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::QuestsUI_c__Class** type_info = (::app::QuestsUI_c__Class**)(modloader::win::memory::resolve_rva(0x0475A618));
    }
    namespace NavigableOnGUI_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NavigableOnGUI_1__Class** type_info = (::app::NavigableOnGUI_1__Class**)(modloader::win::memory::resolve_rva(0x04767F98));
    }
    namespace LoadFromMasterAtStart_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoadFromMasterAtStart_c__Class** type_info = (::app::LoadFromMasterAtStart_c__Class**)(modloader::win::memory::resolve_rva(0x04743DC8));
    }
    namespace BackupSaveCleverMenuItem {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BackupSaveCleverMenuItem__Class** type_info = (::app::BackupSaveCleverMenuItem__Class**)(modloader::win::memory::resolve_rva(0x0475A140));
    }
    namespace SaveSlotInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SaveSlotInfo__Class** type_info = (::app::SaveSlotInfo__Class**)(modloader::win::memory::resolve_rva(0x04740510));
    }
    namespace SaveSlotBackupInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SaveSlotBackupInfo__Class** type_info = (::app::SaveSlotBackupInfo__Class**)(modloader::win::memory::resolve_rva(0x04708748));
    }
    namespace SaveSlotBackupInfo__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SaveSlotBackupInfo__Array__Class** type_info = (::app::SaveSlotBackupInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x04708890));
    }
    namespace BackupSaveCleverMenuItemSelectionManager_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BackupSaveCleverMenuItemSelectionManager_c__Class** type_info = (::app::BackupSaveCleverMenuItemSelectionManager_c__Class**)(modloader::win::memory::resolve_rva(0x0472FE48));
    }
    namespace SaveSlotBackup {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SaveSlotBackup__Class** type_info = (::app::SaveSlotBackup__Class**)(modloader::win::memory::resolve_rva(0x04709410));
    }
    namespace SaveSlotBackupsManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SaveSlotBackupsManager__Class** type_info = (::app::SaveSlotBackupsManager__Class**)(modloader::win::memory::resolve_rva(0x04765228));
    }
    namespace SaveSlotBackupsManager_BackupParseQueue {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SaveSlotBackupsManager_BackupParseQueue__Class** type_info = (::app::SaveSlotBackupsManager_BackupParseQueue__Class**)(modloader::win::memory::resolve_rva(0x047788E8));
    }
    namespace SaveSlotBackupsManager_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SaveSlotBackupsManager_c__Class** type_info = (::app::SaveSlotBackupsManager_c__Class**)(modloader::win::memory::resolve_rva(0x047070F8));
    }
    namespace SaveSlotsManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SaveSlotsManager__Class** type_info = (::app::SaveSlotsManager__Class**)(modloader::win::memory::resolve_rva(0x04760018));
    }
    namespace SaveSlotsManager_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SaveSlotsManager_c__Class** type_info = (::app::SaveSlotsManager_c__Class**)(modloader::win::memory::resolve_rva(0x04715310));
    }
    namespace SaveSlotsScreenshotManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SaveSlotsScreenshotManager__Class** type_info = (::app::SaveSlotsScreenshotManager__Class**)(modloader::win::memory::resolve_rva(0x0470A468));
    }
    namespace SaveSlotsUI {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SaveSlotsUI__Class** type_info = (::app::SaveSlotsUI__Class**)(modloader::win::memory::resolve_rva(0x047094A0));
    }
    namespace SaveSlotsUI_StorageOperation {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SaveSlotsUI_StorageOperation__Class** type_info = (::app::SaveSlotsUI_StorageOperation__Class**)(modloader::win::memory::resolve_rva(0x04727CD8));
    }
    namespace SaveSlotsUI_c_DisplayClass61_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SaveSlotsUI_c_DisplayClass61_0__Class** type_info = (::app::SaveSlotsUI_c_DisplayClass61_0__Class**)(modloader::win::memory::resolve_rva(0x04763D68));
    }
    namespace SaveSlotsUI_c_DisplayClass76_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SaveSlotsUI_c_DisplayClass76_0__Class** type_info = (::app::SaveSlotsUI_c_DisplayClass76_0__Class**)(modloader::win::memory::resolve_rva(0x047757D8));
    }
    namespace AspectRatioManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AspectRatioManager__Class** type_info = (::app::AspectRatioManager__Class**)(modloader::win::memory::resolve_rva(0x047568B0));
    }
    namespace DestroyManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DestroyManager__Class** type_info = (::app::DestroyManager__Class**)(modloader::win::memory::resolve_rva(0x0474F278));
    }
    namespace DestroyManager_CountAndCallback {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DestroyManager_CountAndCallback__Class** type_info = (::app::DestroyManager_CountAndCallback__Class**)(modloader::win::memory::resolve_rva(0x047352B0));
    }
    namespace GoToSceneController {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GoToSceneController__Class** type_info = (::app::GoToSceneController__Class**)(modloader::win::memory::resolve_rva(0x0474A7D0));
    }
    namespace ScenesManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ScenesManager__Class** type_info = (::app::ScenesManager__Class**)(modloader::win::memory::resolve_rva(0x0478D1B8));
    }
    namespace SceneResourcesUnloadSystem {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SceneResourcesUnloadSystem__Class** type_info = (::app::SceneResourcesUnloadSystem__Class**)(modloader::win::memory::resolve_rva(0x0475AA18));
    }
    namespace IScenesManagerBehaviour__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IScenesManagerBehaviour__Array__Class** type_info = (::app::IScenesManagerBehaviour__Array__Class**)(modloader::win::memory::resolve_rva(0x04794178));
    }
    namespace ScenesManagerSettings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ScenesManagerSettings__Class** type_info = (::app::ScenesManagerSettings__Class**)(modloader::win::memory::resolve_rva(0x04785730));
    }
    namespace ScenesManagerContext {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ScenesManagerContext__Class** type_info = (::app::ScenesManagerContext__Class**)(modloader::win::memory::resolve_rva(0x0473CCF0));
    }
    namespace SceneLoadingQueue {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SceneLoadingQueue__Class** type_info = (::app::SceneLoadingQueue__Class**)(modloader::win::memory::resolve_rva(0x0475A910));
    }
    namespace SceneLoadingQueue_QueueSceneToLoad {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SceneLoadingQueue_QueueSceneToLoad__Class** type_info = (::app::SceneLoadingQueue_QueueSceneToLoad__Class**)(modloader::win::memory::resolve_rva(0x0470C228));
    }
    namespace SceneLoadingQueue_QueueListComparer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SceneLoadingQueue_QueueListComparer__Class** type_info = (::app::SceneLoadingQueue_QueueListComparer__Class**)(modloader::win::memory::resolve_rva(0x04764C48));
    }
    namespace InstantLoadScenesController {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InstantLoadScenesController__Class** type_info = (::app::InstantLoadScenesController__Class**)(modloader::win::memory::resolve_rva(0x0471CD28));
    }
    namespace LateStartHook {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LateStartHook__Class** type_info = (::app::LateStartHook__Class**)(modloader::win::memory::resolve_rva(0x04762460));
    }
    namespace LoadingBoostController_BoostModeSettings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoadingBoostController_BoostModeSettings__Class** type_info = (::app::LoadingBoostController_BoostModeSettings__Class**)(modloader::win::memory::resolve_rva(0x047109B8));
    }
    namespace LoadingBoostController {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoadingBoostController__Class** type_info = (::app::LoadingBoostController__Class**)(modloader::win::memory::resolve_rva(0x047556E8));
    }
    namespace LoadingBoostController_BoostModeSettings__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoadingBoostController_BoostModeSettings__Array__Class** type_info = (::app::LoadingBoostController_BoostModeSettings__Array__Class**)(modloader::win::memory::resolve_rva(0x0473FAB0));
    }
} // namespace app::classes::types
