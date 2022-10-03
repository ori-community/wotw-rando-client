#include <Il2CppModLoader/app/types/AbilityUpgradeSettings.h>
#include <Il2CppModLoader/app/types/AmbienceListener.h>
#include <Il2CppModLoader/app/types/AmbienceZone_WiseAuxSend.h>
#include <Il2CppModLoader/app/types/Ambience_AmbienceTrack.h>
#include <Il2CppModLoader/app/types/Ambience_Layer_Track.h>
#include <Il2CppModLoader/app/types/AmbientSoundZone.h>
#include <Il2CppModLoader/app/types/AnimatingFloat.h>
#include <Il2CppModLoader/app/types/AudioStateZone.h>
#include <Il2CppModLoader/app/types/AxisButtonInput.h>
#include <Il2CppModLoader/app/types/Axis__Enum_1.h>
#include <Il2CppModLoader/app/types/Button__Enum.h>
#include <Il2CppModLoader/app/types/CarryableRigidBody.h>
#include <Il2CppModLoader/app/types/ChangeDifficultyScreen.h>
#include <Il2CppModLoader/app/types/CombinedMessageProvider_GetMessages_d_3.h>
#include <Il2CppModLoader/app/types/ControllerButtonInput.h>
#include <Il2CppModLoader/app/types/ExtractedIntFromInt64.h>
#include <Il2CppModLoader/app/types/ForceLanguageTranslatedMessageProvider_GetMessages_d_1.h>
#include <Il2CppModLoader/app/types/ForceLightTorchStopChasingZone.h>
#include <Il2CppModLoader/app/types/GhostAnimationParameterPlugin.h>
#include <Il2CppModLoader/app/types/GhostAnimationParameterPlugin_AnimationParameterData.h>
#include <Il2CppModLoader/app/types/GhostAnimationParameterPlugin_FloatParamenterTracker.h>
#include <Il2CppModLoader/app/types/GhostAnimationParameterPlugin_VectorParamenterTracker.h>
#include <Il2CppModLoader/app/types/GhostCameraPlugin.h>
#include <Il2CppModLoader/app/types/GhostCameraPlugin_CameraData.h>
#include <Il2CppModLoader/app/types/GhostLineRendererPlugin.h>
#include <Il2CppModLoader/app/types/GhostLineRendererPlugin_LineRendererData.h>
#include <Il2CppModLoader/app/types/GhostSceneTrackingPlugin.h>
#include <Il2CppModLoader/app/types/GhostSceneTrackingPlugin_Data.h>
#include <Il2CppModLoader/app/types/GhostServerEventsPlugin.h>
#include <Il2CppModLoader/app/types/GhostServerEventsPlugin_ServerEventData.h>
#include <Il2CppModLoader/app/types/GhostServerEventsPlugin_ServerEventData_ServerObjectsData.h>
#include <Il2CppModLoader/app/types/GhostStateMachineData.h>
#include <Il2CppModLoader/app/types/GhostStateMachinePlugin.h>
#include <Il2CppModLoader/app/types/GhostTimeTrackingPlugin.h>
#include <Il2CppModLoader/app/types/GhostTimeTrackingPlugin_Data.h>
#include <Il2CppModLoader/app/types/GhostTimelineEventsPlugin.h>
#include <Il2CppModLoader/app/types/GhostTimelineEventsPlugin_TimelineEventData.h>
#include <Il2CppModLoader/app/types/GhostUberStatePlugin.h>
#include <Il2CppModLoader/app/types/GhostUberStatePlugin_UberStateData.h>
#include <Il2CppModLoader/app/types/GhostWorldObjectsLifetimePlugin.h>
#include <Il2CppModLoader/app/types/GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry.h>
#include <Il2CppModLoader/app/types/HealthController_c.h>
#include <Il2CppModLoader/app/types/HoloLensController.h>
#include <Il2CppModLoader/app/types/HoloLensFileWriteState.h>
#include <Il2CppModLoader/app/types/IgnitableSpiritTorch_c.h>
#include <Il2CppModLoader/app/types/InventoryManager.h>
#include <Il2CppModLoader/app/types/LeaderboardB__Enum.h>
#include <Il2CppModLoader/app/types/LeaderboardData.h>
#include <Il2CppModLoader/app/types/LeaderboardData_Entry.h>
#include <Il2CppModLoader/app/types/LeaderboardData_c_DisplayClass23_0.h>
#include <Il2CppModLoader/app/types/LeaderboardEntryData.h>
#include <Il2CppModLoader/app/types/Leaderboard__Enum.h>
#include <Il2CppModLoader/app/types/LeaderboardsController.h>
#include <Il2CppModLoader/app/types/LeaderboardsController_UploadScoresRoutine_d_32.h>
#include <Il2CppModLoader/app/types/LightSource.h>
#include <Il2CppModLoader/app/types/LightTorchZone.h>
#include <Il2CppModLoader/app/types/LoadingBootstrap.h>
#include <Il2CppModLoader/app/types/LoadingBootstrap_OnEndOfFrame_d_34.h>
#include <Il2CppModLoader/app/types/LoadingBootstrap_Start_d_25.h>
#include <Il2CppModLoader/app/types/LoadingBootstrap_c.h>
#include <Il2CppModLoader/app/types/LoadingBootstrap_c_DisplayClass23_0.h>
#include <Il2CppModLoader/app/types/LoadingBootstrap_c_DisplayClass28_0.h>
#include <Il2CppModLoader/app/types/LoadingBootstrap_c_DisplayClass29_0.h>
#include <Il2CppModLoader/app/types/LoadingBootstrap_c_DisplayClass37_0.h>
#include <Il2CppModLoader/app/types/LoreNodeWisps.h>
#include <Il2CppModLoader/app/types/MaterialVFXManager.h>
#include <Il2CppModLoader/app/types/MessageBox_c.h>
#include <Il2CppModLoader/app/types/MusicListener.h>
#include <Il2CppModLoader/app/types/OnDelegate.h>
#include <Il2CppModLoader/app/types/OrbSpawnerManager.h>
#include <Il2CppModLoader/app/types/OrbSpawnerManager_ItemType__Enum.h>
#include <Il2CppModLoader/app/types/PhysicalPhysicaSystemManagerPlugin_Data.h>
#include <Il2CppModLoader/app/types/PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData.h>
#include <Il2CppModLoader/app/types/PrewarmOperationSlot__Enum.h>
#include <Il2CppModLoader/app/types/QuestNodeWisps.h>
#include <Il2CppModLoader/app/types/ReplayData.h>
#include <Il2CppModLoader/app/types/SaveInTheDarkZone.h>
#include <Il2CppModLoader/app/types/ScenariosParticleSystemPlugin.h>
#include <Il2CppModLoader/app/types/ScenariosRecorder.h>
#include <Il2CppModLoader/app/types/SceneLayers.h>
#include <Il2CppModLoader/app/types/SceneLayers_Layer.h>
#include <Il2CppModLoader/app/types/SceneLayers_Layer__Array.h>
#include <Il2CppModLoader/app/types/SoundZoneProcessor.h>
#include <Il2CppModLoader/app/types/SoundZoneProcessor_Job_PositionZoneEvent.h>
#include <Il2CppModLoader/app/types/SpawnOrbsContext.h>
#include <Il2CppModLoader/app/types/SpiritLightCapsuleVisualAffector.h>
#include <Il2CppModLoader/app/types/SpiritLightDarknessZone.h>
#include <Il2CppModLoader/app/types/SpiritLightVisualAffectorManager.h>
#include <Il2CppModLoader/app/types/TextBoxLine_1.h>
#include <Il2CppModLoader/app/types/ThreadPriority__Enum_1__Array.h>
#include <Il2CppModLoader/app/types/TimelineSequenceLabel.h>
#include <Il2CppModLoader/app/types/TranslatedMessageProvider_GetMessages_d_2.h>
#include <Il2CppModLoader/app/types/UWPVideoPlayer.h>
#include <Il2CppModLoader/app/types/UpgradablePropertyLevel.h>
#include <Il2CppModLoader/app/types/UserLicenseInformation.h>
#include <Il2CppModLoader/app/types/WispMessageProvider_GetMessages_d_1.h>
#include <Il2CppModLoader/app/types/XboxOneController_Axis__Enum.h>
#include <Il2CppModLoader/app/types/XboxOneController_Button__Enum.h>
#include <Il2CppModLoader/app/types/ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array.h>
#include <Il2CppModLoader/app/types/ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PhysicalPhysicaSystemManagerPlugin_Data {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PhysicalPhysicaSystemManagerPlugin_Data__Class** type_info = (::app::PhysicalPhysicaSystemManagerPlugin_Data__Class**)(modloader::win::memory::resolve_rva(0x04720758));
    }
    namespace PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Class** type_info = (::app::PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Class**)(modloader::win::memory::resolve_rva(0x04773E98));
    }
    namespace GhostAnimationParameterPlugin {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GhostAnimationParameterPlugin__Class** type_info = (::app::GhostAnimationParameterPlugin__Class**)(modloader::win::memory::resolve_rva(0x04737A10));
    }
    namespace GhostAnimationParameterPlugin_FloatParamenterTracker {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GhostAnimationParameterPlugin_FloatParamenterTracker__Class** type_info = (::app::GhostAnimationParameterPlugin_FloatParamenterTracker__Class**)(modloader::win::memory::resolve_rva(0x04710440));
    }
    namespace GhostAnimationParameterPlugin_VectorParamenterTracker {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GhostAnimationParameterPlugin_VectorParamenterTracker__Class** type_info = (::app::GhostAnimationParameterPlugin_VectorParamenterTracker__Class**)(modloader::win::memory::resolve_rva(0x0478A808));
    }
    namespace GhostAnimationParameterPlugin_AnimationParameterData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GhostAnimationParameterPlugin_AnimationParameterData__Class** type_info = (::app::GhostAnimationParameterPlugin_AnimationParameterData__Class**)(modloader::win::memory::resolve_rva(0x0476A938));
    }
    namespace GhostCameraPlugin {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GhostCameraPlugin__Class** type_info = (::app::GhostCameraPlugin__Class**)(modloader::win::memory::resolve_rva(0x04781EE8));
    }
    namespace GhostCameraPlugin_CameraData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GhostCameraPlugin_CameraData__Class** type_info = (::app::GhostCameraPlugin_CameraData__Class**)(modloader::win::memory::resolve_rva(0x04727328));
    }
    namespace GhostLineRendererPlugin {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GhostLineRendererPlugin__Class** type_info = (::app::GhostLineRendererPlugin__Class**)(modloader::win::memory::resolve_rva(0x04751FC8));
    }
    namespace GhostLineRendererPlugin_LineRendererData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GhostLineRendererPlugin_LineRendererData__Class** type_info = (::app::GhostLineRendererPlugin_LineRendererData__Class**)(modloader::win::memory::resolve_rva(0x0471BF30));
    }
    namespace GhostSceneTrackingPlugin {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GhostSceneTrackingPlugin__Class** type_info = (::app::GhostSceneTrackingPlugin__Class**)(modloader::win::memory::resolve_rva(0x04736110));
    }
    namespace GhostSceneTrackingPlugin_Data {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GhostSceneTrackingPlugin_Data__Class** type_info = (::app::GhostSceneTrackingPlugin_Data__Class**)(modloader::win::memory::resolve_rva(0x04707248));
    }
    namespace GhostServerEventsPlugin {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GhostServerEventsPlugin__Class** type_info = (::app::GhostServerEventsPlugin__Class**)(modloader::win::memory::resolve_rva(0x0477AEB0));
    }
    namespace GhostServerEventsPlugin_ServerEventData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GhostServerEventsPlugin_ServerEventData__Class** type_info = (::app::GhostServerEventsPlugin_ServerEventData__Class**)(modloader::win::memory::resolve_rva(0x047825E0));
    }
    namespace GhostServerEventsPlugin_ServerEventData_ServerObjectsData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GhostServerEventsPlugin_ServerEventData_ServerObjectsData__Class** type_info = (::app::GhostServerEventsPlugin_ServerEventData_ServerObjectsData__Class**)(modloader::win::memory::resolve_rva(0x04792F00));
    }
    namespace GhostTimelineEventsPlugin {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GhostTimelineEventsPlugin__Class** type_info = (::app::GhostTimelineEventsPlugin__Class**)(modloader::win::memory::resolve_rva(0x04750EC0));
    }
    namespace GhostTimelineEventsPlugin_TimelineEventData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GhostTimelineEventsPlugin_TimelineEventData__Class** type_info = (::app::GhostTimelineEventsPlugin_TimelineEventData__Class**)(modloader::win::memory::resolve_rva(0x04723A00));
    }
    namespace GhostTimeTrackingPlugin {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GhostTimeTrackingPlugin__Class** type_info = (::app::GhostTimeTrackingPlugin__Class**)(modloader::win::memory::resolve_rva(0x0473ED80));
    }
    namespace GhostTimeTrackingPlugin_Data {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GhostTimeTrackingPlugin_Data__Class** type_info = (::app::GhostTimeTrackingPlugin_Data__Class**)(modloader::win::memory::resolve_rva(0x04730608));
    }
    namespace GhostUberStatePlugin {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GhostUberStatePlugin__Class** type_info = (::app::GhostUberStatePlugin__Class**)(modloader::win::memory::resolve_rva(0x0470EE38));
    }
    namespace GhostUberStatePlugin_UberStateData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GhostUberStatePlugin_UberStateData__Class** type_info = (::app::GhostUberStatePlugin_UberStateData__Class**)(modloader::win::memory::resolve_rva(0x04719370));
    }
    namespace GhostWorldObjectsLifetimePlugin {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GhostWorldObjectsLifetimePlugin__Class** type_info = (::app::GhostWorldObjectsLifetimePlugin__Class**)(modloader::win::memory::resolve_rva(0x047517F8));
    }
    namespace GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Class** type_info = (::app::GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Class**)(modloader::win::memory::resolve_rva(0x047823E0));
    }
    namespace ScenariosParticleSystemPlugin {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ScenariosParticleSystemPlugin__Class** type_info = (::app::ScenariosParticleSystemPlugin__Class**)(modloader::win::memory::resolve_rva(0x04780A88));
    }
    namespace GhostStateMachineData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GhostStateMachineData__Class** type_info = (::app::GhostStateMachineData__Class**)(modloader::win::memory::resolve_rva(0x0477E240));
    }
    namespace GhostStateMachinePlugin {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GhostStateMachinePlugin__Class** type_info = (::app::GhostStateMachinePlugin__Class**)(modloader::win::memory::resolve_rva(0x0473FBF8));
    }
    namespace ReplayData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ReplayData__Class** type_info = (::app::ReplayData__Class**)(modloader::win::memory::resolve_rva(0x04729598));
    }
    namespace ScenariosRecorder {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ScenariosRecorder__Class** type_info = (::app::ScenariosRecorder__Class**)(modloader::win::memory::resolve_rva(0x04724A18));
    }
    namespace HealthController_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::HealthController_c__Class** type_info = (::app::HealthController_c__Class**)(modloader::win::memory::resolve_rva(0x047588C0));
    }
    namespace SpawnOrbsContext {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SpawnOrbsContext__Class** type_info = (::app::SpawnOrbsContext__Class**)(modloader::win::memory::resolve_rva(0x047741D0));
    }
    namespace OrbSpawnerManager_ItemType__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::OrbSpawnerManager_ItemType__Enum__Class** type_info = (::app::OrbSpawnerManager_ItemType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0474DF20));
    }
    namespace OrbSpawnerManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::OrbSpawnerManager__Class** type_info = (::app::OrbSpawnerManager__Class**)(modloader::win::memory::resolve_rva(0x04712110));
    }
    namespace HoloLensController {
        IL2CPP_MODLOADER_DLLEXPORT ::app::HoloLensController__Class** type_info = (::app::HoloLensController__Class**)(modloader::win::memory::resolve_rva(0x0478C690));
    }
    namespace HoloLensFileWriteState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::HoloLensFileWriteState__Class** type_info = (::app::HoloLensFileWriteState__Class**)(modloader::win::memory::resolve_rva(0x04735BD8));
    }
    namespace UserLicenseInformation {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UserLicenseInformation__Class** type_info = (::app::UserLicenseInformation__Class**)(modloader::win::memory::resolve_rva(0x04721388));
    }
    namespace LoreNodeWisps {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoreNodeWisps__Class** type_info = (::app::LoreNodeWisps__Class**)(modloader::win::memory::resolve_rva(0x04710830));
    }
    namespace QuestNodeWisps {
        IL2CPP_MODLOADER_DLLEXPORT ::app::QuestNodeWisps__Class** type_info = (::app::QuestNodeWisps__Class**)(modloader::win::memory::resolve_rva(0x0470F7B8));
    }
    namespace AbilityUpgradeSettings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AbilityUpgradeSettings__Class** type_info = (::app::AbilityUpgradeSettings__Class**)(modloader::win::memory::resolve_rva(0x04732DE0));
    }
    namespace UpgradablePropertyLevel {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UpgradablePropertyLevel__Class** type_info = (::app::UpgradablePropertyLevel__Class**)(modloader::win::memory::resolve_rva(0x0476F0C0));
    }
    namespace ChangeDifficultyScreen {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ChangeDifficultyScreen__Class** type_info = (::app::ChangeDifficultyScreen__Class**)(modloader::win::memory::resolve_rva(0x047122B0));
    }
    namespace InventoryManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InventoryManager__Class** type_info = (::app::InventoryManager__Class**)(modloader::win::memory::resolve_rva(0x04721EB8));
    }
    namespace SceneLayers {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SceneLayers__Class** type_info = (::app::SceneLayers__Class**)(modloader::win::memory::resolve_rva(0x04759848));
    }
    namespace SceneLayers_Layer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SceneLayers_Layer__Class** type_info = (::app::SceneLayers_Layer__Class**)(modloader::win::memory::resolve_rva(0x04774330));
    }
    namespace SceneLayers_Layer__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SceneLayers_Layer__Array__Class** type_info = (::app::SceneLayers_Layer__Array__Class**)(modloader::win::memory::resolve_rva(0x04777E58));
    }
    namespace ExtractedIntFromInt64 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ExtractedIntFromInt64__Class** type_info = (::app::ExtractedIntFromInt64__Class**)(modloader::win::memory::resolve_rva(0x04721770));
    }
    namespace Leaderboard__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Leaderboard__Enum__Class** type_info = (::app::Leaderboard__Enum__Class**)(modloader::win::memory::resolve_rva(0x04743458));
    }
    namespace LeaderboardB__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LeaderboardB__Enum__Class** type_info = (::app::LeaderboardB__Enum__Class**)(modloader::win::memory::resolve_rva(0x047101F0));
    }
    namespace LeaderboardData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LeaderboardData__Class** type_info = (::app::LeaderboardData__Class**)(modloader::win::memory::resolve_rva(0x04766870));
    }
    namespace LeaderboardData_Entry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LeaderboardData_Entry__Class** type_info = (::app::LeaderboardData_Entry__Class**)(modloader::win::memory::resolve_rva(0x0475B880));
    }
    namespace LeaderboardData_c_DisplayClass23_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LeaderboardData_c_DisplayClass23_0__Class** type_info = (::app::LeaderboardData_c_DisplayClass23_0__Class**)(modloader::win::memory::resolve_rva(0x04704E70));
    }
    namespace LeaderboardEntryData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LeaderboardEntryData__Class** type_info = (::app::LeaderboardEntryData__Class**)(modloader::win::memory::resolve_rva(0x0477CB68));
    }
    namespace LeaderboardsController {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LeaderboardsController__Class** type_info = (::app::LeaderboardsController__Class**)(modloader::win::memory::resolve_rva(0x0476F3D0));
    }
    namespace LeaderboardsController_UploadScoresRoutine_d_32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LeaderboardsController_UploadScoresRoutine_d_32__Class** type_info = (::app::LeaderboardsController_UploadScoresRoutine_d_32__Class**)(modloader::win::memory::resolve_rva(0x04790FC8));
    }
    namespace ForceLightTorchStopChasingZone {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ForceLightTorchStopChasingZone__Class** type_info = (::app::ForceLightTorchStopChasingZone__Class**)(modloader::win::memory::resolve_rva(0x04751D98));
    }
    namespace IgnitableSpiritTorch_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IgnitableSpiritTorch_c__Class** type_info = (::app::IgnitableSpiritTorch_c__Class**)(modloader::win::memory::resolve_rva(0x0473A7B0));
    }
    namespace LightSource {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LightSource__Class** type_info = (::app::LightSource__Class**)(modloader::win::memory::resolve_rva(0x0473AAC8));
    }
    namespace CarryableRigidBody {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CarryableRigidBody__Class** type_info = (::app::CarryableRigidBody__Class**)(modloader::win::memory::resolve_rva(0x04710A70));
    }
    namespace LightTorchZone {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LightTorchZone__Class** type_info = (::app::LightTorchZone__Class**)(modloader::win::memory::resolve_rva(0x04707E68));
    }
    namespace SaveInTheDarkZone {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SaveInTheDarkZone__Class** type_info = (::app::SaveInTheDarkZone__Class**)(modloader::win::memory::resolve_rva(0x04719010));
    }
    namespace SpiritLightCapsuleVisualAffector {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SpiritLightCapsuleVisualAffector__Class** type_info = (::app::SpiritLightCapsuleVisualAffector__Class**)(modloader::win::memory::resolve_rva(0x0475C3A0));
    }
    namespace SpiritLightDarknessZone {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SpiritLightDarknessZone__Class** type_info = (::app::SpiritLightDarknessZone__Class**)(modloader::win::memory::resolve_rva(0x0474B468));
    }
    namespace SpiritLightVisualAffectorManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SpiritLightVisualAffectorManager__Class** type_info = (::app::SpiritLightVisualAffectorManager__Class**)(modloader::win::memory::resolve_rva(0x04761548));
    }
    namespace LoadingBootstrap {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoadingBootstrap__Class** type_info = (::app::LoadingBootstrap__Class**)(modloader::win::memory::resolve_rva(0x0478B858));
    }
    namespace ThreadPriority__Enum_1__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ThreadPriority__Enum_1__Array__Class** type_info = (::app::ThreadPriority__Enum_1__Array__Class**)(modloader::win::memory::resolve_rva(0x0472BE10));
    }
    namespace PrewarmOperationSlot__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PrewarmOperationSlot__Enum__Class** type_info = (::app::PrewarmOperationSlot__Enum__Class**)(modloader::win::memory::resolve_rva(0x04743858));
    }
    namespace LoadingBootstrap_c_DisplayClass23_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoadingBootstrap_c_DisplayClass23_0__Class** type_info = (::app::LoadingBootstrap_c_DisplayClass23_0__Class**)(modloader::win::memory::resolve_rva(0x0472B998));
    }
    namespace LoadingBootstrap_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoadingBootstrap_c__Class** type_info = (::app::LoadingBootstrap_c__Class**)(modloader::win::memory::resolve_rva(0x04761F70));
    }
    namespace LoadingBootstrap_Start_d_25 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoadingBootstrap_Start_d_25__Class** type_info = (::app::LoadingBootstrap_Start_d_25__Class**)(modloader::win::memory::resolve_rva(0x04742DA8));
    }
    namespace LoadingBootstrap_c_DisplayClass28_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoadingBootstrap_c_DisplayClass28_0__Class** type_info = (::app::LoadingBootstrap_c_DisplayClass28_0__Class**)(modloader::win::memory::resolve_rva(0x0477DFA8));
    }
    namespace LoadingBootstrap_c_DisplayClass29_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoadingBootstrap_c_DisplayClass29_0__Class** type_info = (::app::LoadingBootstrap_c_DisplayClass29_0__Class**)(modloader::win::memory::resolve_rva(0x04750838));
    }
    namespace LoadingBootstrap_OnEndOfFrame_d_34 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoadingBootstrap_OnEndOfFrame_d_34__Class** type_info = (::app::LoadingBootstrap_OnEndOfFrame_d_34__Class**)(modloader::win::memory::resolve_rva(0x04751070));
    }
    namespace LoadingBootstrap_c_DisplayClass37_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoadingBootstrap_c_DisplayClass37_0__Class** type_info = (::app::LoadingBootstrap_c_DisplayClass37_0__Class**)(modloader::win::memory::resolve_rva(0x047940D0));
    }
    namespace TimelineSequenceLabel {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TimelineSequenceLabel__Class** type_info = (::app::TimelineSequenceLabel__Class**)(modloader::win::memory::resolve_rva(0x04739168));
    }
    namespace MaterialVFXManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MaterialVFXManager__Class** type_info = (::app::MaterialVFXManager__Class**)(modloader::win::memory::resolve_rva(0x0471B120));
    }
    namespace Button__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Button__Enum__Class** type_info = (::app::Button__Enum__Class**)(modloader::win::memory::resolve_rva(0x047143A0));
    }
    namespace XboxOneController_Button__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XboxOneController_Button__Enum__Class** type_info = (::app::XboxOneController_Button__Enum__Class**)(modloader::win::memory::resolve_rva(0x04717168));
    }
    namespace XboxOneController_Axis__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XboxOneController_Axis__Enum__Class** type_info = (::app::XboxOneController_Axis__Enum__Class**)(modloader::win::memory::resolve_rva(0x047424C8));
    }
    namespace Axis__Enum_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Axis__Enum_1__Class** type_info = (::app::Axis__Enum_1__Class**)(modloader::win::memory::resolve_rva(0x0471F868));
    }
    namespace ControllerButtonInput {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ControllerButtonInput__Class** type_info = (::app::ControllerButtonInput__Class**)(modloader::win::memory::resolve_rva(0x04771258));
    }
    namespace AxisButtonInput {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AxisButtonInput__Class** type_info = (::app::AxisButtonInput__Class**)(modloader::win::memory::resolve_rva(0x0477C1A8));
    }
    namespace CombinedMessageProvider_GetMessages_d_3 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CombinedMessageProvider_GetMessages_d_3__Class** type_info = (::app::CombinedMessageProvider_GetMessages_d_3__Class**)(modloader::win::memory::resolve_rva(0x0475D108));
    }
    namespace ForceLanguageTranslatedMessageProvider_GetMessages_d_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ForceLanguageTranslatedMessageProvider_GetMessages_d_1__Class** type_info = (::app::ForceLanguageTranslatedMessageProvider_GetMessages_d_1__Class**)(modloader::win::memory::resolve_rva(0x04750618));
    }
    namespace MessageBox_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MessageBox_c__Class** type_info = (::app::MessageBox_c__Class**)(modloader::win::memory::resolve_rva(0x04792270));
    }
    namespace TextBoxLine_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TextBoxLine_1__Class** type_info = (::app::TextBoxLine_1__Class**)(modloader::win::memory::resolve_rva(0x0470F4E0));
    }
    namespace TranslatedMessageProvider_GetMessages_d_2 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TranslatedMessageProvider_GetMessages_d_2__Class** type_info = (::app::TranslatedMessageProvider_GetMessages_d_2__Class**)(modloader::win::memory::resolve_rva(0x047713B8));
    }
    namespace WispMessageProvider_GetMessages_d_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WispMessageProvider_GetMessages_d_1__Class** type_info = (::app::WispMessageProvider_GetMessages_d_1__Class**)(modloader::win::memory::resolve_rva(0x04798F90));
    }
    namespace OnDelegate {
        IL2CPP_MODLOADER_DLLEXPORT ::app::OnDelegate__Class** type_info = (::app::OnDelegate__Class**)(modloader::win::memory::resolve_rva(0x0472B640));
    }
    namespace UWPVideoPlayer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UWPVideoPlayer__Class** type_info = (::app::UWPVideoPlayer__Class**)(modloader::win::memory::resolve_rva(0x047067B8));
    }
    namespace AmbienceListener {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AmbienceListener__Class** type_info = (::app::AmbienceListener__Class**)(modloader::win::memory::resolve_rva(0x0479A1B0));
    }
    namespace Ambience_Layer_Track {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Ambience_Layer_Track__Class** type_info = (::app::Ambience_Layer_Track__Class**)(modloader::win::memory::resolve_rva(0x04742C40));
    }
    namespace Ambience_AmbienceTrack {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Ambience_AmbienceTrack__Class** type_info = (::app::Ambience_AmbienceTrack__Class**)(modloader::win::memory::resolve_rva(0x04745990));
    }
    namespace AmbientSoundZone {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AmbientSoundZone__Class** type_info = (::app::AmbientSoundZone__Class**)(modloader::win::memory::resolve_rva(0x04758350));
    }
    namespace AnimatingFloat {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AnimatingFloat__Class** type_info = (::app::AnimatingFloat__Class**)(modloader::win::memory::resolve_rva(0x0476BDA0));
    }
    namespace AudioStateZone {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AudioStateZone__Class** type_info = (::app::AudioStateZone__Class**)(modloader::win::memory::resolve_rva(0x04721C88));
    }
    namespace AmbienceZone_WiseAuxSend {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AmbienceZone_WiseAuxSend__Class** type_info = (::app::AmbienceZone_WiseAuxSend__Class**)(modloader::win::memory::resolve_rva(0x04720EE8));
    }
    namespace MusicListener {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MusicListener__Class** type_info = (::app::MusicListener__Class**)(modloader::win::memory::resolve_rva(0x047055B0));
    }
    namespace SoundZoneProcessor {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SoundZoneProcessor__Class** type_info = (::app::SoundZoneProcessor__Class**)(modloader::win::memory::resolve_rva(0x0474F938));
    }
    namespace ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Class** type_info = (::app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Class**)(modloader::win::memory::resolve_rva(0x04719CA8));
    }
    namespace ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Class** type_info = (::app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Class**)(modloader::win::memory::resolve_rva(0x0474BE60));
    }
    namespace SoundZoneProcessor_Job_PositionZoneEvent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SoundZoneProcessor_Job_PositionZoneEvent__Class** type_info = (::app::SoundZoneProcessor_Job_PositionZoneEvent__Class**)(modloader::win::memory::resolve_rva(0x0472D098));
    }
} // namespace app::classes::types
