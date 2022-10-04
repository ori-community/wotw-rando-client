#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/VerletStructure_VerletLink.h>
#include <Il2CppModLoader/app/types/CameraWideScreenZone.h>
#include <Il2CppModLoader/app/types/MoonTelemetryCharacterBaseEvent_c.h>
#include <Il2CppModLoader/app/types/MoonTelemetryShardEquipEvent.h>
#include <Il2CppModLoader/app/types/MoonTelemetryShardUpgradeEvent.h>
#include <Il2CppModLoader/app/types/MoonTelemetryWeaponUpgradeEvent.h>
#include <Il2CppModLoader/app/types/MoonTelemetryAssignQuestEvent.h>
#include <Il2CppModLoader/app/types/MoonTelemetryCompletedQuestEvent.h>
#include <Il2CppModLoader/app/types/MoonTelemetrySpawnEvent_SpawnReason__Enum.h>
#include <Il2CppModLoader/app/types/MoonTelemetrySpawnEvent.h>
#include <Il2CppModLoader/app/types/MoonTelemetryDeathEvent.h>
#include <Il2CppModLoader/app/types/MoonTelemetrySceneEvent_EventSceneState__Enum.h>
#include <Il2CppModLoader/app/types/MoonTelemetryCharacterHeartbeatEvent.h>
#include <Il2CppModLoader/app/types/MoonTelemetryCharacterHeartbeatEvent_Cleanup.h>
#include <Il2CppModLoader/app/types/MoonTelemetryPlayerSessionStartEvent.h>
#include <Il2CppModLoader/app/types/RestartReason__Enum.h>
#include <Il2CppModLoader/app/types/MoonTelemetryPlayerSessionEndEvent.h>
#include <Il2CppModLoader/app/types/MoonTelemetryAbilityChangeEvent.h>
#include <Il2CppModLoader/app/types/MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum.h>
#include <Il2CppModLoader/app/types/MoonTelemetryItemTransactionEvent.h>
#include <Il2CppModLoader/app/types/MoonTelemetryShrineStartEvent_ShrineID__Enum.h>
#include <Il2CppModLoader/app/types/MoonTelemetryShrineStartEvent.h>
#include <Il2CppModLoader/app/types/MoonTelemetryShrineEndEvent_ShrineResult__Enum.h>
#include <Il2CppModLoader/app/types/MoonTelemetryShrineEndEvent.h>
#include <Il2CppModLoader/app/types/MoonTelemetryRacesStartEvent_RaceID__Enum.h>
#include <Il2CppModLoader/app/types/MoonTelemetryRacesStartEvent.h>
#include <Il2CppModLoader/app/types/MoonTelemetryRacesEndEvent.h>
#include <Il2CppModLoader/app/types/MoonTelemetryDebugLogEvent.h>
#include <Il2CppModLoader/app/types/MoonTelemetrySettingsEvent.h>
#include <Il2CppModLoader/app/types/NetworkTest.h>
#include <Il2CppModLoader/app/types/NetworkTest_c.h>
#include <Il2CppModLoader/app/types/NetworkTest_sendTelemetryCoroutine_d_15.h>
#include <Il2CppModLoader/app/types/UberStateValueCondition.h>
#include <Il2CppModLoader/app/types/WwiseBootstrapInitializer.h>
#include <Il2CppModLoader/app/types/AchievementsLogic.h>
#include <Il2CppModLoader/app/types/StateValidator.h>
#include <Il2CppModLoader/app/types/ConditionValidator.h>
#include <Il2CppModLoader/app/types/AchievementsTestMessageProvider_GetMessages_d_2.h>
#include <Il2CppModLoader/app/types/AchievementsController.h>
#include <Il2CppModLoader/app/types/AchievementsController_c_DisplayClass19_0.h>
#include <Il2CppModLoader/app/types/CacheData.h>
#include <Il2CppModLoader/app/types/AchievementsUIItem_c_DisplayClass22_0.h>
#include <Il2CppModLoader/app/types/AchievementsUITextCounter_c_DisplayClass2_0.h>
#include <Il2CppModLoader/app/types/FuncAction.h>
#include <Il2CppModLoader/app/types/SavePedestal.h>
#include <Il2CppModLoader/app/types/SeinAbilityRestrictZone.h>
#include <Il2CppModLoader/app/types/MusicZone.h>
#include <Il2CppModLoader/app/types/Music_Layer.h>
#include <Il2CppModLoader/app/types/Music_Layer_Track.h>
#include <Il2CppModLoader/app/types/Music_MusicTrack.h>
#include <Il2CppModLoader/app/types/TimedActionSequence_c.h>
#include <Il2CppModLoader/app/types/TimedActionSequence_RunSequence_d_23.h>
#include <Il2CppModLoader/app/types/WaitForConditionAction_WaitAndPerform_d_4.h>
#include <Il2CppModLoader/app/types/CompoundCondition_ConditionInformation.h>
#include <Il2CppModLoader/app/types/CutsceneScreenController.h>
#include <Il2CppModLoader/app/types/IDamageNotifier.h>
#include <Il2CppModLoader/app/types/SpriteAnimatorCondition_SpriteAnimatorMode__Enum.h>
#include <Il2CppModLoader/app/types/TransparentWallAnimator.h>
#include <Il2CppModLoader/app/types/TransparentWallVisuals.h>
#include <Il2CppModLoader/app/types/IMoonSetupAnimator.h>
#include <Il2CppModLoader/app/types/CollisionContext.h>
#include <Il2CppModLoader/app/types/DamageContext.h>
#include <Il2CppModLoader/app/types/TriggerContext.h>
#include <Il2CppModLoader/app/types/BabySeinRunToTargetAction_Perform_d_6.h>
#include <Il2CppModLoader/app/types/ConfigureConfigurableJointAction.h>
#include <Il2CppModLoader/app/types/EnableSceneSuspendedAction_EnableRoutine_d_3.h>
#include <Il2CppModLoader/app/types/InstantiateAction.h>
#include <Il2CppModLoader/app/types/LockPlayerInputAction_PerformActionCoroutine_d_4.h>
#include <Il2CppModLoader/app/types/PerformBackOutAction.h>
#include <Il2CppModLoader/app/types/PerformBackOutAction_AbandonChallange_d_8.h>
#include <Il2CppModLoader/app/types/PlayAnimatorAction_PerformActionCoroutine_d_19.h>
#include <Il2CppModLoader/app/types/ReportLocationAction.h>
#include <Il2CppModLoader/app/types/ReportLocationAction_c.h>
#include <Il2CppModLoader/app/types/PathFollower.h>
#include <Il2CppModLoader/app/types/SeinRunToTargetAction_Perform_d_14.h>
#include <Il2CppModLoader/app/types/SetCurrentCharacterAction_Character__Enum.h>
#include <Il2CppModLoader/app/types/SetRigidBodyPropertiesAction.h>
#include <Il2CppModLoader/app/types/ShowPagesAction_OnFinishedContext.h>
#include <Il2CppModLoader/app/types/EnterExitActionsExecutor_c.h>
#include <Il2CppModLoader/app/types/ICanActivatePressurePlate.h>
#include <Il2CppModLoader/app/types/LegacyPressurePlate_c_DisplayClass8_0.h>
#include <Il2CppModLoader/app/types/SpringContext.h>
#include <Il2CppModLoader/app/types/LegacyTrigger_ProcessTrigger_d_35.h>
#include <Il2CppModLoader/app/types/LegacyTrigger_c.h>
#include <Il2CppModLoader/app/types/IStateTransitionHolder.h>
#include <Il2CppModLoader/app/types/PressurePlate_c_DisplayClass28_0.h>
#include <Il2CppModLoader/app/types/TeleportRestrictZone.h>
#include <Il2CppModLoader/app/types/Trigger_ProcessTrigger_d_39.h>
#include <Il2CppModLoader/app/types/Trigger_c.h>
#include <Il2CppModLoader/app/types/TriggerByString.h>
#include <Il2CppModLoader/app/types/ActionSequence_c.h>
#include <Il2CppModLoader/app/types/SeinController3D_c.h>
#include <Il2CppModLoader/app/types/AnimationCharacterProvider.h>
#include <Il2CppModLoader/app/types/AnimationMetaData_c_DisplayClass19_0.h>
#include <Il2CppModLoader/app/types/AnimationMetaDataCurveProcessor.h>
#include <Il2CppModLoader/app/types/AnimationMetaDataCurveProcessor_c.h>
#include <Il2CppModLoader/app/types/LegacyColorFlashAnimator.h>
#include <Il2CppModLoader/app/types/LegacyTransparancyAnimator.h>
#include <Il2CppModLoader/app/types/LegacyMaterialColorAnimator_RendererData.h>
#include <Il2CppModLoader/app/types/LegacyMaterialFloatAnimator_RendererData.h>

namespace app::classes::types {
    namespace VerletStructure_VerletLink { IL2CPP_MODLOADER_DLLEXPORT ::app::VerletStructure_VerletLink__Class** type_info = (::app::VerletStructure_VerletLink__Class**)(modloader::win::memory::resolve_rva(0x04790F98)); }
    namespace CameraWideScreenZone { IL2CPP_MODLOADER_DLLEXPORT ::app::CameraWideScreenZone__Class** type_info = (::app::CameraWideScreenZone__Class**)(modloader::win::memory::resolve_rva(0x04758B58)); }
    namespace MoonTelemetryCharacterBaseEvent_c { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetryCharacterBaseEvent_c__Class** type_info = (::app::MoonTelemetryCharacterBaseEvent_c__Class**)(modloader::win::memory::resolve_rva(0x0472C878)); }
    namespace MoonTelemetryShardEquipEvent { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetryShardEquipEvent__Class** type_info = (::app::MoonTelemetryShardEquipEvent__Class**)(modloader::win::memory::resolve_rva(0x0477C018)); }
    namespace MoonTelemetryShardUpgradeEvent { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetryShardUpgradeEvent__Class** type_info = (::app::MoonTelemetryShardUpgradeEvent__Class**)(modloader::win::memory::resolve_rva(0x0471CA68)); }
    namespace MoonTelemetryWeaponUpgradeEvent { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetryWeaponUpgradeEvent__Class** type_info = (::app::MoonTelemetryWeaponUpgradeEvent__Class**)(modloader::win::memory::resolve_rva(0x04701258)); }
    namespace MoonTelemetryAssignQuestEvent { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetryAssignQuestEvent__Class** type_info = (::app::MoonTelemetryAssignQuestEvent__Class**)(modloader::win::memory::resolve_rva(0x04784000)); }
    namespace MoonTelemetryCompletedQuestEvent { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetryCompletedQuestEvent__Class** type_info = (::app::MoonTelemetryCompletedQuestEvent__Class**)(modloader::win::memory::resolve_rva(0x047392D8)); }
    namespace MoonTelemetrySpawnEvent_SpawnReason__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetrySpawnEvent_SpawnReason__Enum__Class** type_info = (::app::MoonTelemetrySpawnEvent_SpawnReason__Enum__Class**)(modloader::win::memory::resolve_rva(0x04731D50)); }
    namespace MoonTelemetrySpawnEvent { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetrySpawnEvent__Class** type_info = (::app::MoonTelemetrySpawnEvent__Class**)(modloader::win::memory::resolve_rva(0x047413A8)); }
    namespace MoonTelemetryDeathEvent { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetryDeathEvent__Class** type_info = (::app::MoonTelemetryDeathEvent__Class**)(modloader::win::memory::resolve_rva(0x04704370)); }
    namespace MoonTelemetrySceneEvent_EventSceneState__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetrySceneEvent_EventSceneState__Enum__Class** type_info = (::app::MoonTelemetrySceneEvent_EventSceneState__Enum__Class**)(modloader::win::memory::resolve_rva(0x0475CB70)); }
    namespace MoonTelemetryCharacterHeartbeatEvent { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetryCharacterHeartbeatEvent__Class** type_info = (::app::MoonTelemetryCharacterHeartbeatEvent__Class**)(modloader::win::memory::resolve_rva(0x0472C4B8)); }
    namespace MoonTelemetryCharacterHeartbeatEvent_Cleanup { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetryCharacterHeartbeatEvent_Cleanup__Class** type_info = (::app::MoonTelemetryCharacterHeartbeatEvent_Cleanup__Class**)(modloader::win::memory::resolve_rva(0x0475C5F8)); }
    namespace MoonTelemetryPlayerSessionStartEvent { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetryPlayerSessionStartEvent__Class** type_info = (::app::MoonTelemetryPlayerSessionStartEvent__Class**)(modloader::win::memory::resolve_rva(0x04794B48)); }
    namespace RestartReason__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::RestartReason__Enum__Class** type_info = (::app::RestartReason__Enum__Class**)(modloader::win::memory::resolve_rva(0x0470CB58)); }
    namespace MoonTelemetryPlayerSessionEndEvent { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetryPlayerSessionEndEvent__Class** type_info = (::app::MoonTelemetryPlayerSessionEndEvent__Class**)(modloader::win::memory::resolve_rva(0x04748AB8)); }
    namespace MoonTelemetryAbilityChangeEvent { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetryAbilityChangeEvent__Class** type_info = (::app::MoonTelemetryAbilityChangeEvent__Class**)(modloader::win::memory::resolve_rva(0x0476F2A0)); }
    namespace MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum__Class** type_info = (::app::MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum__Class**)(modloader::win::memory::resolve_rva(0x0473AE50)); }
    namespace MoonTelemetryItemTransactionEvent { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetryItemTransactionEvent__Class** type_info = (::app::MoonTelemetryItemTransactionEvent__Class**)(modloader::win::memory::resolve_rva(0x0475A1E8)); }
    namespace MoonTelemetryShrineStartEvent_ShrineID__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetryShrineStartEvent_ShrineID__Enum__Class** type_info = (::app::MoonTelemetryShrineStartEvent_ShrineID__Enum__Class**)(modloader::win::memory::resolve_rva(0x047111B8)); }
    namespace MoonTelemetryShrineStartEvent { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetryShrineStartEvent__Class** type_info = (::app::MoonTelemetryShrineStartEvent__Class**)(modloader::win::memory::resolve_rva(0x0473B990)); }
    namespace MoonTelemetryShrineEndEvent_ShrineResult__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetryShrineEndEvent_ShrineResult__Enum__Class** type_info = (::app::MoonTelemetryShrineEndEvent_ShrineResult__Enum__Class**)(modloader::win::memory::resolve_rva(0x0473CBE8)); }
    namespace MoonTelemetryShrineEndEvent { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetryShrineEndEvent__Class** type_info = (::app::MoonTelemetryShrineEndEvent__Class**)(modloader::win::memory::resolve_rva(0x04793308)); }
    namespace MoonTelemetryRacesStartEvent_RaceID__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetryRacesStartEvent_RaceID__Enum__Class** type_info = (::app::MoonTelemetryRacesStartEvent_RaceID__Enum__Class**)(modloader::win::memory::resolve_rva(0x047103F8)); }
    namespace MoonTelemetryRacesStartEvent { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetryRacesStartEvent__Class** type_info = (::app::MoonTelemetryRacesStartEvent__Class**)(modloader::win::memory::resolve_rva(0x04741610)); }
    namespace MoonTelemetryRacesEndEvent { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetryRacesEndEvent__Class** type_info = (::app::MoonTelemetryRacesEndEvent__Class**)(modloader::win::memory::resolve_rva(0x0476CFA0)); }
    namespace MoonTelemetryDebugLogEvent { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetryDebugLogEvent__Class** type_info = (::app::MoonTelemetryDebugLogEvent__Class**)(modloader::win::memory::resolve_rva(0x04758570)); }
    namespace MoonTelemetrySettingsEvent { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetrySettingsEvent__Class** type_info = (::app::MoonTelemetrySettingsEvent__Class**)(modloader::win::memory::resolve_rva(0x04716B00)); }
    namespace NetworkTest { IL2CPP_MODLOADER_DLLEXPORT ::app::NetworkTest__Class** type_info = (::app::NetworkTest__Class**)(modloader::win::memory::resolve_rva(0x04704180)); }
    namespace NetworkTest_c { IL2CPP_MODLOADER_DLLEXPORT ::app::NetworkTest_c__Class** type_info = (::app::NetworkTest_c__Class**)(modloader::win::memory::resolve_rva(0x047120B8)); }
    namespace NetworkTest_sendTelemetryCoroutine_d_15 { IL2CPP_MODLOADER_DLLEXPORT ::app::NetworkTest_sendTelemetryCoroutine_d_15__Class** type_info = (::app::NetworkTest_sendTelemetryCoroutine_d_15__Class**)(modloader::win::memory::resolve_rva(0x047060A8)); }
    namespace UberStateValueCondition { IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateValueCondition__Class** type_info = (::app::UberStateValueCondition__Class**)(modloader::win::memory::resolve_rva(0x0471C4A0)); }
    namespace WwiseBootstrapInitializer { IL2CPP_MODLOADER_DLLEXPORT ::app::WwiseBootstrapInitializer__Class** type_info = (::app::WwiseBootstrapInitializer__Class**)(modloader::win::memory::resolve_rva(0x04749E98)); }
    namespace AchievementsLogic { IL2CPP_MODLOADER_DLLEXPORT ::app::AchievementsLogic__Class** type_info = (::app::AchievementsLogic__Class**)(modloader::win::memory::resolve_rva(0x04788E90)); }
    namespace StateValidator { IL2CPP_MODLOADER_DLLEXPORT ::app::StateValidator__Class** type_info = (::app::StateValidator__Class**)(modloader::win::memory::resolve_rva(0x04740BC0)); }
    namespace ConditionValidator { IL2CPP_MODLOADER_DLLEXPORT ::app::ConditionValidator__Class** type_info = (::app::ConditionValidator__Class**)(modloader::win::memory::resolve_rva(0x04729A20)); }
    namespace AchievementsTestMessageProvider_GetMessages_d_2 { IL2CPP_MODLOADER_DLLEXPORT ::app::AchievementsTestMessageProvider_GetMessages_d_2__Class** type_info = (::app::AchievementsTestMessageProvider_GetMessages_d_2__Class**)(modloader::win::memory::resolve_rva(0x04782960)); }
    namespace AchievementsController { IL2CPP_MODLOADER_DLLEXPORT ::app::AchievementsController__Class** type_info = (::app::AchievementsController__Class**)(modloader::win::memory::resolve_rva(0x0474E7B0)); }
    namespace AchievementsController_c_DisplayClass19_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::AchievementsController_c_DisplayClass19_0__Class** type_info = (::app::AchievementsController_c_DisplayClass19_0__Class**)(modloader::win::memory::resolve_rva(0x047575E8)); }
    namespace CacheData { IL2CPP_MODLOADER_DLLEXPORT ::app::CacheData__Class** type_info = (::app::CacheData__Class**)(modloader::win::memory::resolve_rva(0x0478EEA0)); }
    namespace AchievementsUIItem_c_DisplayClass22_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::AchievementsUIItem_c_DisplayClass22_0__Class** type_info = (::app::AchievementsUIItem_c_DisplayClass22_0__Class**)(modloader::win::memory::resolve_rva(0x0477C160)); }
    namespace AchievementsUITextCounter_c_DisplayClass2_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::AchievementsUITextCounter_c_DisplayClass2_0__Class** type_info = (::app::AchievementsUITextCounter_c_DisplayClass2_0__Class**)(modloader::win::memory::resolve_rva(0x04740F20)); }
    namespace FuncAction { IL2CPP_MODLOADER_DLLEXPORT ::app::FuncAction__Class** type_info = (::app::FuncAction__Class**)(modloader::win::memory::resolve_rva(0x04772F00)); }
    namespace SavePedestal { IL2CPP_MODLOADER_DLLEXPORT ::app::SavePedestal__Class** type_info = (::app::SavePedestal__Class**)(modloader::win::memory::resolve_rva(0x0475F890)); }
    namespace SeinAbilityRestrictZone { IL2CPP_MODLOADER_DLLEXPORT ::app::SeinAbilityRestrictZone__Class** type_info = (::app::SeinAbilityRestrictZone__Class**)(modloader::win::memory::resolve_rva(0x04701AA8)); }
    namespace MusicZone { IL2CPP_MODLOADER_DLLEXPORT ::app::MusicZone__Class** type_info = (::app::MusicZone__Class**)(modloader::win::memory::resolve_rva(0x0470AEA0)); }
    namespace Music_Layer { IL2CPP_MODLOADER_DLLEXPORT ::app::Music_Layer__Class** type_info = (::app::Music_Layer__Class**)(modloader::win::memory::resolve_rva(0x0476A930)); }
    namespace Music_Layer_Track { IL2CPP_MODLOADER_DLLEXPORT ::app::Music_Layer_Track__Class** type_info = (::app::Music_Layer_Track__Class**)(modloader::win::memory::resolve_rva(0x04757AB8)); }
    namespace Music_MusicTrack { IL2CPP_MODLOADER_DLLEXPORT ::app::Music_MusicTrack__Class** type_info = (::app::Music_MusicTrack__Class**)(modloader::win::memory::resolve_rva(0x0473DCC0)); }
    namespace TimedActionSequence_c { IL2CPP_MODLOADER_DLLEXPORT ::app::TimedActionSequence_c__Class** type_info = (::app::TimedActionSequence_c__Class**)(modloader::win::memory::resolve_rva(0x04786818)); }
    namespace TimedActionSequence_RunSequence_d_23 { IL2CPP_MODLOADER_DLLEXPORT ::app::TimedActionSequence_RunSequence_d_23__Class** type_info = (::app::TimedActionSequence_RunSequence_d_23__Class**)(modloader::win::memory::resolve_rva(0x047283E0)); }
    namespace WaitForConditionAction_WaitAndPerform_d_4 { IL2CPP_MODLOADER_DLLEXPORT ::app::WaitForConditionAction_WaitAndPerform_d_4__Class** type_info = (::app::WaitForConditionAction_WaitAndPerform_d_4__Class**)(modloader::win::memory::resolve_rva(0x0472A828)); }
    namespace CompoundCondition_ConditionInformation { IL2CPP_MODLOADER_DLLEXPORT ::app::CompoundCondition_ConditionInformation__Class** type_info = (::app::CompoundCondition_ConditionInformation__Class**)(modloader::win::memory::resolve_rva(0x04706108)); }
    namespace CutsceneScreenController { IL2CPP_MODLOADER_DLLEXPORT ::app::CutsceneScreenController__Class** type_info = (::app::CutsceneScreenController__Class**)(modloader::win::memory::resolve_rva(0x047991C8)); }
    namespace IDamageNotifier { IL2CPP_MODLOADER_DLLEXPORT ::app::IDamageNotifier__Class** type_info = (::app::IDamageNotifier__Class**)(modloader::win::memory::resolve_rva(0x04773640)); }
    namespace SpriteAnimatorCondition_SpriteAnimatorMode__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::SpriteAnimatorCondition_SpriteAnimatorMode__Enum__Class** type_info = (::app::SpriteAnimatorCondition_SpriteAnimatorMode__Enum__Class**)(modloader::win::memory::resolve_rva(0x04738268)); }
    namespace TransparentWallAnimator { IL2CPP_MODLOADER_DLLEXPORT ::app::TransparentWallAnimator__Class** type_info = (::app::TransparentWallAnimator__Class**)(modloader::win::memory::resolve_rva(0x04722008)); }
    namespace TransparentWallVisuals { IL2CPP_MODLOADER_DLLEXPORT ::app::TransparentWallVisuals__Class** type_info = (::app::TransparentWallVisuals__Class**)(modloader::win::memory::resolve_rva(0x0478AB20)); }
    namespace IMoonSetupAnimator { IL2CPP_MODLOADER_DLLEXPORT ::app::IMoonSetupAnimator__Class** type_info = (::app::IMoonSetupAnimator__Class**)(modloader::win::memory::resolve_rva(0x0475CF80)); }
    namespace CollisionContext { IL2CPP_MODLOADER_DLLEXPORT ::app::CollisionContext__Class** type_info = (::app::CollisionContext__Class**)(modloader::win::memory::resolve_rva(0x04719130)); }
    namespace DamageContext { IL2CPP_MODLOADER_DLLEXPORT ::app::DamageContext__Class** type_info = (::app::DamageContext__Class**)(modloader::win::memory::resolve_rva(0x04719028)); }
    namespace TriggerContext { IL2CPP_MODLOADER_DLLEXPORT ::app::TriggerContext__Class** type_info = (::app::TriggerContext__Class**)(modloader::win::memory::resolve_rva(0x0477EFC0)); }
    namespace BabySeinRunToTargetAction_Perform_d_6 { IL2CPP_MODLOADER_DLLEXPORT ::app::BabySeinRunToTargetAction_Perform_d_6__Class** type_info = (::app::BabySeinRunToTargetAction_Perform_d_6__Class**)(modloader::win::memory::resolve_rva(0x0478B1A8)); }
    namespace ConfigureConfigurableJointAction { IL2CPP_MODLOADER_DLLEXPORT ::app::ConfigureConfigurableJointAction__Class** type_info = (::app::ConfigureConfigurableJointAction__Class**)(modloader::win::memory::resolve_rva(0x0477DA18)); }
    namespace EnableSceneSuspendedAction_EnableRoutine_d_3 { IL2CPP_MODLOADER_DLLEXPORT ::app::EnableSceneSuspendedAction_EnableRoutine_d_3__Class** type_info = (::app::EnableSceneSuspendedAction_EnableRoutine_d_3__Class**)(modloader::win::memory::resolve_rva(0x04786268)); }
    namespace InstantiateAction { IL2CPP_MODLOADER_DLLEXPORT ::app::InstantiateAction__Class** type_info = (::app::InstantiateAction__Class**)(modloader::win::memory::resolve_rva(0x04762478)); }
    namespace LockPlayerInputAction_PerformActionCoroutine_d_4 { IL2CPP_MODLOADER_DLLEXPORT ::app::LockPlayerInputAction_PerformActionCoroutine_d_4__Class** type_info = (::app::LockPlayerInputAction_PerformActionCoroutine_d_4__Class**)(modloader::win::memory::resolve_rva(0x04782588)); }
    namespace PerformBackOutAction { IL2CPP_MODLOADER_DLLEXPORT ::app::PerformBackOutAction__Class** type_info = (::app::PerformBackOutAction__Class**)(modloader::win::memory::resolve_rva(0x0473A428)); }
    namespace PerformBackOutAction_AbandonChallange_d_8 { IL2CPP_MODLOADER_DLLEXPORT ::app::PerformBackOutAction_AbandonChallange_d_8__Class** type_info = (::app::PerformBackOutAction_AbandonChallange_d_8__Class**)(modloader::win::memory::resolve_rva(0x0475CA68)); }
    namespace PlayAnimatorAction_PerformActionCoroutine_d_19 { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayAnimatorAction_PerformActionCoroutine_d_19__Class** type_info = (::app::PlayAnimatorAction_PerformActionCoroutine_d_19__Class**)(modloader::win::memory::resolve_rva(0x0471ADD8)); }
    namespace ReportLocationAction { IL2CPP_MODLOADER_DLLEXPORT ::app::ReportLocationAction__Class** type_info = (::app::ReportLocationAction__Class**)(modloader::win::memory::resolve_rva(0x0475F7C0)); }
    namespace ReportLocationAction_c { IL2CPP_MODLOADER_DLLEXPORT ::app::ReportLocationAction_c__Class** type_info = (::app::ReportLocationAction_c__Class**)(modloader::win::memory::resolve_rva(0x047311C0)); }
    namespace PathFollower { IL2CPP_MODLOADER_DLLEXPORT ::app::PathFollower__Class** type_info = (::app::PathFollower__Class**)(modloader::win::memory::resolve_rva(0x0478D4F8)); }
    namespace SeinRunToTargetAction_Perform_d_14 { IL2CPP_MODLOADER_DLLEXPORT ::app::SeinRunToTargetAction_Perform_d_14__Class** type_info = (::app::SeinRunToTargetAction_Perform_d_14__Class**)(modloader::win::memory::resolve_rva(0x04765900)); }
    namespace SetCurrentCharacterAction_Character__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::SetCurrentCharacterAction_Character__Enum__Class** type_info = (::app::SetCurrentCharacterAction_Character__Enum__Class**)(modloader::win::memory::resolve_rva(0x04754588)); }
    namespace SetRigidBodyPropertiesAction { IL2CPP_MODLOADER_DLLEXPORT ::app::SetRigidBodyPropertiesAction__Class** type_info = (::app::SetRigidBodyPropertiesAction__Class**)(modloader::win::memory::resolve_rva(0x04768498)); }
    namespace ShowPagesAction_OnFinishedContext { IL2CPP_MODLOADER_DLLEXPORT ::app::ShowPagesAction_OnFinishedContext__Class** type_info = (::app::ShowPagesAction_OnFinishedContext__Class**)(modloader::win::memory::resolve_rva(0x04733388)); }
    namespace EnterExitActionsExecutor_c { IL2CPP_MODLOADER_DLLEXPORT ::app::EnterExitActionsExecutor_c__Class** type_info = (::app::EnterExitActionsExecutor_c__Class**)(modloader::win::memory::resolve_rva(0x04775338)); }
    namespace ICanActivatePressurePlate { IL2CPP_MODLOADER_DLLEXPORT ::app::ICanActivatePressurePlate__Class** type_info = (::app::ICanActivatePressurePlate__Class**)(modloader::win::memory::resolve_rva(0x047284E8)); }
    namespace LegacyPressurePlate_c_DisplayClass8_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::LegacyPressurePlate_c_DisplayClass8_0__Class** type_info = (::app::LegacyPressurePlate_c_DisplayClass8_0__Class**)(modloader::win::memory::resolve_rva(0x04722610)); }
    namespace SpringContext { IL2CPP_MODLOADER_DLLEXPORT ::app::SpringContext__Class** type_info = (::app::SpringContext__Class**)(modloader::win::memory::resolve_rva(0x04714AE0)); }
    namespace LegacyTrigger_ProcessTrigger_d_35 { IL2CPP_MODLOADER_DLLEXPORT ::app::LegacyTrigger_ProcessTrigger_d_35__Class** type_info = (::app::LegacyTrigger_ProcessTrigger_d_35__Class**)(modloader::win::memory::resolve_rva(0x047654D8)); }
    namespace LegacyTrigger_c { IL2CPP_MODLOADER_DLLEXPORT ::app::LegacyTrigger_c__Class** type_info = (::app::LegacyTrigger_c__Class**)(modloader::win::memory::resolve_rva(0x04783D18)); }
    namespace IStateTransitionHolder { IL2CPP_MODLOADER_DLLEXPORT ::app::IStateTransitionHolder__Class** type_info = (::app::IStateTransitionHolder__Class**)(modloader::win::memory::resolve_rva(0x0472FAF8)); }
    namespace PressurePlate_c_DisplayClass28_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::PressurePlate_c_DisplayClass28_0__Class** type_info = (::app::PressurePlate_c_DisplayClass28_0__Class**)(modloader::win::memory::resolve_rva(0x04793150)); }
    namespace TeleportRestrictZone { IL2CPP_MODLOADER_DLLEXPORT ::app::TeleportRestrictZone__Class** type_info = (::app::TeleportRestrictZone__Class**)(modloader::win::memory::resolve_rva(0x047681B8)); }
    namespace Trigger_ProcessTrigger_d_39 { IL2CPP_MODLOADER_DLLEXPORT ::app::Trigger_ProcessTrigger_d_39__Class** type_info = (::app::Trigger_ProcessTrigger_d_39__Class**)(modloader::win::memory::resolve_rva(0x0472AB40)); }
    namespace Trigger_c { IL2CPP_MODLOADER_DLLEXPORT ::app::Trigger_c__Class** type_info = (::app::Trigger_c__Class**)(modloader::win::memory::resolve_rva(0x0471D760)); }
    namespace TriggerByString { IL2CPP_MODLOADER_DLLEXPORT ::app::TriggerByString__Class** type_info = (::app::TriggerByString__Class**)(modloader::win::memory::resolve_rva(0x04788B60)); }
    namespace ActionSequence_c { IL2CPP_MODLOADER_DLLEXPORT ::app::ActionSequence_c__Class** type_info = (::app::ActionSequence_c__Class**)(modloader::win::memory::resolve_rva(0x0478E968)); }
    namespace SeinController3D_c { IL2CPP_MODLOADER_DLLEXPORT ::app::SeinController3D_c__Class** type_info = (::app::SeinController3D_c__Class**)(modloader::win::memory::resolve_rva(0x047562A0)); }
    namespace AnimationCharacterProvider { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationCharacterProvider__Class** type_info = (::app::AnimationCharacterProvider__Class**)(modloader::win::memory::resolve_rva(0x04780960)); }
    namespace AnimationMetaData_c_DisplayClass19_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationMetaData_c_DisplayClass19_0__Class** type_info = (::app::AnimationMetaData_c_DisplayClass19_0__Class**)(modloader::win::memory::resolve_rva(0x04798788)); }
    namespace AnimationMetaDataCurveProcessor { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationMetaDataCurveProcessor__Class** type_info = (::app::AnimationMetaDataCurveProcessor__Class**)(modloader::win::memory::resolve_rva(0x04749D90)); }
    namespace AnimationMetaDataCurveProcessor_c { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationMetaDataCurveProcessor_c__Class** type_info = (::app::AnimationMetaDataCurveProcessor_c__Class**)(modloader::win::memory::resolve_rva(0x04761888)); }
    namespace LegacyColorFlashAnimator { IL2CPP_MODLOADER_DLLEXPORT ::app::LegacyColorFlashAnimator__Class** type_info = (::app::LegacyColorFlashAnimator__Class**)(modloader::win::memory::resolve_rva(0x04709B30)); }
    namespace LegacyTransparancyAnimator { IL2CPP_MODLOADER_DLLEXPORT ::app::LegacyTransparancyAnimator__Class** type_info = (::app::LegacyTransparancyAnimator__Class**)(modloader::win::memory::resolve_rva(0x04737D58)); }
    namespace LegacyMaterialColorAnimator_RendererData { IL2CPP_MODLOADER_DLLEXPORT ::app::LegacyMaterialColorAnimator_RendererData__Class** type_info = (::app::LegacyMaterialColorAnimator_RendererData__Class**)(modloader::win::memory::resolve_rva(0x04777AB0)); }
    namespace LegacyMaterialFloatAnimator_RendererData { IL2CPP_MODLOADER_DLLEXPORT ::app::LegacyMaterialFloatAnimator_RendererData__Class** type_info = (::app::LegacyMaterialFloatAnimator_RendererData__Class**)(modloader::win::memory::resolve_rva(0x04797840)); }
}
