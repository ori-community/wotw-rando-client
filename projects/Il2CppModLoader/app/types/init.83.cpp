#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/CheatsHandler_InitDebugMenu_d_14.h>
#include <Il2CppModLoader/app/types/CursorController.h>
#include <Il2CppModLoader/app/types/ICustomConditionDefinition.h>
#include <Il2CppModLoader/app/types/DemoLogic.h>
#include <Il2CppModLoader/app/types/DifficultyController.h>
#include <Il2CppModLoader/app/types/DifficultyController_c.h>
#include <Il2CppModLoader/app/types/EnableParticleEmitterOnStart_Start_d_1.h>
#include <Il2CppModLoader/app/types/ErrorMessageController.h>
#include <Il2CppModLoader/app/types/IRaceServiceProvider.h>
#include <Il2CppModLoader/app/types/GameController_RestartingCleanupNextFrame_d_141.h>
#include <Il2CppModLoader/app/types/GameController_Start_d_161.h>
#include <Il2CppModLoader/app/types/GameController_c.h>
#include <Il2CppModLoader/app/types/GameController_StartBuildInScene_d_178.h>
#include <Il2CppModLoader/app/types/GameController_c_DisplayClass179_0.h>
#include <Il2CppModLoader/app/types/GameController_SetRunInBackgroundToTrue_d_181.h>
#include <Il2CppModLoader/app/types/GameController_LoadAssets_d_182.h>
#include <Il2CppModLoader/app/types/GameController_WarmUpResourcesRoutine_d_191.h>
#include <Il2CppModLoader/app/types/GameControllerLate.h>
#include <Il2CppModLoader/app/types/GameControllerLate_Start_d_4.h>
#include <Il2CppModLoader/app/types/GameControllerLate_OnEndOfFrame_d_6.h>
#include <Il2CppModLoader/app/types/GameStateMachine.h>
#include <Il2CppModLoader/app/types/GlideFeatherAnimator_c.h>
#include <Il2CppModLoader/app/types/GoldenSeinPositionTrigger.h>
#include <Il2CppModLoader/app/types/LastExecutionOrder.h>
#include <Il2CppModLoader/app/types/LeakedSceneObjectDetector.h>
#include <Il2CppModLoader/app/types/LeakedSceneObjectDetector_ObjectData.h>
#include <Il2CppModLoader/app/types/LeakedSceneObjectDetector_c_DisplayClass16_0.h>
#include <Il2CppModLoader/app/types/LeakedSceneObjectDetector_c.h>
#include <Il2CppModLoader/app/types/Letterbox_1.h>
#include <Il2CppModLoader/app/types/PhysicsLimitTest.h>
#include <Il2CppModLoader/app/types/PlayerUberStateGroup.h>
#include <Il2CppModLoader/app/types/PostStateDefinition_PostState.h>
#include <Il2CppModLoader/app/types/RestoreCheckpointController_MoveCameraInstantlyAgain_d_1.h>
#include <Il2CppModLoader/app/types/SaveFileInfo.h>
#include <Il2CppModLoader/app/types/SaveSystemDebuger.h>
#include <Il2CppModLoader/app/types/SeinWorldState.h>
#include <Il2CppModLoader/app/types/WorldState__Enum.h>
#include <Il2CppModLoader/app/types/SpecialAbilityZone.h>
#include <Il2CppModLoader/app/types/Trail_TrailPosition.h>
#include <Il2CppModLoader/app/types/UnparentTrailRenderer_ResetTrail_d_12.h>
#include <Il2CppModLoader/app/types/ArtBuildController_c.h>
#include <Il2CppModLoader/app/types/ArtBuildController_LoadScreenshots_d_9.h>
#include <Il2CppModLoader/app/types/RockExplodeZone.h>
#include <Il2CppModLoader/app/types/RisingWater.h>
#include <Il2CppModLoader/app/types/WindShaftController.h>
#include <Il2CppModLoader/app/types/MistyWoodsKuroGameplayHideZone.h>
#include <Il2CppModLoader/app/types/MistyWoodsKuroGameplayHideZone_c_DisplayClass3_0.h>
#include <Il2CppModLoader/app/types/PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerStates.h>
#include <Il2CppModLoader/app/types/PetrifiedOwlSilentWoodsController_StalkALoopState.h>
#include <Il2CppModLoader/app/types/PetrifiedOwlSilentWoodsController_StalkAToBState.h>
#include <Il2CppModLoader/app/types/PetrifiedOwlSilentWoodsController_StalkBLoopState.h>
#include <Il2CppModLoader/app/types/PetrifiedOwlSilentWoodsController_StalkBExitState.h>
#include <Il2CppModLoader/app/types/PetrifiedOwlSilentWoodsController_StalkBToCOutOfScreenState.h>
#include <Il2CppModLoader/app/types/PetrifiedOwlSilentWoodsController_StalkCState.h>
#include <Il2CppModLoader/app/types/PetrifiedOwlSilentWoodsController_StalkCompletedState.h>
#include <Il2CppModLoader/app/types/RotatingMaceRoomCarryablePlaceholder.h>
#include <Il2CppModLoader/app/types/ConceptScreen.h>
#include <Il2CppModLoader/app/types/ConceptScreen_c_DisplayClass22_0.h>
#include <Il2CppModLoader/app/types/ValleyOfTheWindKuroDeathZone.h>
#include <Il2CppModLoader/app/types/ControlListOptions.h>
#include <Il2CppModLoader/app/types/CommandBinding__Array.h>
#include <Il2CppModLoader/app/types/KeybindingCommandMapAsset_c_DisplayClass56_0.h>
#include <Il2CppModLoader/app/types/KeybindingCommandMapAsset_c_DisplayClass58_0.h>
#include <Il2CppModLoader/app/types/KeybindingCommandMapAsset_GetAllBindingsIterator_d_62.h>
#include <Il2CppModLoader/app/types/BuilderItem.h>
#include <Il2CppModLoader/app/types/BuilderItem_c.h>
#include <Il2CppModLoader/app/types/BuilderScreen.h>
#include <Il2CppModLoader/app/types/ShopkeeperItem.h>
#include <Il2CppModLoader/app/types/ShopkeeperItem__Array.h>
#include <Il2CppModLoader/app/types/GardenerItem.h>
#include <Il2CppModLoader/app/types/GardenerItem_c.h>
#include <Il2CppModLoader/app/types/GardenerScreen.h>
#include <Il2CppModLoader/app/types/GUIHelper.h>
#include <Il2CppModLoader/app/types/LoremasterReplayController.h>
#include <Il2CppModLoader/app/types/ReplaySetting.h>
#include <Il2CppModLoader/app/types/LoremasterReplayController_c_DisplayClass48_0.h>
#include <Il2CppModLoader/app/types/LoremasterScreen.h>
#include <Il2CppModLoader/app/types/LoremasterScreen_c.h>
#include <Il2CppModLoader/app/types/ReplayScreen.h>
#include <Il2CppModLoader/app/types/ReplayScreen_c_DisplayClass22_0.h>
#include <Il2CppModLoader/app/types/ReplaySetting_ApplyRoutine_d_34.h>
#include <Il2CppModLoader/app/types/ReplaySetting_GoToSceneRoutine_d_37.h>
#include <Il2CppModLoader/app/types/MapmakerItem.h>
#include <Il2CppModLoader/app/types/MapmakerScreen.h>
#include <Il2CppModLoader/app/types/MapmakerScreen_c.h>
#include <Il2CppModLoader/app/types/SeinUI.h>
#include <Il2CppModLoader/app/types/ShardUpgradeScreen.h>
#include <Il2CppModLoader/app/types/UpgradableShardItem.h>
#include <Il2CppModLoader/app/types/ShardUpgradeScreen_c.h>
#include <Il2CppModLoader/app/types/ShopkeeperScreen_c.h>
#include <Il2CppModLoader/app/types/RaceMenuScreen.h>
#include <Il2CppModLoader/app/types/RaceMenuScreenNotificationSystem.h>
#include <Il2CppModLoader/app/types/NotificationChecker.h>
#include <Il2CppModLoader/app/types/RaceMenuScreenNotificationSystem__Array.h>
#include <Il2CppModLoader/app/types/TransparencyAnimator.h>
#include <Il2CppModLoader/app/types/RaceMenuScreenUISlot.h>
#include <Il2CppModLoader/app/types/RaceMenuScreenMemoriesPage_c.h>
#include <Il2CppModLoader/app/types/RaceMenuScreenNotificationSystem_c_DisplayClass6_0.h>
#include <Il2CppModLoader/app/types/RaceMenuScreenNotificationSystem_c_DisplayClass8_0.h>
#include <Il2CppModLoader/app/types/NotificationChecker_c.h>

namespace app::classes::types {
    namespace CheatsHandler_InitDebugMenu_d_14 { IL2CPP_MODLOADER_DLLEXPORT ::app::CheatsHandler_InitDebugMenu_d_14__Class** type_info = (::app::CheatsHandler_InitDebugMenu_d_14__Class**)(modloader::win::memory::resolve_rva(0x04700AA0)); }
    namespace CursorController { IL2CPP_MODLOADER_DLLEXPORT ::app::CursorController__Class** type_info = (::app::CursorController__Class**)(modloader::win::memory::resolve_rva(0x04708880)); }
    namespace ICustomConditionDefinition { IL2CPP_MODLOADER_DLLEXPORT ::app::ICustomConditionDefinition__Class** type_info = (::app::ICustomConditionDefinition__Class**)(modloader::win::memory::resolve_rva(0x04718F58)); }
    namespace DemoLogic { IL2CPP_MODLOADER_DLLEXPORT ::app::DemoLogic__Class** type_info = (::app::DemoLogic__Class**)(modloader::win::memory::resolve_rva(0x047713C0)); }
    namespace DifficultyController { IL2CPP_MODLOADER_DLLEXPORT ::app::DifficultyController__Class** type_info = (::app::DifficultyController__Class**)(modloader::win::memory::resolve_rva(0x04723538)); }
    namespace DifficultyController_c { IL2CPP_MODLOADER_DLLEXPORT ::app::DifficultyController_c__Class** type_info = (::app::DifficultyController_c__Class**)(modloader::win::memory::resolve_rva(0x0472B960)); }
    namespace EnableParticleEmitterOnStart_Start_d_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::EnableParticleEmitterOnStart_Start_d_1__Class** type_info = (::app::EnableParticleEmitterOnStart_Start_d_1__Class**)(modloader::win::memory::resolve_rva(0x04765580)); }
    namespace ErrorMessageController { IL2CPP_MODLOADER_DLLEXPORT ::app::ErrorMessageController__Class** type_info = (::app::ErrorMessageController__Class**)(modloader::win::memory::resolve_rva(0x04735020)); }
    namespace IRaceServiceProvider { IL2CPP_MODLOADER_DLLEXPORT ::app::IRaceServiceProvider__Class** type_info = (::app::IRaceServiceProvider__Class**)(modloader::win::memory::resolve_rva(0x0478ACD0)); }
    namespace GameController_RestartingCleanupNextFrame_d_141 { IL2CPP_MODLOADER_DLLEXPORT ::app::GameController_RestartingCleanupNextFrame_d_141__Class** type_info = (::app::GameController_RestartingCleanupNextFrame_d_141__Class**)(modloader::win::memory::resolve_rva(0x0475A2A0)); }
    namespace GameController_Start_d_161 { IL2CPP_MODLOADER_DLLEXPORT ::app::GameController_Start_d_161__Class** type_info = (::app::GameController_Start_d_161__Class**)(modloader::win::memory::resolve_rva(0x04740028)); }
    namespace GameController_c { IL2CPP_MODLOADER_DLLEXPORT ::app::GameController_c__Class** type_info = (::app::GameController_c__Class**)(modloader::win::memory::resolve_rva(0x0475F790)); }
    namespace GameController_StartBuildInScene_d_178 { IL2CPP_MODLOADER_DLLEXPORT ::app::GameController_StartBuildInScene_d_178__Class** type_info = (::app::GameController_StartBuildInScene_d_178__Class**)(modloader::win::memory::resolve_rva(0x0478E490)); }
    namespace GameController_c_DisplayClass179_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::GameController_c_DisplayClass179_0__Class** type_info = (::app::GameController_c_DisplayClass179_0__Class**)(modloader::win::memory::resolve_rva(0x04774550)); }
    namespace GameController_SetRunInBackgroundToTrue_d_181 { IL2CPP_MODLOADER_DLLEXPORT ::app::GameController_SetRunInBackgroundToTrue_d_181__Class** type_info = (::app::GameController_SetRunInBackgroundToTrue_d_181__Class**)(modloader::win::memory::resolve_rva(0x04702BA0)); }
    namespace GameController_LoadAssets_d_182 { IL2CPP_MODLOADER_DLLEXPORT ::app::GameController_LoadAssets_d_182__Class** type_info = (::app::GameController_LoadAssets_d_182__Class**)(modloader::win::memory::resolve_rva(0x0478CF88)); }
    namespace GameController_WarmUpResourcesRoutine_d_191 { IL2CPP_MODLOADER_DLLEXPORT ::app::GameController_WarmUpResourcesRoutine_d_191__Class** type_info = (::app::GameController_WarmUpResourcesRoutine_d_191__Class**)(modloader::win::memory::resolve_rva(0x04715BA0)); }
    namespace GameControllerLate { IL2CPP_MODLOADER_DLLEXPORT ::app::GameControllerLate__Class** type_info = (::app::GameControllerLate__Class**)(modloader::win::memory::resolve_rva(0x04702018)); }
    namespace GameControllerLate_Start_d_4 { IL2CPP_MODLOADER_DLLEXPORT ::app::GameControllerLate_Start_d_4__Class** type_info = (::app::GameControllerLate_Start_d_4__Class**)(modloader::win::memory::resolve_rva(0x04783AC0)); }
    namespace GameControllerLate_OnEndOfFrame_d_6 { IL2CPP_MODLOADER_DLLEXPORT ::app::GameControllerLate_OnEndOfFrame_d_6__Class** type_info = (::app::GameControllerLate_OnEndOfFrame_d_6__Class**)(modloader::win::memory::resolve_rva(0x0470FA60)); }
    namespace GameStateMachine { IL2CPP_MODLOADER_DLLEXPORT ::app::GameStateMachine__Class** type_info = (::app::GameStateMachine__Class**)(modloader::win::memory::resolve_rva(0x04787158)); }
    namespace GlideFeatherAnimator_c { IL2CPP_MODLOADER_DLLEXPORT ::app::GlideFeatherAnimator_c__Class** type_info = (::app::GlideFeatherAnimator_c__Class**)(modloader::win::memory::resolve_rva(0x04747F18)); }
    namespace GoldenSeinPositionTrigger { IL2CPP_MODLOADER_DLLEXPORT ::app::GoldenSeinPositionTrigger__Class** type_info = (::app::GoldenSeinPositionTrigger__Class**)(modloader::win::memory::resolve_rva(0x04739D70)); }
    namespace LastExecutionOrder { IL2CPP_MODLOADER_DLLEXPORT ::app::LastExecutionOrder__Class** type_info = (::app::LastExecutionOrder__Class**)(modloader::win::memory::resolve_rva(0x0472EB98)); }
    namespace LeakedSceneObjectDetector { IL2CPP_MODLOADER_DLLEXPORT ::app::LeakedSceneObjectDetector__Class** type_info = (::app::LeakedSceneObjectDetector__Class**)(modloader::win::memory::resolve_rva(0x047147C8)); }
    namespace LeakedSceneObjectDetector_ObjectData { IL2CPP_MODLOADER_DLLEXPORT ::app::LeakedSceneObjectDetector_ObjectData__Class** type_info = (::app::LeakedSceneObjectDetector_ObjectData__Class**)(modloader::win::memory::resolve_rva(0x047440B0)); }
    namespace LeakedSceneObjectDetector_c_DisplayClass16_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::LeakedSceneObjectDetector_c_DisplayClass16_0__Class** type_info = (::app::LeakedSceneObjectDetector_c_DisplayClass16_0__Class**)(modloader::win::memory::resolve_rva(0x0476F298)); }
    namespace LeakedSceneObjectDetector_c { IL2CPP_MODLOADER_DLLEXPORT ::app::LeakedSceneObjectDetector_c__Class** type_info = (::app::LeakedSceneObjectDetector_c__Class**)(modloader::win::memory::resolve_rva(0x0476D078)); }
    namespace Letterbox_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::Letterbox_1__Class** type_info = (::app::Letterbox_1__Class**)(modloader::win::memory::resolve_rva(0x04718AA8)); }
    namespace PhysicsLimitTest { IL2CPP_MODLOADER_DLLEXPORT ::app::PhysicsLimitTest__Class** type_info = (::app::PhysicsLimitTest__Class**)(modloader::win::memory::resolve_rva(0x04767F20)); }
    namespace PlayerUberStateGroup { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerUberStateGroup__Class** type_info = (::app::PlayerUberStateGroup__Class**)(modloader::win::memory::resolve_rva(0x0475D8E0)); }
    namespace PostStateDefinition_PostState { IL2CPP_MODLOADER_DLLEXPORT ::app::PostStateDefinition_PostState__Class** type_info = (::app::PostStateDefinition_PostState__Class**)(modloader::win::memory::resolve_rva(0x0471E7B0)); }
    namespace RestoreCheckpointController_MoveCameraInstantlyAgain_d_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::RestoreCheckpointController_MoveCameraInstantlyAgain_d_1__Class** type_info = (::app::RestoreCheckpointController_MoveCameraInstantlyAgain_d_1__Class**)(modloader::win::memory::resolve_rva(0x04793C70)); }
    namespace SaveFileInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::SaveFileInfo__Class** type_info = (::app::SaveFileInfo__Class**)(modloader::win::memory::resolve_rva(0x04731E00)); }
    namespace SaveSystemDebuger { IL2CPP_MODLOADER_DLLEXPORT ::app::SaveSystemDebuger__Class** type_info = (::app::SaveSystemDebuger__Class**)(modloader::win::memory::resolve_rva(0x04792F28)); }
    namespace SeinWorldState { IL2CPP_MODLOADER_DLLEXPORT ::app::SeinWorldState__Class** type_info = (::app::SeinWorldState__Class**)(modloader::win::memory::resolve_rva(0x04738518)); }
    namespace WorldState__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::WorldState__Enum__Class** type_info = (::app::WorldState__Enum__Class**)(modloader::win::memory::resolve_rva(0x04730FB0)); }
    namespace SpecialAbilityZone { IL2CPP_MODLOADER_DLLEXPORT ::app::SpecialAbilityZone__Class** type_info = (::app::SpecialAbilityZone__Class**)(modloader::win::memory::resolve_rva(0x04759A78)); }
    namespace Trail_TrailPosition { IL2CPP_MODLOADER_DLLEXPORT ::app::Trail_TrailPosition__Class** type_info = (::app::Trail_TrailPosition__Class**)(modloader::win::memory::resolve_rva(0x04729588)); }
    namespace UnparentTrailRenderer_ResetTrail_d_12 { IL2CPP_MODLOADER_DLLEXPORT ::app::UnparentTrailRenderer_ResetTrail_d_12__Class** type_info = (::app::UnparentTrailRenderer_ResetTrail_d_12__Class**)(modloader::win::memory::resolve_rva(0x04753BE0)); }
    namespace ArtBuildController_c { IL2CPP_MODLOADER_DLLEXPORT ::app::ArtBuildController_c__Class** type_info = (::app::ArtBuildController_c__Class**)(modloader::win::memory::resolve_rva(0x0477AA20)); }
    namespace ArtBuildController_LoadScreenshots_d_9 { IL2CPP_MODLOADER_DLLEXPORT ::app::ArtBuildController_LoadScreenshots_d_9__Class** type_info = (::app::ArtBuildController_LoadScreenshots_d_9__Class**)(modloader::win::memory::resolve_rva(0x04783758)); }
    namespace RockExplodeZone { IL2CPP_MODLOADER_DLLEXPORT ::app::RockExplodeZone__Class** type_info = (::app::RockExplodeZone__Class**)(modloader::win::memory::resolve_rva(0x0478D070)); }
    namespace RisingWater { IL2CPP_MODLOADER_DLLEXPORT ::app::RisingWater__Class** type_info = (::app::RisingWater__Class**)(modloader::win::memory::resolve_rva(0x04754B30)); }
    namespace WindShaftController { IL2CPP_MODLOADER_DLLEXPORT ::app::WindShaftController__Class** type_info = (::app::WindShaftController__Class**)(modloader::win::memory::resolve_rva(0x0475ED20)); }
    namespace MistyWoodsKuroGameplayHideZone { IL2CPP_MODLOADER_DLLEXPORT ::app::MistyWoodsKuroGameplayHideZone__Class** type_info = (::app::MistyWoodsKuroGameplayHideZone__Class**)(modloader::win::memory::resolve_rva(0x047835C8)); }
    namespace MistyWoodsKuroGameplayHideZone_c_DisplayClass3_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::MistyWoodsKuroGameplayHideZone_c_DisplayClass3_0__Class** type_info = (::app::MistyWoodsKuroGameplayHideZone_c_DisplayClass3_0__Class**)(modloader::win::memory::resolve_rva(0x04766260)); }
    namespace PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerStates { IL2CPP_MODLOADER_DLLEXPORT ::app::PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerStates__Class** type_info = (::app::PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerStates__Class**)(modloader::win::memory::resolve_rva(0x047820F8)); }
    namespace PetrifiedOwlSilentWoodsController_StalkALoopState { IL2CPP_MODLOADER_DLLEXPORT ::app::PetrifiedOwlSilentWoodsController_StalkALoopState__Class** type_info = (::app::PetrifiedOwlSilentWoodsController_StalkALoopState__Class**)(modloader::win::memory::resolve_rva(0x0473F928)); }
    namespace PetrifiedOwlSilentWoodsController_StalkAToBState { IL2CPP_MODLOADER_DLLEXPORT ::app::PetrifiedOwlSilentWoodsController_StalkAToBState__Class** type_info = (::app::PetrifiedOwlSilentWoodsController_StalkAToBState__Class**)(modloader::win::memory::resolve_rva(0x04748480)); }
    namespace PetrifiedOwlSilentWoodsController_StalkBLoopState { IL2CPP_MODLOADER_DLLEXPORT ::app::PetrifiedOwlSilentWoodsController_StalkBLoopState__Class** type_info = (::app::PetrifiedOwlSilentWoodsController_StalkBLoopState__Class**)(modloader::win::memory::resolve_rva(0x0472AB70)); }
    namespace PetrifiedOwlSilentWoodsController_StalkBExitState { IL2CPP_MODLOADER_DLLEXPORT ::app::PetrifiedOwlSilentWoodsController_StalkBExitState__Class** type_info = (::app::PetrifiedOwlSilentWoodsController_StalkBExitState__Class**)(modloader::win::memory::resolve_rva(0x047730A0)); }
    namespace PetrifiedOwlSilentWoodsController_StalkBToCOutOfScreenState { IL2CPP_MODLOADER_DLLEXPORT ::app::PetrifiedOwlSilentWoodsController_StalkBToCOutOfScreenState__Class** type_info = (::app::PetrifiedOwlSilentWoodsController_StalkBToCOutOfScreenState__Class**)(modloader::win::memory::resolve_rva(0x04785A78)); }
    namespace PetrifiedOwlSilentWoodsController_StalkCState { IL2CPP_MODLOADER_DLLEXPORT ::app::PetrifiedOwlSilentWoodsController_StalkCState__Class** type_info = (::app::PetrifiedOwlSilentWoodsController_StalkCState__Class**)(modloader::win::memory::resolve_rva(0x0478E708)); }
    namespace PetrifiedOwlSilentWoodsController_StalkCompletedState { IL2CPP_MODLOADER_DLLEXPORT ::app::PetrifiedOwlSilentWoodsController_StalkCompletedState__Class** type_info = (::app::PetrifiedOwlSilentWoodsController_StalkCompletedState__Class**)(modloader::win::memory::resolve_rva(0x047430C8)); }
    namespace RotatingMaceRoomCarryablePlaceholder { IL2CPP_MODLOADER_DLLEXPORT ::app::RotatingMaceRoomCarryablePlaceholder__Class** type_info = (::app::RotatingMaceRoomCarryablePlaceholder__Class**)(modloader::win::memory::resolve_rva(0x0475EF60)); }
    namespace ConceptScreen { IL2CPP_MODLOADER_DLLEXPORT ::app::ConceptScreen__Class** type_info = (::app::ConceptScreen__Class**)(modloader::win::memory::resolve_rva(0x047516A0)); }
    namespace ConceptScreen_c_DisplayClass22_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::ConceptScreen_c_DisplayClass22_0__Class** type_info = (::app::ConceptScreen_c_DisplayClass22_0__Class**)(modloader::win::memory::resolve_rva(0x04736C98)); }
    namespace ValleyOfTheWindKuroDeathZone { IL2CPP_MODLOADER_DLLEXPORT ::app::ValleyOfTheWindKuroDeathZone__Class** type_info = (::app::ValleyOfTheWindKuroDeathZone__Class**)(modloader::win::memory::resolve_rva(0x0474B010)); }
    namespace ControlListOptions { IL2CPP_MODLOADER_DLLEXPORT ::app::ControlListOptions__Class** type_info = (::app::ControlListOptions__Class**)(modloader::win::memory::resolve_rva(0x0471B1D8)); }
    namespace CommandBinding__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::CommandBinding__Array__Class** type_info = (::app::CommandBinding__Array__Class**)(modloader::win::memory::resolve_rva(0x04769660)); }
    namespace KeybindingCommandMapAsset_c_DisplayClass56_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::KeybindingCommandMapAsset_c_DisplayClass56_0__Class** type_info = (::app::KeybindingCommandMapAsset_c_DisplayClass56_0__Class**)(modloader::win::memory::resolve_rva(0x047687C8)); }
    namespace KeybindingCommandMapAsset_c_DisplayClass58_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::KeybindingCommandMapAsset_c_DisplayClass58_0__Class** type_info = (::app::KeybindingCommandMapAsset_c_DisplayClass58_0__Class**)(modloader::win::memory::resolve_rva(0x0477D080)); }
    namespace KeybindingCommandMapAsset_GetAllBindingsIterator_d_62 { IL2CPP_MODLOADER_DLLEXPORT ::app::KeybindingCommandMapAsset_GetAllBindingsIterator_d_62__Class** type_info = (::app::KeybindingCommandMapAsset_GetAllBindingsIterator_d_62__Class**)(modloader::win::memory::resolve_rva(0x047608F0)); }
    namespace BuilderItem { IL2CPP_MODLOADER_DLLEXPORT ::app::BuilderItem__Class** type_info = (::app::BuilderItem__Class**)(modloader::win::memory::resolve_rva(0x0478FE18)); }
    namespace BuilderItem_c { IL2CPP_MODLOADER_DLLEXPORT ::app::BuilderItem_c__Class** type_info = (::app::BuilderItem_c__Class**)(modloader::win::memory::resolve_rva(0x0478D920)); }
    namespace BuilderScreen { IL2CPP_MODLOADER_DLLEXPORT ::app::BuilderScreen__Class** type_info = (::app::BuilderScreen__Class**)(modloader::win::memory::resolve_rva(0x04704B28)); }
    namespace ShopkeeperItem { IL2CPP_MODLOADER_DLLEXPORT ::app::ShopkeeperItem__Class** type_info = (::app::ShopkeeperItem__Class**)(modloader::win::memory::resolve_rva(0x0476D4B8)); }
    namespace ShopkeeperItem__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::ShopkeeperItem__Array__Class** type_info = (::app::ShopkeeperItem__Array__Class**)(modloader::win::memory::resolve_rva(0x047445C8)); }
    namespace GardenerItem { IL2CPP_MODLOADER_DLLEXPORT ::app::GardenerItem__Class** type_info = (::app::GardenerItem__Class**)(modloader::win::memory::resolve_rva(0x04716960)); }
    namespace GardenerItem_c { IL2CPP_MODLOADER_DLLEXPORT ::app::GardenerItem_c__Class** type_info = (::app::GardenerItem_c__Class**)(modloader::win::memory::resolve_rva(0x04774748)); }
    namespace GardenerScreen { IL2CPP_MODLOADER_DLLEXPORT ::app::GardenerScreen__Class** type_info = (::app::GardenerScreen__Class**)(modloader::win::memory::resolve_rva(0x047871C8)); }
    namespace GUIHelper { IL2CPP_MODLOADER_DLLEXPORT ::app::GUIHelper__Class** type_info = (::app::GUIHelper__Class**)(modloader::win::memory::resolve_rva(0x0477BC70)); }
    namespace LoremasterReplayController { IL2CPP_MODLOADER_DLLEXPORT ::app::LoremasterReplayController__Class** type_info = (::app::LoremasterReplayController__Class**)(modloader::win::memory::resolve_rva(0x0470A6A8)); }
    namespace ReplaySetting { IL2CPP_MODLOADER_DLLEXPORT ::app::ReplaySetting__Class** type_info = (::app::ReplaySetting__Class**)(modloader::win::memory::resolve_rva(0x047263A0)); }
    namespace LoremasterReplayController_c_DisplayClass48_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::LoremasterReplayController_c_DisplayClass48_0__Class** type_info = (::app::LoremasterReplayController_c_DisplayClass48_0__Class**)(modloader::win::memory::resolve_rva(0x04781020)); }
    namespace LoremasterScreen { IL2CPP_MODLOADER_DLLEXPORT ::app::LoremasterScreen__Class** type_info = (::app::LoremasterScreen__Class**)(modloader::win::memory::resolve_rva(0x04747620)); }
    namespace LoremasterScreen_c { IL2CPP_MODLOADER_DLLEXPORT ::app::LoremasterScreen_c__Class** type_info = (::app::LoremasterScreen_c__Class**)(modloader::win::memory::resolve_rva(0x04733F30)); }
    namespace ReplayScreen { IL2CPP_MODLOADER_DLLEXPORT ::app::ReplayScreen__Class** type_info = (::app::ReplayScreen__Class**)(modloader::win::memory::resolve_rva(0x04735C30)); }
    namespace ReplayScreen_c_DisplayClass22_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::ReplayScreen_c_DisplayClass22_0__Class** type_info = (::app::ReplayScreen_c_DisplayClass22_0__Class**)(modloader::win::memory::resolve_rva(0x047437E0)); }
    namespace ReplaySetting_ApplyRoutine_d_34 { IL2CPP_MODLOADER_DLLEXPORT ::app::ReplaySetting_ApplyRoutine_d_34__Class** type_info = (::app::ReplaySetting_ApplyRoutine_d_34__Class**)(modloader::win::memory::resolve_rva(0x0474D9B0)); }
    namespace ReplaySetting_GoToSceneRoutine_d_37 { IL2CPP_MODLOADER_DLLEXPORT ::app::ReplaySetting_GoToSceneRoutine_d_37__Class** type_info = (::app::ReplaySetting_GoToSceneRoutine_d_37__Class**)(modloader::win::memory::resolve_rva(0x04724A10)); }
    namespace MapmakerItem { IL2CPP_MODLOADER_DLLEXPORT ::app::MapmakerItem__Class** type_info = (::app::MapmakerItem__Class**)(modloader::win::memory::resolve_rva(0x047426E8)); }
    namespace MapmakerScreen { IL2CPP_MODLOADER_DLLEXPORT ::app::MapmakerScreen__Class** type_info = (::app::MapmakerScreen__Class**)(modloader::win::memory::resolve_rva(0x04744110)); }
    namespace MapmakerScreen_c { IL2CPP_MODLOADER_DLLEXPORT ::app::MapmakerScreen_c__Class** type_info = (::app::MapmakerScreen_c__Class**)(modloader::win::memory::resolve_rva(0x04782E70)); }
    namespace SeinUI { IL2CPP_MODLOADER_DLLEXPORT ::app::SeinUI__Class** type_info = (::app::SeinUI__Class**)(modloader::win::memory::resolve_rva(0x04702748)); }
    namespace ShardUpgradeScreen { IL2CPP_MODLOADER_DLLEXPORT ::app::ShardUpgradeScreen__Class** type_info = (::app::ShardUpgradeScreen__Class**)(modloader::win::memory::resolve_rva(0x0472E650)); }
    namespace UpgradableShardItem { IL2CPP_MODLOADER_DLLEXPORT ::app::UpgradableShardItem__Class** type_info = (::app::UpgradableShardItem__Class**)(modloader::win::memory::resolve_rva(0x047473F8)); }
    namespace ShardUpgradeScreen_c { IL2CPP_MODLOADER_DLLEXPORT ::app::ShardUpgradeScreen_c__Class** type_info = (::app::ShardUpgradeScreen_c__Class**)(modloader::win::memory::resolve_rva(0x047084B8)); }
    namespace ShopkeeperScreen_c { IL2CPP_MODLOADER_DLLEXPORT ::app::ShopkeeperScreen_c__Class** type_info = (::app::ShopkeeperScreen_c__Class**)(modloader::win::memory::resolve_rva(0x04788748)); }
    namespace RaceMenuScreen { IL2CPP_MODLOADER_DLLEXPORT ::app::RaceMenuScreen__Class** type_info = (::app::RaceMenuScreen__Class**)(modloader::win::memory::resolve_rva(0x0478CBF8)); }
    namespace RaceMenuScreenNotificationSystem { IL2CPP_MODLOADER_DLLEXPORT ::app::RaceMenuScreenNotificationSystem__Class** type_info = (::app::RaceMenuScreenNotificationSystem__Class**)(modloader::win::memory::resolve_rva(0x0470B458)); }
    namespace NotificationChecker { IL2CPP_MODLOADER_DLLEXPORT ::app::NotificationChecker__Class** type_info = (::app::NotificationChecker__Class**)(modloader::win::memory::resolve_rva(0x04773E90)); }
    namespace RaceMenuScreenNotificationSystem__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::RaceMenuScreenNotificationSystem__Array__Class** type_info = (::app::RaceMenuScreenNotificationSystem__Array__Class**)(modloader::win::memory::resolve_rva(0x0478AB28)); }
    namespace TransparencyAnimator { IL2CPP_MODLOADER_DLLEXPORT ::app::TransparencyAnimator__Class** type_info = (::app::TransparencyAnimator__Class**)(modloader::win::memory::resolve_rva(0x047706A8)); }
    namespace RaceMenuScreenUISlot { IL2CPP_MODLOADER_DLLEXPORT ::app::RaceMenuScreenUISlot__Class** type_info = (::app::RaceMenuScreenUISlot__Class**)(modloader::win::memory::resolve_rva(0x0477BAA8)); }
    namespace RaceMenuScreenMemoriesPage_c { IL2CPP_MODLOADER_DLLEXPORT ::app::RaceMenuScreenMemoriesPage_c__Class** type_info = (::app::RaceMenuScreenMemoriesPage_c__Class**)(modloader::win::memory::resolve_rva(0x04713F80)); }
    namespace RaceMenuScreenNotificationSystem_c_DisplayClass6_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::RaceMenuScreenNotificationSystem_c_DisplayClass6_0__Class** type_info = (::app::RaceMenuScreenNotificationSystem_c_DisplayClass6_0__Class**)(modloader::win::memory::resolve_rva(0x0478CEE0)); }
    namespace RaceMenuScreenNotificationSystem_c_DisplayClass8_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::RaceMenuScreenNotificationSystem_c_DisplayClass8_0__Class** type_info = (::app::RaceMenuScreenNotificationSystem_c_DisplayClass8_0__Class**)(modloader::win::memory::resolve_rva(0x04753360)); }
    namespace NotificationChecker_c { IL2CPP_MODLOADER_DLLEXPORT ::app::NotificationChecker_c__Class** type_info = (::app::NotificationChecker_c__Class**)(modloader::win::memory::resolve_rva(0x0473E690)); }
}
