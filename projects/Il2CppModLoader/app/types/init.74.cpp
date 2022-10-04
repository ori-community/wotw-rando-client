#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/TimesliceDebugger_c.h>
#include <Il2CppModLoader/app/types/ITimeSlicedJob.h>
#include <Il2CppModLoader/app/types/TimesliceSpikeReporter.h>
#include <Il2CppModLoader/app/types/DifficultyModeMessageProvider_GetMessages_d_5.h>
#include <Il2CppModLoader/app/types/DigZone_c.h>
#include <Il2CppModLoader/app/types/SeinDiggingPuppet.h>
#include <Il2CppModLoader/app/types/Polygon_c.h>
#include <Il2CppModLoader/app/types/Triangulate.h>
#include <Il2CppModLoader/app/types/BatSwarmer.h>
#include <Il2CppModLoader/app/types/BatEnemy_States.h>
#include <Il2CppModLoader/app/types/BatSwarm.h>
#include <Il2CppModLoader/app/types/BatSwarmerSettings.h>
#include <Il2CppModLoader/app/types/BehaviourTreeEvaluationSystem.h>
#include <Il2CppModLoader/app/types/BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool.h>
#include <Il2CppModLoader/app/types/BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry.h>
#include <Il2CppModLoader/app/types/EntityDriver.h>
#include <Il2CppModLoader/app/types/PolygonJumpGridEntry.h>
#include <Il2CppModLoader/app/types/EquipmentRadialSelection_ItemCache.h>
#include <Il2CppModLoader/app/types/EquipmentRadialSelection_RadialItemVisual.h>
#include <Il2CppModLoader/app/types/EquipmentScreen_c.h>
#include <Il2CppModLoader/app/types/EquipmentScreen_c_DisplayClass58_0.h>
#include <Il2CppModLoader/app/types/EquipmentUIDetails_c.h>
#include <Il2CppModLoader/app/types/EquipmentWheel.h>
#include <Il2CppModLoader/app/types/EquipmentWheel_c.h>
#include <Il2CppModLoader/app/types/EquipmentWheelUIDetails_c.h>
#include <Il2CppModLoader/app/types/FireStick_DropAndDestroy_d_73.h>
#include <Il2CppModLoader/app/types/FireStick_DeactivateWithDelay_d_81.h>
#include <Il2CppModLoader/app/types/FireStick_DestroyAfter_d_82.h>
#include <Il2CppModLoader/app/types/CharacterStatePuppet_c.h>
#include <Il2CppModLoader/app/types/IGenericResourceEnumerator.h>
#include <Il2CppModLoader/app/types/GhostGenericSoundPlayer.h>
#include <Il2CppModLoader/app/types/GhostManager.h>
#include <Il2CppModLoader/app/types/GhostParsingHelper.h>
#include <Il2CppModLoader/app/types/GhostPlayer_c.h>
#include <Il2CppModLoader/app/types/GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData.h>
#include <Il2CppModLoader/app/types/GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_WorldObjectData.h>
#include <Il2CppModLoader/app/types/LeverPuppet.h>
#include <Il2CppModLoader/app/types/PhysicsEffects.h>
#include <Il2CppModLoader/app/types/MaterialBasedPhysicsEffects__Array.h>
#include <Il2CppModLoader/app/types/GhostCharacterAbilitiesData.h>
#include <Il2CppModLoader/app/types/GhostCharacterPlugin.h>
#include <Il2CppModLoader/app/types/GhostCharacterStatesData.h>
#include <Il2CppModLoader/app/types/GhostGenericEventsPlugin_Data.h>
#include <Il2CppModLoader/app/types/GhostGenericPropertyAttribute.h>
#include <Il2CppModLoader/app/types/PhysicalPhysicaSystemManagerPlugin.h>
#include <Il2CppModLoader/app/types/PhysicalPhysicaSystemManagerPlugin_Data.h>
#include <Il2CppModLoader/app/types/PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData.h>
#include <Il2CppModLoader/app/types/GhostAnimationParameterPlugin.h>
#include <Il2CppModLoader/app/types/GhostAnimationParameterPlugin_FloatParamenterTracker.h>
#include <Il2CppModLoader/app/types/GhostAnimationParameterPlugin_VectorParamenterTracker.h>
#include <Il2CppModLoader/app/types/GhostAnimationParameterPlugin_AnimationParameterData.h>
#include <Il2CppModLoader/app/types/GhostCameraPlugin.h>
#include <Il2CppModLoader/app/types/GhostCameraPlugin_CameraData.h>
#include <Il2CppModLoader/app/types/GhostLineRendererPlugin.h>
#include <Il2CppModLoader/app/types/GhostLineRendererPlugin_LineRendererData.h>
#include <Il2CppModLoader/app/types/GhostSceneTrackingPlugin.h>
#include <Il2CppModLoader/app/types/GhostSceneTrackingPlugin_Data.h>
#include <Il2CppModLoader/app/types/GhostServerEventsPlugin.h>
#include <Il2CppModLoader/app/types/GhostServerEventsPlugin_ServerEventData.h>
#include <Il2CppModLoader/app/types/GhostServerEventsPlugin_ServerEventData_ServerObjectsData.h>
#include <Il2CppModLoader/app/types/GhostTimelineEventsPlugin.h>
#include <Il2CppModLoader/app/types/GhostTimelineEventsPlugin_TimelineEventData.h>
#include <Il2CppModLoader/app/types/GhostTimeTrackingPlugin.h>
#include <Il2CppModLoader/app/types/GhostTimeTrackingPlugin_Data.h>
#include <Il2CppModLoader/app/types/GhostUberStatePlugin.h>
#include <Il2CppModLoader/app/types/GhostUberStatePlugin_UberStateData.h>
#include <Il2CppModLoader/app/types/GhostWorldObjectsLifetimePlugin.h>
#include <Il2CppModLoader/app/types/GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry.h>
#include <Il2CppModLoader/app/types/ScenariosParticleSystemPlugin.h>
#include <Il2CppModLoader/app/types/GhostStateMachineData.h>
#include <Il2CppModLoader/app/types/GhostStateMachinePlugin.h>
#include <Il2CppModLoader/app/types/ReplayData.h>
#include <Il2CppModLoader/app/types/ScenariosRecorder.h>
#include <Il2CppModLoader/app/types/HealthController_c.h>
#include <Il2CppModLoader/app/types/SpawnOrbsContext.h>
#include <Il2CppModLoader/app/types/OrbSpawnerManager_ItemType__Enum.h>
#include <Il2CppModLoader/app/types/OrbSpawnerManager.h>
#include <Il2CppModLoader/app/types/HoloLensController.h>
#include <Il2CppModLoader/app/types/HoloLensFileWriteState.h>
#include <Il2CppModLoader/app/types/UserLicenseInformation.h>
#include <Il2CppModLoader/app/types/LoreNodeWisps.h>
#include <Il2CppModLoader/app/types/QuestNodeWisps.h>
#include <Il2CppModLoader/app/types/AbilityUpgradeSettings.h>
#include <Il2CppModLoader/app/types/UpgradablePropertyLevel.h>
#include <Il2CppModLoader/app/types/ChangeDifficultyScreen.h>
#include <Il2CppModLoader/app/types/InventoryManager.h>
#include <Il2CppModLoader/app/types/SceneLayers.h>
#include <Il2CppModLoader/app/types/SceneLayers_Layer.h>
#include <Il2CppModLoader/app/types/SceneLayers_Layer__Array.h>
#include <Il2CppModLoader/app/types/ExtractedIntFromInt64.h>
#include <Il2CppModLoader/app/types/Leaderboard__Enum.h>
#include <Il2CppModLoader/app/types/LeaderboardB__Enum.h>
#include <Il2CppModLoader/app/types/LeaderboardData.h>
#include <Il2CppModLoader/app/types/LeaderboardData_Entry.h>
#include <Il2CppModLoader/app/types/LeaderboardData_c_DisplayClass23_0.h>
#include <Il2CppModLoader/app/types/LeaderboardEntryData.h>
#include <Il2CppModLoader/app/types/LeaderboardsController.h>
#include <Il2CppModLoader/app/types/LeaderboardsController_UploadScoresRoutine_d_32.h>
#include <Il2CppModLoader/app/types/ForceLightTorchStopChasingZone.h>
#include <Il2CppModLoader/app/types/IgnitableSpiritTorch_c.h>

namespace app::classes::types {
    namespace TimesliceDebugger_c { IL2CPP_MODLOADER_DLLEXPORT ::app::TimesliceDebugger_c__Class** type_info = (::app::TimesliceDebugger_c__Class**)(modloader::win::memory::resolve_rva(0x0477BE50)); }
    namespace ITimeSlicedJob { IL2CPP_MODLOADER_DLLEXPORT ::app::ITimeSlicedJob__Class** type_info = (::app::ITimeSlicedJob__Class**)(modloader::win::memory::resolve_rva(0x0474E970)); }
    namespace TimesliceSpikeReporter { IL2CPP_MODLOADER_DLLEXPORT ::app::TimesliceSpikeReporter__Class** type_info = (::app::TimesliceSpikeReporter__Class**)(modloader::win::memory::resolve_rva(0x0476CAE0)); }
    namespace DifficultyModeMessageProvider_GetMessages_d_5 { IL2CPP_MODLOADER_DLLEXPORT ::app::DifficultyModeMessageProvider_GetMessages_d_5__Class** type_info = (::app::DifficultyModeMessageProvider_GetMessages_d_5__Class**)(modloader::win::memory::resolve_rva(0x0472BAA0)); }
    namespace DigZone_c { IL2CPP_MODLOADER_DLLEXPORT ::app::DigZone_c__Class** type_info = (::app::DigZone_c__Class**)(modloader::win::memory::resolve_rva(0x047094A8)); }
    namespace SeinDiggingPuppet { IL2CPP_MODLOADER_DLLEXPORT ::app::SeinDiggingPuppet__Class** type_info = (::app::SeinDiggingPuppet__Class**)(modloader::win::memory::resolve_rva(0x04780A80)); }
    namespace Polygon_c { IL2CPP_MODLOADER_DLLEXPORT ::app::Polygon_c__Class** type_info = (::app::Polygon_c__Class**)(modloader::win::memory::resolve_rva(0x04716480)); }
    namespace Triangulate { IL2CPP_MODLOADER_DLLEXPORT ::app::Triangulate__Class** type_info = (::app::Triangulate__Class**)(modloader::win::memory::resolve_rva(0x0476A238)); }
    namespace BatSwarmer { IL2CPP_MODLOADER_DLLEXPORT ::app::BatSwarmer__Class** type_info = (::app::BatSwarmer__Class**)(modloader::win::memory::resolve_rva(0x0475ED28)); }
    namespace BatEnemy_States { IL2CPP_MODLOADER_DLLEXPORT ::app::BatEnemy_States__Class** type_info = (::app::BatEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x04749780)); }
    namespace BatSwarm { IL2CPP_MODLOADER_DLLEXPORT ::app::BatSwarm__Class** type_info = (::app::BatSwarm__Class**)(modloader::win::memory::resolve_rva(0x04775A88)); }
    namespace BatSwarmerSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::BatSwarmerSettings__Class** type_info = (::app::BatSwarmerSettings__Class**)(modloader::win::memory::resolve_rva(0x04789668)); }
    namespace BehaviourTreeEvaluationSystem { IL2CPP_MODLOADER_DLLEXPORT ::app::BehaviourTreeEvaluationSystem__Class** type_info = (::app::BehaviourTreeEvaluationSystem__Class**)(modloader::win::memory::resolve_rva(0x04758578)); }
    namespace BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool { IL2CPP_MODLOADER_DLLEXPORT ::app::BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool__Class** type_info = (::app::BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool__Class**)(modloader::win::memory::resolve_rva(0x04783F48)); }
    namespace BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry { IL2CPP_MODLOADER_DLLEXPORT ::app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry__Class** type_info = (::app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry__Class**)(modloader::win::memory::resolve_rva(0x0470B0D8)); }
    namespace EntityDriver { IL2CPP_MODLOADER_DLLEXPORT ::app::EntityDriver__Class** type_info = (::app::EntityDriver__Class**)(modloader::win::memory::resolve_rva(0x04760250)); }
    namespace PolygonJumpGridEntry { IL2CPP_MODLOADER_DLLEXPORT ::app::PolygonJumpGridEntry__Class** type_info = (::app::PolygonJumpGridEntry__Class**)(modloader::win::memory::resolve_rva(0x04785FD8)); }
    namespace EquipmentRadialSelection_ItemCache { IL2CPP_MODLOADER_DLLEXPORT ::app::EquipmentRadialSelection_ItemCache__Class** type_info = (::app::EquipmentRadialSelection_ItemCache__Class**)(modloader::win::memory::resolve_rva(0x0473C1E0)); }
    namespace EquipmentRadialSelection_RadialItemVisual { IL2CPP_MODLOADER_DLLEXPORT ::app::EquipmentRadialSelection_RadialItemVisual__Class** type_info = (::app::EquipmentRadialSelection_RadialItemVisual__Class**)(modloader::win::memory::resolve_rva(0x0475D278)); }
    namespace EquipmentScreen_c { IL2CPP_MODLOADER_DLLEXPORT ::app::EquipmentScreen_c__Class** type_info = (::app::EquipmentScreen_c__Class**)(modloader::win::memory::resolve_rva(0x04782EF0)); }
    namespace EquipmentScreen_c_DisplayClass58_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::EquipmentScreen_c_DisplayClass58_0__Class** type_info = (::app::EquipmentScreen_c_DisplayClass58_0__Class**)(modloader::win::memory::resolve_rva(0x0470E660)); }
    namespace EquipmentUIDetails_c { IL2CPP_MODLOADER_DLLEXPORT ::app::EquipmentUIDetails_c__Class** type_info = (::app::EquipmentUIDetails_c__Class**)(modloader::win::memory::resolve_rva(0x047483A0)); }
    namespace EquipmentWheel { IL2CPP_MODLOADER_DLLEXPORT ::app::EquipmentWheel__Class** type_info = (::app::EquipmentWheel__Class**)(modloader::win::memory::resolve_rva(0x0474DE98)); }
    namespace EquipmentWheel_c { IL2CPP_MODLOADER_DLLEXPORT ::app::EquipmentWheel_c__Class** type_info = (::app::EquipmentWheel_c__Class**)(modloader::win::memory::resolve_rva(0x0470EFC8)); }
    namespace EquipmentWheelUIDetails_c { IL2CPP_MODLOADER_DLLEXPORT ::app::EquipmentWheelUIDetails_c__Class** type_info = (::app::EquipmentWheelUIDetails_c__Class**)(modloader::win::memory::resolve_rva(0x0473FCF0)); }
    namespace FireStick_DropAndDestroy_d_73 { IL2CPP_MODLOADER_DLLEXPORT ::app::FireStick_DropAndDestroy_d_73__Class** type_info = (::app::FireStick_DropAndDestroy_d_73__Class**)(modloader::win::memory::resolve_rva(0x0470F2F8)); }
    namespace FireStick_DeactivateWithDelay_d_81 { IL2CPP_MODLOADER_DLLEXPORT ::app::FireStick_DeactivateWithDelay_d_81__Class** type_info = (::app::FireStick_DeactivateWithDelay_d_81__Class**)(modloader::win::memory::resolve_rva(0x0473D990)); }
    namespace FireStick_DestroyAfter_d_82 { IL2CPP_MODLOADER_DLLEXPORT ::app::FireStick_DestroyAfter_d_82__Class** type_info = (::app::FireStick_DestroyAfter_d_82__Class**)(modloader::win::memory::resolve_rva(0x0477B978)); }
    namespace CharacterStatePuppet_c { IL2CPP_MODLOADER_DLLEXPORT ::app::CharacterStatePuppet_c__Class** type_info = (::app::CharacterStatePuppet_c__Class**)(modloader::win::memory::resolve_rva(0x04701DE0)); }
    namespace IGenericResourceEnumerator { IL2CPP_MODLOADER_DLLEXPORT ::app::IGenericResourceEnumerator__Class** type_info = (::app::IGenericResourceEnumerator__Class**)(modloader::win::memory::resolve_rva(0x0473A638)); }
    namespace GhostGenericSoundPlayer { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostGenericSoundPlayer__Class** type_info = (::app::GhostGenericSoundPlayer__Class**)(modloader::win::memory::resolve_rva(0x047799A8)); }
    namespace GhostManager { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostManager__Class** type_info = (::app::GhostManager__Class**)(modloader::win::memory::resolve_rva(0x0477D0C8)); }
    namespace GhostParsingHelper { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostParsingHelper__Class** type_info = (::app::GhostParsingHelper__Class**)(modloader::win::memory::resolve_rva(0x0474A7C8)); }
    namespace GhostPlayer_c { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostPlayer_c__Class** type_info = (::app::GhostPlayer_c__Class**)(modloader::win::memory::resolve_rva(0x0471FBE8)); }
    namespace GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData__Class** type_info = (::app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData__Class**)(modloader::win::memory::resolve_rva(0x04725720)); }
    namespace GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_WorldObjectData { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_WorldObjectData__Class** type_info = (::app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_WorldObjectData__Class**)(modloader::win::memory::resolve_rva(0x047009F0)); }
    namespace LeverPuppet { IL2CPP_MODLOADER_DLLEXPORT ::app::LeverPuppet__Class** type_info = (::app::LeverPuppet__Class**)(modloader::win::memory::resolve_rva(0x0473D240)); }
    namespace PhysicsEffects { IL2CPP_MODLOADER_DLLEXPORT ::app::PhysicsEffects__Class** type_info = (::app::PhysicsEffects__Class**)(modloader::win::memory::resolve_rva(0x0478D418)); }
    namespace MaterialBasedPhysicsEffects__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::MaterialBasedPhysicsEffects__Array__Class** type_info = (::app::MaterialBasedPhysicsEffects__Array__Class**)(modloader::win::memory::resolve_rva(0x04777988)); }
    namespace GhostCharacterAbilitiesData { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostCharacterAbilitiesData__Class** type_info = (::app::GhostCharacterAbilitiesData__Class**)(modloader::win::memory::resolve_rva(0x0475A658)); }
    namespace GhostCharacterPlugin { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostCharacterPlugin__Class** type_info = (::app::GhostCharacterPlugin__Class**)(modloader::win::memory::resolve_rva(0x04743E78)); }
    namespace GhostCharacterStatesData { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostCharacterStatesData__Class** type_info = (::app::GhostCharacterStatesData__Class**)(modloader::win::memory::resolve_rva(0x0471B8D8)); }
    namespace GhostGenericEventsPlugin_Data { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostGenericEventsPlugin_Data__Class** type_info = (::app::GhostGenericEventsPlugin_Data__Class**)(modloader::win::memory::resolve_rva(0x04790588)); }
    namespace GhostGenericPropertyAttribute { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostGenericPropertyAttribute__Class** type_info = (::app::GhostGenericPropertyAttribute__Class**)(modloader::win::memory::resolve_rva(0x04751440)); }
    namespace PhysicalPhysicaSystemManagerPlugin { IL2CPP_MODLOADER_DLLEXPORT ::app::PhysicalPhysicaSystemManagerPlugin__Class** type_info = (::app::PhysicalPhysicaSystemManagerPlugin__Class**)(modloader::win::memory::resolve_rva(0x047568A8)); }
    namespace PhysicalPhysicaSystemManagerPlugin_Data { IL2CPP_MODLOADER_DLLEXPORT ::app::PhysicalPhysicaSystemManagerPlugin_Data__Class** type_info = (::app::PhysicalPhysicaSystemManagerPlugin_Data__Class**)(modloader::win::memory::resolve_rva(0x04720758)); }
    namespace PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData { IL2CPP_MODLOADER_DLLEXPORT ::app::PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Class** type_info = (::app::PhysicalPhysicaSystemManagerPlugin_Data_PhysicalSystemManagerData__Class**)(modloader::win::memory::resolve_rva(0x04773E98)); }
    namespace GhostAnimationParameterPlugin { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostAnimationParameterPlugin__Class** type_info = (::app::GhostAnimationParameterPlugin__Class**)(modloader::win::memory::resolve_rva(0x04737A10)); }
    namespace GhostAnimationParameterPlugin_FloatParamenterTracker { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostAnimationParameterPlugin_FloatParamenterTracker__Class** type_info = (::app::GhostAnimationParameterPlugin_FloatParamenterTracker__Class**)(modloader::win::memory::resolve_rva(0x04710440)); }
    namespace GhostAnimationParameterPlugin_VectorParamenterTracker { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostAnimationParameterPlugin_VectorParamenterTracker__Class** type_info = (::app::GhostAnimationParameterPlugin_VectorParamenterTracker__Class**)(modloader::win::memory::resolve_rva(0x0478A808)); }
    namespace GhostAnimationParameterPlugin_AnimationParameterData { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostAnimationParameterPlugin_AnimationParameterData__Class** type_info = (::app::GhostAnimationParameterPlugin_AnimationParameterData__Class**)(modloader::win::memory::resolve_rva(0x0476A938)); }
    namespace GhostCameraPlugin { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostCameraPlugin__Class** type_info = (::app::GhostCameraPlugin__Class**)(modloader::win::memory::resolve_rva(0x04781EE8)); }
    namespace GhostCameraPlugin_CameraData { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostCameraPlugin_CameraData__Class** type_info = (::app::GhostCameraPlugin_CameraData__Class**)(modloader::win::memory::resolve_rva(0x04727328)); }
    namespace GhostLineRendererPlugin { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostLineRendererPlugin__Class** type_info = (::app::GhostLineRendererPlugin__Class**)(modloader::win::memory::resolve_rva(0x04751FC8)); }
    namespace GhostLineRendererPlugin_LineRendererData { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostLineRendererPlugin_LineRendererData__Class** type_info = (::app::GhostLineRendererPlugin_LineRendererData__Class**)(modloader::win::memory::resolve_rva(0x0471BF30)); }
    namespace GhostSceneTrackingPlugin { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostSceneTrackingPlugin__Class** type_info = (::app::GhostSceneTrackingPlugin__Class**)(modloader::win::memory::resolve_rva(0x04736110)); }
    namespace GhostSceneTrackingPlugin_Data { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostSceneTrackingPlugin_Data__Class** type_info = (::app::GhostSceneTrackingPlugin_Data__Class**)(modloader::win::memory::resolve_rva(0x04707248)); }
    namespace GhostServerEventsPlugin { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostServerEventsPlugin__Class** type_info = (::app::GhostServerEventsPlugin__Class**)(modloader::win::memory::resolve_rva(0x0477AEB0)); }
    namespace GhostServerEventsPlugin_ServerEventData { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostServerEventsPlugin_ServerEventData__Class** type_info = (::app::GhostServerEventsPlugin_ServerEventData__Class**)(modloader::win::memory::resolve_rva(0x047825E0)); }
    namespace GhostServerEventsPlugin_ServerEventData_ServerObjectsData { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostServerEventsPlugin_ServerEventData_ServerObjectsData__Class** type_info = (::app::GhostServerEventsPlugin_ServerEventData_ServerObjectsData__Class**)(modloader::win::memory::resolve_rva(0x04792F00)); }
    namespace GhostTimelineEventsPlugin { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostTimelineEventsPlugin__Class** type_info = (::app::GhostTimelineEventsPlugin__Class**)(modloader::win::memory::resolve_rva(0x04750EC0)); }
    namespace GhostTimelineEventsPlugin_TimelineEventData { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostTimelineEventsPlugin_TimelineEventData__Class** type_info = (::app::GhostTimelineEventsPlugin_TimelineEventData__Class**)(modloader::win::memory::resolve_rva(0x04723A00)); }
    namespace GhostTimeTrackingPlugin { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostTimeTrackingPlugin__Class** type_info = (::app::GhostTimeTrackingPlugin__Class**)(modloader::win::memory::resolve_rva(0x0473ED80)); }
    namespace GhostTimeTrackingPlugin_Data { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostTimeTrackingPlugin_Data__Class** type_info = (::app::GhostTimeTrackingPlugin_Data__Class**)(modloader::win::memory::resolve_rva(0x04730608)); }
    namespace GhostUberStatePlugin { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostUberStatePlugin__Class** type_info = (::app::GhostUberStatePlugin__Class**)(modloader::win::memory::resolve_rva(0x0470EE38)); }
    namespace GhostUberStatePlugin_UberStateData { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostUberStatePlugin_UberStateData__Class** type_info = (::app::GhostUberStatePlugin_UberStateData__Class**)(modloader::win::memory::resolve_rva(0x04719370)); }
    namespace GhostWorldObjectsLifetimePlugin { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostWorldObjectsLifetimePlugin__Class** type_info = (::app::GhostWorldObjectsLifetimePlugin__Class**)(modloader::win::memory::resolve_rva(0x047517F8)); }
    namespace GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Class** type_info = (::app::GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Class**)(modloader::win::memory::resolve_rva(0x047823E0)); }
    namespace ScenariosParticleSystemPlugin { IL2CPP_MODLOADER_DLLEXPORT ::app::ScenariosParticleSystemPlugin__Class** type_info = (::app::ScenariosParticleSystemPlugin__Class**)(modloader::win::memory::resolve_rva(0x04780A88)); }
    namespace GhostStateMachineData { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostStateMachineData__Class** type_info = (::app::GhostStateMachineData__Class**)(modloader::win::memory::resolve_rva(0x0477E240)); }
    namespace GhostStateMachinePlugin { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostStateMachinePlugin__Class** type_info = (::app::GhostStateMachinePlugin__Class**)(modloader::win::memory::resolve_rva(0x0473FBF8)); }
    namespace ReplayData { IL2CPP_MODLOADER_DLLEXPORT ::app::ReplayData__Class** type_info = (::app::ReplayData__Class**)(modloader::win::memory::resolve_rva(0x04729598)); }
    namespace ScenariosRecorder { IL2CPP_MODLOADER_DLLEXPORT ::app::ScenariosRecorder__Class** type_info = (::app::ScenariosRecorder__Class**)(modloader::win::memory::resolve_rva(0x04724A18)); }
    namespace HealthController_c { IL2CPP_MODLOADER_DLLEXPORT ::app::HealthController_c__Class** type_info = (::app::HealthController_c__Class**)(modloader::win::memory::resolve_rva(0x047588C0)); }
    namespace SpawnOrbsContext { IL2CPP_MODLOADER_DLLEXPORT ::app::SpawnOrbsContext__Class** type_info = (::app::SpawnOrbsContext__Class**)(modloader::win::memory::resolve_rva(0x047741D0)); }
    namespace OrbSpawnerManager_ItemType__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::OrbSpawnerManager_ItemType__Enum__Class** type_info = (::app::OrbSpawnerManager_ItemType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0474DF20)); }
    namespace OrbSpawnerManager { IL2CPP_MODLOADER_DLLEXPORT ::app::OrbSpawnerManager__Class** type_info = (::app::OrbSpawnerManager__Class**)(modloader::win::memory::resolve_rva(0x04712110)); }
    namespace HoloLensController { IL2CPP_MODLOADER_DLLEXPORT ::app::HoloLensController__Class** type_info = (::app::HoloLensController__Class**)(modloader::win::memory::resolve_rva(0x0478C690)); }
    namespace HoloLensFileWriteState { IL2CPP_MODLOADER_DLLEXPORT ::app::HoloLensFileWriteState__Class** type_info = (::app::HoloLensFileWriteState__Class**)(modloader::win::memory::resolve_rva(0x04735BD8)); }
    namespace UserLicenseInformation { IL2CPP_MODLOADER_DLLEXPORT ::app::UserLicenseInformation__Class** type_info = (::app::UserLicenseInformation__Class**)(modloader::win::memory::resolve_rva(0x04721388)); }
    namespace LoreNodeWisps { IL2CPP_MODLOADER_DLLEXPORT ::app::LoreNodeWisps__Class** type_info = (::app::LoreNodeWisps__Class**)(modloader::win::memory::resolve_rva(0x04710830)); }
    namespace QuestNodeWisps { IL2CPP_MODLOADER_DLLEXPORT ::app::QuestNodeWisps__Class** type_info = (::app::QuestNodeWisps__Class**)(modloader::win::memory::resolve_rva(0x0470F7B8)); }
    namespace AbilityUpgradeSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::AbilityUpgradeSettings__Class** type_info = (::app::AbilityUpgradeSettings__Class**)(modloader::win::memory::resolve_rva(0x04732DE0)); }
    namespace UpgradablePropertyLevel { IL2CPP_MODLOADER_DLLEXPORT ::app::UpgradablePropertyLevel__Class** type_info = (::app::UpgradablePropertyLevel__Class**)(modloader::win::memory::resolve_rva(0x0476F0C0)); }
    namespace ChangeDifficultyScreen { IL2CPP_MODLOADER_DLLEXPORT ::app::ChangeDifficultyScreen__Class** type_info = (::app::ChangeDifficultyScreen__Class**)(modloader::win::memory::resolve_rva(0x047122B0)); }
    namespace InventoryManager { IL2CPP_MODLOADER_DLLEXPORT ::app::InventoryManager__Class** type_info = (::app::InventoryManager__Class**)(modloader::win::memory::resolve_rva(0x04721EB8)); }
    namespace SceneLayers { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneLayers__Class** type_info = (::app::SceneLayers__Class**)(modloader::win::memory::resolve_rva(0x04759848)); }
    namespace SceneLayers_Layer { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneLayers_Layer__Class** type_info = (::app::SceneLayers_Layer__Class**)(modloader::win::memory::resolve_rva(0x04774330)); }
    namespace SceneLayers_Layer__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneLayers_Layer__Array__Class** type_info = (::app::SceneLayers_Layer__Array__Class**)(modloader::win::memory::resolve_rva(0x04777E58)); }
    namespace ExtractedIntFromInt64 { IL2CPP_MODLOADER_DLLEXPORT ::app::ExtractedIntFromInt64__Class** type_info = (::app::ExtractedIntFromInt64__Class**)(modloader::win::memory::resolve_rva(0x04721770)); }
    namespace Leaderboard__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::Leaderboard__Enum__Class** type_info = (::app::Leaderboard__Enum__Class**)(modloader::win::memory::resolve_rva(0x04743458)); }
    namespace LeaderboardB__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::LeaderboardB__Enum__Class** type_info = (::app::LeaderboardB__Enum__Class**)(modloader::win::memory::resolve_rva(0x047101F0)); }
    namespace LeaderboardData { IL2CPP_MODLOADER_DLLEXPORT ::app::LeaderboardData__Class** type_info = (::app::LeaderboardData__Class**)(modloader::win::memory::resolve_rva(0x04766870)); }
    namespace LeaderboardData_Entry { IL2CPP_MODLOADER_DLLEXPORT ::app::LeaderboardData_Entry__Class** type_info = (::app::LeaderboardData_Entry__Class**)(modloader::win::memory::resolve_rva(0x0475B880)); }
    namespace LeaderboardData_c_DisplayClass23_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::LeaderboardData_c_DisplayClass23_0__Class** type_info = (::app::LeaderboardData_c_DisplayClass23_0__Class**)(modloader::win::memory::resolve_rva(0x04704E70)); }
    namespace LeaderboardEntryData { IL2CPP_MODLOADER_DLLEXPORT ::app::LeaderboardEntryData__Class** type_info = (::app::LeaderboardEntryData__Class**)(modloader::win::memory::resolve_rva(0x0477CB68)); }
    namespace LeaderboardsController { IL2CPP_MODLOADER_DLLEXPORT ::app::LeaderboardsController__Class** type_info = (::app::LeaderboardsController__Class**)(modloader::win::memory::resolve_rva(0x0476F3D0)); }
    namespace LeaderboardsController_UploadScoresRoutine_d_32 { IL2CPP_MODLOADER_DLLEXPORT ::app::LeaderboardsController_UploadScoresRoutine_d_32__Class** type_info = (::app::LeaderboardsController_UploadScoresRoutine_d_32__Class**)(modloader::win::memory::resolve_rva(0x04790FC8)); }
    namespace ForceLightTorchStopChasingZone { IL2CPP_MODLOADER_DLLEXPORT ::app::ForceLightTorchStopChasingZone__Class** type_info = (::app::ForceLightTorchStopChasingZone__Class**)(modloader::win::memory::resolve_rva(0x04751D98)); }
    namespace IgnitableSpiritTorch_c { IL2CPP_MODLOADER_DLLEXPORT ::app::IgnitableSpiritTorch_c__Class** type_info = (::app::IgnitableSpiritTorch_c__Class**)(modloader::win::memory::resolve_rva(0x0473A7B0)); }
}
