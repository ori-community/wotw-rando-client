#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/FpsTcTestOutput.h>
#include <Il2CppModLoader/app/types/MainThreadSleepTester.h>
#include <Il2CppModLoader/app/types/SceneFPSTest_State__Enum.h>
#include <Il2CppModLoader/app/types/SceneFPSTest.h>
#include <Il2CppModLoader/app/types/SceneFPSTest_TestEntry.h>
#include <Il2CppModLoader/app/types/IMoonTest.h>
#include <Il2CppModLoader/app/types/SceneFPSTest_TestEntry__Array.h>
#include <Il2CppModLoader/app/types/SceneFPSTest_c.h>
#include <Il2CppModLoader/app/types/ScenesToSkip.h>
#include <Il2CppModLoader/app/types/UberPoolPerfTest_TestMode__Enum.h>
#include <Il2CppModLoader/app/types/UberPoolPerfTest.h>
#include <Il2CppModLoader/app/types/UberPoolPerfTest_Settings.h>
#include <Il2CppModLoader/app/types/UberPoolPerfTest_SettingOverrides.h>
#include <Il2CppModLoader/app/types/UberPoolPerfTest_PrefabInfo.h>
#include <Il2CppModLoader/app/types/UberPoolPerfTest_LogCatcher.h>
#include <Il2CppModLoader/app/types/UberPoolPerfTest_Settings_c.h>
#include <Il2CppModLoader/app/types/UberPoolPerfTest_c_DisplayClass38_0.h>
#include <Il2CppModLoader/app/types/UberPoolPerfTest_c_DisplayClass41_0.h>
#include <Il2CppModLoader/app/types/UberPoolPerfTest_c.h>
#include <Il2CppModLoader/app/types/ColliderAnimatorSystem.h>
#include <Il2CppModLoader/app/types/ColliderAnimatorSystem_SphereColliderAnimationState.h>
#include <Il2CppModLoader/app/types/UberBloomAnimator.h>
#include <Il2CppModLoader/app/types/UberBrightnessContrastAnimator.h>
#include <Il2CppModLoader/app/types/EnemyArenaVirtualAnimator.h>
#include <Il2CppModLoader/app/types/EnemyArenaVirtualAnimator_Context.h>
#include <Il2CppModLoader/app/types/EnemyArenaWaveVirtualAnimator.h>
#include <Il2CppModLoader/app/types/EnemyArenaWaveVirtualAnimator_Context.h>
#include <Il2CppModLoader/app/types/BaseAnimator_c.h>
#include <Il2CppModLoader/app/types/DamagerAnimator.h>
#include <Il2CppModLoader/app/types/DistortionAnimator_RendererData.h>
#include <Il2CppModLoader/app/types/DistortionAnimator_RendererData_Property.h>
#include <Il2CppModLoader/app/types/DofAnimator.h>
#include <Il2CppModLoader/app/types/InstantiateAnimatorB.h>
#include <Il2CppModLoader/app/types/LegacyCinematicCharacterAnimator_Character__Enum.h>
#include <Il2CppModLoader/app/types/LegacyCinematicCharacterAnimator_FacingDirection__Enum.h>
#include <Il2CppModLoader/app/types/MocupAnimator_Curve__Array.h>
#include <Il2CppModLoader/app/types/SoundAnimator.h>
#include <Il2CppModLoader/app/types/TimelineEventTrigger_c.h>
#include <Il2CppModLoader/app/types/UberPostBloomAnimator.h>
#include <Il2CppModLoader/app/types/UberPostContrastAndBrightnessAnimator.h>
#include <Il2CppModLoader/app/types/UberTextureSettingsAnimator.h>
#include <Il2CppModLoader/app/types/BrainScript_c.h>
#include <Il2CppModLoader/app/types/ProjectileSpawnerPinkPlantBrain.h>
#include <Il2CppModLoader/app/types/LegacyTimelineSequence_c.h>
#include <Il2CppModLoader/app/types/SerializationSetupGroup.h>
#include <Il2CppModLoader/app/types/SerializationSetupGroup_StateChange.h>
#include <Il2CppModLoader/app/types/Utility.h>
#include <Il2CppModLoader/app/types/Utility_DisableLater_d_8.h>
#include <Il2CppModLoader/app/types/VerletStructure_JobSystem.h>
#include <Il2CppModLoader/app/types/VerletStructure_SystemWithMonoBehaviour.h>
#include <Il2CppModLoader/app/types/VerletStructure_SystemWithMonoBehaviour_c.h>
#include <Il2CppModLoader/app/types/VerletStructure_JobWithMonoBehaviour.h>
#include <Il2CppModLoader/app/types/CreditsController.h>
#include <Il2CppModLoader/app/types/GameController.h>
#include <Il2CppModLoader/app/types/GameTimer.h>
#include <Il2CppModLoader/app/types/DeathUberStateManager.h>
#include <Il2CppModLoader/app/types/IDeathUberStateSetter.h>
#include <Il2CppModLoader/app/types/SaveGameController.h>
#include <Il2CppModLoader/app/types/GameScheduler.h>
#include <Il2CppModLoader/app/types/RestoreCheckpointController.h>
#include <Il2CppModLoader/app/types/PlatformServiceProvider.h>
#include <Il2CppModLoader/app/types/ISignInProvider.h>
#include <Il2CppModLoader/app/types/IDataProvider.h>
#include <Il2CppModLoader/app/types/PlayFabSignInProvider.h>
#include <Il2CppModLoader/app/types/PlayFabUser.h>
#include <Il2CppModLoader/app/types/PlayFabStatistics.h>
#include <Il2CppModLoader/app/types/CacheData__Array.h>
#include <Il2CppModLoader/app/types/ITelemetryProvider.h>
#include <Il2CppModLoader/app/types/PlayFabRaceServiceProvider.h>
#include <Il2CppModLoader/app/types/RaceDataCache.h>
#include <Il2CppModLoader/app/types/IPlatformStorageEventHandler.h>
#include <Il2CppModLoader/app/types/RaceEntry.h>
#include <Il2CppModLoader/app/types/RaceRequestResult.h>
#include <Il2CppModLoader/app/types/RaceRequestResultEntry.h>
#include <Il2CppModLoader/app/types/RaceDataLeaderBoardType__Enum.h>
#include <Il2CppModLoader/app/types/SwitchNetConnectivityChecker.h>
#include <Il2CppModLoader/app/types/TelemetryFpsSample.h>
#include <Il2CppModLoader/app/types/DemoEndState.h>
#include <Il2CppModLoader/app/types/DemoInGameState.h>
#include <Il2CppModLoader/app/types/DemoMainMenuState.h>
#include <Il2CppModLoader/app/types/EndState.h>
#include <Il2CppModLoader/app/types/InGameState.h>
#include <Il2CppModLoader/app/types/LogosState.h>
#include <Il2CppModLoader/app/types/MainMenuState.h>
#include <Il2CppModLoader/app/types/MenuRaceState.h>
#include <Il2CppModLoader/app/types/StartupState.h>
#include <Il2CppModLoader/app/types/MiscUpdater.h>
#include <Il2CppModLoader/app/types/PickupOrbSystem.h>
#include <Il2CppModLoader/app/types/ClearSavedPropsDisabler_c_DisplayClass4_0.h>
#include <Il2CppModLoader/app/types/DebugGUIText.h>
#include <Il2CppModLoader/app/types/DebugGUIText_c.h>
#include <Il2CppModLoader/app/types/ExceptionsDebugText.h>
#include <Il2CppModLoader/app/types/PickupSequenceRestrictZone.h>
#include <Il2CppModLoader/app/types/SeinPickupProcessor_c.h>
#include <Il2CppModLoader/app/types/ISenseInteractable.h>
#include <Il2CppModLoader/app/types/SeinSenseInteractionHandler.h>
#include <Il2CppModLoader/app/types/SeinTransparentWallHandler.h>
#include <Il2CppModLoader/app/types/Cheat.h>
#include <Il2CppModLoader/app/types/CheatsHandler.h>
#include <Il2CppModLoader/app/types/CheatsHandler_c.h>

namespace app::classes::types {
    namespace FpsTcTestOutput { IL2CPP_MODLOADER_DLLEXPORT ::app::FpsTcTestOutput__Class** type_info = (::app::FpsTcTestOutput__Class**)(modloader::win::memory::resolve_rva(0x0471F6D8)); }
    namespace MainThreadSleepTester { IL2CPP_MODLOADER_DLLEXPORT ::app::MainThreadSleepTester__Class** type_info = (::app::MainThreadSleepTester__Class**)(modloader::win::memory::resolve_rva(0x0477F408)); }
    namespace SceneFPSTest_State__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneFPSTest_State__Enum__Class** type_info = (::app::SceneFPSTest_State__Enum__Class**)(modloader::win::memory::resolve_rva(0x04734E58)); }
    namespace SceneFPSTest { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneFPSTest__Class** type_info = (::app::SceneFPSTest__Class**)(modloader::win::memory::resolve_rva(0x0472ED60)); }
    namespace SceneFPSTest_TestEntry { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneFPSTest_TestEntry__Class** type_info = (::app::SceneFPSTest_TestEntry__Class**)(modloader::win::memory::resolve_rva(0x04760FB8)); }
    namespace IMoonTest { IL2CPP_MODLOADER_DLLEXPORT ::app::IMoonTest__Class** type_info = (::app::IMoonTest__Class**)(modloader::win::memory::resolve_rva(0x0478F268)); }
    namespace SceneFPSTest_TestEntry__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneFPSTest_TestEntry__Array__Class** type_info = (::app::SceneFPSTest_TestEntry__Array__Class**)(modloader::win::memory::resolve_rva(0x0470BB00)); }
    namespace SceneFPSTest_c { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneFPSTest_c__Class** type_info = (::app::SceneFPSTest_c__Class**)(modloader::win::memory::resolve_rva(0x04722090)); }
    namespace ScenesToSkip { IL2CPP_MODLOADER_DLLEXPORT ::app::ScenesToSkip__Class** type_info = (::app::ScenesToSkip__Class**)(modloader::win::memory::resolve_rva(0x04732D30)); }
    namespace UberPoolPerfTest_TestMode__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::UberPoolPerfTest_TestMode__Enum__Class** type_info = (::app::UberPoolPerfTest_TestMode__Enum__Class**)(modloader::win::memory::resolve_rva(0x0476B168)); }
    namespace UberPoolPerfTest { IL2CPP_MODLOADER_DLLEXPORT ::app::UberPoolPerfTest__Class** type_info = (::app::UberPoolPerfTest__Class**)(modloader::win::memory::resolve_rva(0x0471C490)); }
    namespace UberPoolPerfTest_Settings { IL2CPP_MODLOADER_DLLEXPORT ::app::UberPoolPerfTest_Settings__Class** type_info = (::app::UberPoolPerfTest_Settings__Class**)(modloader::win::memory::resolve_rva(0x04778790)); }
    namespace UberPoolPerfTest_SettingOverrides { IL2CPP_MODLOADER_DLLEXPORT ::app::UberPoolPerfTest_SettingOverrides__Class** type_info = (::app::UberPoolPerfTest_SettingOverrides__Class**)(modloader::win::memory::resolve_rva(0x04721670)); }
    namespace UberPoolPerfTest_PrefabInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::UberPoolPerfTest_PrefabInfo__Class** type_info = (::app::UberPoolPerfTest_PrefabInfo__Class**)(modloader::win::memory::resolve_rva(0x04764FD8)); }
    namespace UberPoolPerfTest_LogCatcher { IL2CPP_MODLOADER_DLLEXPORT ::app::UberPoolPerfTest_LogCatcher__Class** type_info = (::app::UberPoolPerfTest_LogCatcher__Class**)(modloader::win::memory::resolve_rva(0x04739658)); }
    namespace UberPoolPerfTest_Settings_c { IL2CPP_MODLOADER_DLLEXPORT ::app::UberPoolPerfTest_Settings_c__Class** type_info = (::app::UberPoolPerfTest_Settings_c__Class**)(modloader::win::memory::resolve_rva(0x047736D8)); }
    namespace UberPoolPerfTest_c_DisplayClass38_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::UberPoolPerfTest_c_DisplayClass38_0__Class** type_info = (::app::UberPoolPerfTest_c_DisplayClass38_0__Class**)(modloader::win::memory::resolve_rva(0x047693E8)); }
    namespace UberPoolPerfTest_c_DisplayClass41_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::UberPoolPerfTest_c_DisplayClass41_0__Class** type_info = (::app::UberPoolPerfTest_c_DisplayClass41_0__Class**)(modloader::win::memory::resolve_rva(0x0476C0A0)); }
    namespace UberPoolPerfTest_c { IL2CPP_MODLOADER_DLLEXPORT ::app::UberPoolPerfTest_c__Class** type_info = (::app::UberPoolPerfTest_c__Class**)(modloader::win::memory::resolve_rva(0x04762CC8)); }
    namespace ColliderAnimatorSystem { IL2CPP_MODLOADER_DLLEXPORT ::app::ColliderAnimatorSystem__Class** type_info = (::app::ColliderAnimatorSystem__Class**)(modloader::win::memory::resolve_rva(0x04740CF0)); }
    namespace ColliderAnimatorSystem_SphereColliderAnimationState { IL2CPP_MODLOADER_DLLEXPORT ::app::ColliderAnimatorSystem_SphereColliderAnimationState__Class** type_info = (::app::ColliderAnimatorSystem_SphereColliderAnimationState__Class**)(modloader::win::memory::resolve_rva(0x04744410)); }
    namespace UberBloomAnimator { IL2CPP_MODLOADER_DLLEXPORT ::app::UberBloomAnimator__Class** type_info = (::app::UberBloomAnimator__Class**)(modloader::win::memory::resolve_rva(0x0476CFC8)); }
    namespace UberBrightnessContrastAnimator { IL2CPP_MODLOADER_DLLEXPORT ::app::UberBrightnessContrastAnimator__Class** type_info = (::app::UberBrightnessContrastAnimator__Class**)(modloader::win::memory::resolve_rva(0x04792A38)); }
    namespace EnemyArenaVirtualAnimator { IL2CPP_MODLOADER_DLLEXPORT ::app::EnemyArenaVirtualAnimator__Class** type_info = (::app::EnemyArenaVirtualAnimator__Class**)(modloader::win::memory::resolve_rva(0x047309C8)); }
    namespace EnemyArenaVirtualAnimator_Context { IL2CPP_MODLOADER_DLLEXPORT ::app::EnemyArenaVirtualAnimator_Context__Class** type_info = (::app::EnemyArenaVirtualAnimator_Context__Class**)(modloader::win::memory::resolve_rva(0x047199A0)); }
    namespace EnemyArenaWaveVirtualAnimator { IL2CPP_MODLOADER_DLLEXPORT ::app::EnemyArenaWaveVirtualAnimator__Class** type_info = (::app::EnemyArenaWaveVirtualAnimator__Class**)(modloader::win::memory::resolve_rva(0x0472ADF0)); }
    namespace EnemyArenaWaveVirtualAnimator_Context { IL2CPP_MODLOADER_DLLEXPORT ::app::EnemyArenaWaveVirtualAnimator_Context__Class** type_info = (::app::EnemyArenaWaveVirtualAnimator_Context__Class**)(modloader::win::memory::resolve_rva(0x04712F48)); }
    namespace BaseAnimator_c { IL2CPP_MODLOADER_DLLEXPORT ::app::BaseAnimator_c__Class** type_info = (::app::BaseAnimator_c__Class**)(modloader::win::memory::resolve_rva(0x04718588)); }
    namespace DamagerAnimator { IL2CPP_MODLOADER_DLLEXPORT ::app::DamagerAnimator__Class** type_info = (::app::DamagerAnimator__Class**)(modloader::win::memory::resolve_rva(0x04716BD0)); }
    namespace DistortionAnimator_RendererData { IL2CPP_MODLOADER_DLLEXPORT ::app::DistortionAnimator_RendererData__Class** type_info = (::app::DistortionAnimator_RendererData__Class**)(modloader::win::memory::resolve_rva(0x0476B7E0)); }
    namespace DistortionAnimator_RendererData_Property { IL2CPP_MODLOADER_DLLEXPORT ::app::DistortionAnimator_RendererData_Property__Class** type_info = (::app::DistortionAnimator_RendererData_Property__Class**)(modloader::win::memory::resolve_rva(0x04726380)); }
    namespace DofAnimator { IL2CPP_MODLOADER_DLLEXPORT ::app::DofAnimator__Class** type_info = (::app::DofAnimator__Class**)(modloader::win::memory::resolve_rva(0x04743EC8)); }
    namespace InstantiateAnimatorB { IL2CPP_MODLOADER_DLLEXPORT ::app::InstantiateAnimatorB__Class** type_info = (::app::InstantiateAnimatorB__Class**)(modloader::win::memory::resolve_rva(0x047354A0)); }
    namespace LegacyCinematicCharacterAnimator_Character__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::LegacyCinematicCharacterAnimator_Character__Enum__Class** type_info = (::app::LegacyCinematicCharacterAnimator_Character__Enum__Class**)(modloader::win::memory::resolve_rva(0x0478F6C8)); }
    namespace LegacyCinematicCharacterAnimator_FacingDirection__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::LegacyCinematicCharacterAnimator_FacingDirection__Enum__Class** type_info = (::app::LegacyCinematicCharacterAnimator_FacingDirection__Enum__Class**)(modloader::win::memory::resolve_rva(0x04729F40)); }
    namespace MocupAnimator_Curve__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::MocupAnimator_Curve__Array__Class** type_info = (::app::MocupAnimator_Curve__Array__Class**)(modloader::win::memory::resolve_rva(0x0472B828)); }
    namespace SoundAnimator { IL2CPP_MODLOADER_DLLEXPORT ::app::SoundAnimator__Class** type_info = (::app::SoundAnimator__Class**)(modloader::win::memory::resolve_rva(0x04780E88)); }
    namespace TimelineEventTrigger_c { IL2CPP_MODLOADER_DLLEXPORT ::app::TimelineEventTrigger_c__Class** type_info = (::app::TimelineEventTrigger_c__Class**)(modloader::win::memory::resolve_rva(0x047237D0)); }
    namespace UberPostBloomAnimator { IL2CPP_MODLOADER_DLLEXPORT ::app::UberPostBloomAnimator__Class** type_info = (::app::UberPostBloomAnimator__Class**)(modloader::win::memory::resolve_rva(0x0470B8F8)); }
    namespace UberPostContrastAndBrightnessAnimator { IL2CPP_MODLOADER_DLLEXPORT ::app::UberPostContrastAndBrightnessAnimator__Class** type_info = (::app::UberPostContrastAndBrightnessAnimator__Class**)(modloader::win::memory::resolve_rva(0x047094B8)); }
    namespace UberTextureSettingsAnimator { IL2CPP_MODLOADER_DLLEXPORT ::app::UberTextureSettingsAnimator__Class** type_info = (::app::UberTextureSettingsAnimator__Class**)(modloader::win::memory::resolve_rva(0x04720A00)); }
    namespace BrainScript_c { IL2CPP_MODLOADER_DLLEXPORT ::app::BrainScript_c__Class** type_info = (::app::BrainScript_c__Class**)(modloader::win::memory::resolve_rva(0x0476F400)); }
    namespace ProjectileSpawnerPinkPlantBrain { IL2CPP_MODLOADER_DLLEXPORT ::app::ProjectileSpawnerPinkPlantBrain__Class** type_info = (::app::ProjectileSpawnerPinkPlantBrain__Class**)(modloader::win::memory::resolve_rva(0x0473C690)); }
    namespace LegacyTimelineSequence_c { IL2CPP_MODLOADER_DLLEXPORT ::app::LegacyTimelineSequence_c__Class** type_info = (::app::LegacyTimelineSequence_c__Class**)(modloader::win::memory::resolve_rva(0x04733498)); }
    namespace SerializationSetupGroup { IL2CPP_MODLOADER_DLLEXPORT ::app::SerializationSetupGroup__Class** type_info = (::app::SerializationSetupGroup__Class**)(modloader::win::memory::resolve_rva(0x04771060)); }
    namespace SerializationSetupGroup_StateChange { IL2CPP_MODLOADER_DLLEXPORT ::app::SerializationSetupGroup_StateChange__Class** type_info = (::app::SerializationSetupGroup_StateChange__Class**)(modloader::win::memory::resolve_rva(0x0470D638)); }
    namespace Utility { IL2CPP_MODLOADER_DLLEXPORT ::app::Utility__Class** type_info = (::app::Utility__Class**)(modloader::win::memory::resolve_rva(0x04747830)); }
    namespace Utility_DisableLater_d_8 { IL2CPP_MODLOADER_DLLEXPORT ::app::Utility_DisableLater_d_8__Class** type_info = (::app::Utility_DisableLater_d_8__Class**)(modloader::win::memory::resolve_rva(0x0470A9A0)); }
    namespace VerletStructure_JobSystem { IL2CPP_MODLOADER_DLLEXPORT ::app::VerletStructure_JobSystem__Class** type_info = (::app::VerletStructure_JobSystem__Class**)(modloader::win::memory::resolve_rva(0x0473E198)); }
    namespace VerletStructure_SystemWithMonoBehaviour { IL2CPP_MODLOADER_DLLEXPORT ::app::VerletStructure_SystemWithMonoBehaviour__Class** type_info = (::app::VerletStructure_SystemWithMonoBehaviour__Class**)(modloader::win::memory::resolve_rva(0x0476E6E8)); }
    namespace VerletStructure_SystemWithMonoBehaviour_c { IL2CPP_MODLOADER_DLLEXPORT ::app::VerletStructure_SystemWithMonoBehaviour_c__Class** type_info = (::app::VerletStructure_SystemWithMonoBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x0470A060)); }
    namespace VerletStructure_JobWithMonoBehaviour { IL2CPP_MODLOADER_DLLEXPORT ::app::VerletStructure_JobWithMonoBehaviour__Class** type_info = (::app::VerletStructure_JobWithMonoBehaviour__Class**)(modloader::win::memory::resolve_rva(0x04759748)); }
    namespace CreditsController { IL2CPP_MODLOADER_DLLEXPORT ::app::CreditsController__Class** type_info = (::app::CreditsController__Class**)(modloader::win::memory::resolve_rva(0x0476B3F8)); }
    namespace GameController { IL2CPP_MODLOADER_DLLEXPORT ::app::GameController__Class** type_info = (::app::GameController__Class**)(modloader::win::memory::resolve_rva(0x047015F8)); }
    namespace GameTimer { IL2CPP_MODLOADER_DLLEXPORT ::app::GameTimer__Class** type_info = (::app::GameTimer__Class**)(modloader::win::memory::resolve_rva(0x0476FCF8)); }
    namespace DeathUberStateManager { IL2CPP_MODLOADER_DLLEXPORT ::app::DeathUberStateManager__Class** type_info = (::app::DeathUberStateManager__Class**)(modloader::win::memory::resolve_rva(0x04733D40)); }
    namespace IDeathUberStateSetter { IL2CPP_MODLOADER_DLLEXPORT ::app::IDeathUberStateSetter__Class** type_info = (::app::IDeathUberStateSetter__Class**)(modloader::win::memory::resolve_rva(0x04732480)); }
    namespace SaveGameController { IL2CPP_MODLOADER_DLLEXPORT ::app::SaveGameController__Class** type_info = (::app::SaveGameController__Class**)(modloader::win::memory::resolve_rva(0x0472C390)); }
    namespace GameScheduler { IL2CPP_MODLOADER_DLLEXPORT ::app::GameScheduler__Class** type_info = (::app::GameScheduler__Class**)(modloader::win::memory::resolve_rva(0x04713EF0)); }
    namespace RestoreCheckpointController { IL2CPP_MODLOADER_DLLEXPORT ::app::RestoreCheckpointController__Class** type_info = (::app::RestoreCheckpointController__Class**)(modloader::win::memory::resolve_rva(0x0475E690)); }
    namespace PlatformServiceProvider { IL2CPP_MODLOADER_DLLEXPORT ::app::PlatformServiceProvider__Class** type_info = (::app::PlatformServiceProvider__Class**)(modloader::win::memory::resolve_rva(0x04771B20)); }
    namespace ISignInProvider { IL2CPP_MODLOADER_DLLEXPORT ::app::ISignInProvider__Class** type_info = (::app::ISignInProvider__Class**)(modloader::win::memory::resolve_rva(0x0475EC98)); }
    namespace IDataProvider { IL2CPP_MODLOADER_DLLEXPORT ::app::IDataProvider__Class** type_info = (::app::IDataProvider__Class**)(modloader::win::memory::resolve_rva(0x04791518)); }
    namespace PlayFabSignInProvider { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabSignInProvider__Class** type_info = (::app::PlayFabSignInProvider__Class**)(modloader::win::memory::resolve_rva(0x0475C6B8)); }
    namespace PlayFabUser { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabUser__Class** type_info = (::app::PlayFabUser__Class**)(modloader::win::memory::resolve_rva(0x04727800)); }
    namespace PlayFabStatistics { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabStatistics__Class** type_info = (::app::PlayFabStatistics__Class**)(modloader::win::memory::resolve_rva(0x0476A318)); }
    namespace CacheData__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::CacheData__Array__Class** type_info = (::app::CacheData__Array__Class**)(modloader::win::memory::resolve_rva(0x04754680)); }
    namespace ITelemetryProvider { IL2CPP_MODLOADER_DLLEXPORT ::app::ITelemetryProvider__Class** type_info = (::app::ITelemetryProvider__Class**)(modloader::win::memory::resolve_rva(0x047982A0)); }
    namespace PlayFabRaceServiceProvider { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabRaceServiceProvider__Class** type_info = (::app::PlayFabRaceServiceProvider__Class**)(modloader::win::memory::resolve_rva(0x04717C70)); }
    namespace RaceDataCache { IL2CPP_MODLOADER_DLLEXPORT ::app::RaceDataCache__Class** type_info = (::app::RaceDataCache__Class**)(modloader::win::memory::resolve_rva(0x0477F458)); }
    namespace IPlatformStorageEventHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::IPlatformStorageEventHandler__Class** type_info = (::app::IPlatformStorageEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04704E78)); }
    namespace RaceEntry { IL2CPP_MODLOADER_DLLEXPORT ::app::RaceEntry__Class** type_info = (::app::RaceEntry__Class**)(modloader::win::memory::resolve_rva(0x04766C18)); }
    namespace RaceRequestResult { IL2CPP_MODLOADER_DLLEXPORT ::app::RaceRequestResult__Class** type_info = (::app::RaceRequestResult__Class**)(modloader::win::memory::resolve_rva(0x04766548)); }
    namespace RaceRequestResultEntry { IL2CPP_MODLOADER_DLLEXPORT ::app::RaceRequestResultEntry__Class** type_info = (::app::RaceRequestResultEntry__Class**)(modloader::win::memory::resolve_rva(0x04799F48)); }
    namespace RaceDataLeaderBoardType__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::RaceDataLeaderBoardType__Enum__Class** type_info = (::app::RaceDataLeaderBoardType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0476E1F0)); }
    namespace SwitchNetConnectivityChecker { IL2CPP_MODLOADER_DLLEXPORT ::app::SwitchNetConnectivityChecker__Class** type_info = (::app::SwitchNetConnectivityChecker__Class**)(modloader::win::memory::resolve_rva(0x047356B8)); }
    namespace TelemetryFpsSample { IL2CPP_MODLOADER_DLLEXPORT ::app::TelemetryFpsSample__Class** type_info = (::app::TelemetryFpsSample__Class**)(modloader::win::memory::resolve_rva(0x0473CA28)); }
    namespace DemoEndState { IL2CPP_MODLOADER_DLLEXPORT ::app::DemoEndState__Class** type_info = (::app::DemoEndState__Class**)(modloader::win::memory::resolve_rva(0x047391B8)); }
    namespace DemoInGameState { IL2CPP_MODLOADER_DLLEXPORT ::app::DemoInGameState__Class** type_info = (::app::DemoInGameState__Class**)(modloader::win::memory::resolve_rva(0x04753330)); }
    namespace DemoMainMenuState { IL2CPP_MODLOADER_DLLEXPORT ::app::DemoMainMenuState__Class** type_info = (::app::DemoMainMenuState__Class**)(modloader::win::memory::resolve_rva(0x04796668)); }
    namespace EndState { IL2CPP_MODLOADER_DLLEXPORT ::app::EndState__Class** type_info = (::app::EndState__Class**)(modloader::win::memory::resolve_rva(0x04726A68)); }
    namespace InGameState { IL2CPP_MODLOADER_DLLEXPORT ::app::InGameState__Class** type_info = (::app::InGameState__Class**)(modloader::win::memory::resolve_rva(0x04751BE0)); }
    namespace LogosState { IL2CPP_MODLOADER_DLLEXPORT ::app::LogosState__Class** type_info = (::app::LogosState__Class**)(modloader::win::memory::resolve_rva(0x04706DE8)); }
    namespace MainMenuState { IL2CPP_MODLOADER_DLLEXPORT ::app::MainMenuState__Class** type_info = (::app::MainMenuState__Class**)(modloader::win::memory::resolve_rva(0x0472AEC0)); }
    namespace MenuRaceState { IL2CPP_MODLOADER_DLLEXPORT ::app::MenuRaceState__Class** type_info = (::app::MenuRaceState__Class**)(modloader::win::memory::resolve_rva(0x0475F210)); }
    namespace StartupState { IL2CPP_MODLOADER_DLLEXPORT ::app::StartupState__Class** type_info = (::app::StartupState__Class**)(modloader::win::memory::resolve_rva(0x04792540)); }
    namespace MiscUpdater { IL2CPP_MODLOADER_DLLEXPORT ::app::MiscUpdater__Class** type_info = (::app::MiscUpdater__Class**)(modloader::win::memory::resolve_rva(0x047136F8)); }
    namespace PickupOrbSystem { IL2CPP_MODLOADER_DLLEXPORT ::app::PickupOrbSystem__Class** type_info = (::app::PickupOrbSystem__Class**)(modloader::win::memory::resolve_rva(0x04719C98)); }
    namespace ClearSavedPropsDisabler_c_DisplayClass4_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::ClearSavedPropsDisabler_c_DisplayClass4_0__Class** type_info = (::app::ClearSavedPropsDisabler_c_DisplayClass4_0__Class**)(modloader::win::memory::resolve_rva(0x04713D10)); }
    namespace DebugGUIText { IL2CPP_MODLOADER_DLLEXPORT ::app::DebugGUIText__Class** type_info = (::app::DebugGUIText__Class**)(modloader::win::memory::resolve_rva(0x0472B9B0)); }
    namespace DebugGUIText_c { IL2CPP_MODLOADER_DLLEXPORT ::app::DebugGUIText_c__Class** type_info = (::app::DebugGUIText_c__Class**)(modloader::win::memory::resolve_rva(0x047289D8)); }
    namespace ExceptionsDebugText { IL2CPP_MODLOADER_DLLEXPORT ::app::ExceptionsDebugText__Class** type_info = (::app::ExceptionsDebugText__Class**)(modloader::win::memory::resolve_rva(0x04757AB0)); }
    namespace PickupSequenceRestrictZone { IL2CPP_MODLOADER_DLLEXPORT ::app::PickupSequenceRestrictZone__Class** type_info = (::app::PickupSequenceRestrictZone__Class**)(modloader::win::memory::resolve_rva(0x04778FE0)); }
    namespace SeinPickupProcessor_c { IL2CPP_MODLOADER_DLLEXPORT ::app::SeinPickupProcessor_c__Class** type_info = (::app::SeinPickupProcessor_c__Class**)(modloader::win::memory::resolve_rva(0x04780A10)); }
    namespace ISenseInteractable { IL2CPP_MODLOADER_DLLEXPORT ::app::ISenseInteractable__Class** type_info = (::app::ISenseInteractable__Class**)(modloader::win::memory::resolve_rva(0x0475DD10)); }
    namespace SeinSenseInteractionHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::SeinSenseInteractionHandler__Class** type_info = (::app::SeinSenseInteractionHandler__Class**)(modloader::win::memory::resolve_rva(0x04763A68)); }
    namespace SeinTransparentWallHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::SeinTransparentWallHandler__Class** type_info = (::app::SeinTransparentWallHandler__Class**)(modloader::win::memory::resolve_rva(0x0475BDE8)); }
    namespace Cheat { IL2CPP_MODLOADER_DLLEXPORT ::app::Cheat__Class** type_info = (::app::Cheat__Class**)(modloader::win::memory::resolve_rva(0x04720F68)); }
    namespace CheatsHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::CheatsHandler__Class** type_info = (::app::CheatsHandler__Class**)(modloader::win::memory::resolve_rva(0x0471ABA0)); }
    namespace CheatsHandler_c { IL2CPP_MODLOADER_DLLEXPORT ::app::CheatsHandler_c__Class** type_info = (::app::CheatsHandler_c__Class**)(modloader::win::memory::resolve_rva(0x04737638)); }
}
