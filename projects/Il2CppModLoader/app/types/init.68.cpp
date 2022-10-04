#include <Il2CppModLoader/app/types/AbilitiesData.h>
#include <Il2CppModLoader/app/types/AbilitiesPlugin_FieldInfoCollection.h>
#include <Il2CppModLoader/app/types/AnalogueInputData.h>
#include <Il2CppModLoader/app/types/AsyncRenderCapture.h>
#include <Il2CppModLoader/app/types/AsyncRenderCapture_c_DisplayClass17_0.h>
#include <Il2CppModLoader/app/types/BuildData.h>
#include <Il2CppModLoader/app/types/CameraData.h>
#include <Il2CppModLoader/app/types/CharacterData.h>
#include <Il2CppModLoader/app/types/CheckpointData.h>
#include <Il2CppModLoader/app/types/CursorInputData.h>
#include <Il2CppModLoader/app/types/DeathsData.h>
#include <Il2CppModLoader/app/types/EntityData.h>
#include <Il2CppModLoader/app/types/EntityData_EntityPosition.h>
#include <Il2CppModLoader/app/types/FfmpegCommandLineBuilder.h>
#include <Il2CppModLoader/app/types/FfmpegStreamer.h>
#include <Il2CppModLoader/app/types/GroundSegment.h>
#include <Il2CppModLoader/app/types/GroundSegment_c.h>
#include <Il2CppModLoader/app/types/ILeachable.h>
#include <Il2CppModLoader/app/types/IRecorderPlugin.h>
#include <Il2CppModLoader/app/types/ISwarmLimitRect.h>
#include <Il2CppModLoader/app/types/ISwarmer.h>
#include <Il2CppModLoader/app/types/ITestNotifier.h>
#include <Il2CppModLoader/app/types/InputData.h>
#include <Il2CppModLoader/app/types/Int2.h>
#include <Il2CppModLoader/app/types/LegacyMaterialColorGradientAnimator.h>
#include <Il2CppModLoader/app/types/LegacyMaterialColorGradientAnimator_RendererData.h>
#include <Il2CppModLoader/app/types/LogCallbackData.h>
#include <Il2CppModLoader/app/types/MoonSwarmer.h>
#include <Il2CppModLoader/app/types/PetrifiedOwlRootMotionTest_c.h>
#include <Il2CppModLoader/app/types/Point_1.h>
#include <Il2CppModLoader/app/types/RaceGetReadyState.h>
#include <Il2CppModLoader/app/types/RaceIdleState.h>
#include <Il2CppModLoader/app/types/RaceLeaderboardState.h>
#include <Il2CppModLoader/app/types/RacePrepareState.h>
#include <Il2CppModLoader/app/types/RacePrepareState_ShowFlythroughUi_d_9.h>
#include <Il2CppModLoader/app/types/RaceRestoreCheckpointState.h>
#include <Il2CppModLoader/app/types/RaceRestoreCheckpointState_c.h>
#include <Il2CppModLoader/app/types/RaceRunState.h>
#include <Il2CppModLoader/app/types/RaceSpectateState.h>
#include <Il2CppModLoader/app/types/RaceStateMachineContext_OfflineRaceMetaData.h>
#include <Il2CppModLoader/app/types/RaceStateMachineContext_OfflineRaceMetaData_Position.h>
#include <Il2CppModLoader/app/types/RaceStateMachineContext_OfflineRaceMetaData_WaypointRect.h>
#include <Il2CppModLoader/app/types/RaceStateMachineContext_OfflineRaceMetaData_WaypointRect__Array.h>
#include <Il2CppModLoader/app/types/RaceStateMachineContext_Waiter.h>
#include <Il2CppModLoader/app/types/RaceStopState.h>
#include <Il2CppModLoader/app/types/RaceSystem_StartRaceFromMainMenuCoroutine_d_147.h>
#include <Il2CppModLoader/app/types/RecorderData.h>
#include <Il2CppModLoader/app/types/RecorderFrame.h>
#include <Il2CppModLoader/app/types/RecorderInput.h>
#include <Il2CppModLoader/app/types/RecorderMessageData.h>
#include <Il2CppModLoader/app/types/RecorderMessageInputUI_c.h>
#include <Il2CppModLoader/app/types/RecorderPlaybackUI.h>
#include <Il2CppModLoader/app/types/RecorderPlaybackUITimeline.h>
#include <Il2CppModLoader/app/types/RecorderPlaybackUI_Start_d_50.h>
#include <Il2CppModLoader/app/types/RecorderTimelineManager.h>
#include <Il2CppModLoader/app/types/Recorder_1.h>
#include <Il2CppModLoader/app/types/Recorder_RecorderState__Enum.h>
#include <Il2CppModLoader/app/types/Recorder_ResetRecorderAndComponents_d_59.h>
#include <Il2CppModLoader/app/types/Recorder_c.h>
#include <Il2CppModLoader/app/types/RenderTarget.h>
#include <Il2CppModLoader/app/types/RenderTargetDescriptor.h>
#include <Il2CppModLoader/app/types/ReplayValidatorData.h>
#include <Il2CppModLoader/app/types/Segment_1.h>
#include <Il2CppModLoader/app/types/ShardTraderPlaceholder_ConditionalStockList.h>
#include <Il2CppModLoader/app/types/SkillTreeLaneLogic.h>
#include <Il2CppModLoader/app/types/SkillTreeLaneLogic_c.h>
#include <Il2CppModLoader/app/types/SkillTreeManager.h>
#include <Il2CppModLoader/app/types/SliceExecutionStats.h>
#include <Il2CppModLoader/app/types/SoundMessage.h>
#include <Il2CppModLoader/app/types/TentacleEnemy_DyingState.h>
#include <Il2CppModLoader/app/types/TentacleEnemy_HeadRecoilData.h>
#include <Il2CppModLoader/app/types/TentacleEnemy_HoldingOriState.h>
#include <Il2CppModLoader/app/types/TentacleEnemy_IdleState.h>
#include <Il2CppModLoader/app/types/TentacleEnemy_Joint.h>
#include <Il2CppModLoader/app/types/TentacleEnemy_LookAtOriState.h>
#include <Il2CppModLoader/app/types/TentacleEnemy_MeleeAttackState.h>
#include <Il2CppModLoader/app/types/TentacleEnemy_SpitAttackState.h>
#include <Il2CppModLoader/app/types/TentacleEnemy_StatesHolder.h>
#include <Il2CppModLoader/app/types/TentacleEnemy_StuckInGroundState.h>
#include <Il2CppModLoader/app/types/TentacleEnemy_StunState.h>
#include <Il2CppModLoader/app/types/TentacleEnemy_TentacleState.h>
#include <Il2CppModLoader/app/types/TentacleEnemy_WiggleData.h>
#include <Il2CppModLoader/app/types/TentacleHead_c.h>
#include <Il2CppModLoader/app/types/TentacleJoint_c.h>
#include <Il2CppModLoader/app/types/TestTagHelper_TestTypeTag__Enum.h>
#include <Il2CppModLoader/app/types/TextBoxMessage_States.h>
#include <Il2CppModLoader/app/types/TextBoxMessage_c.h>
#include <Il2CppModLoader/app/types/TextBoxMessage_c_DisplayClass41_0.h>
#include <Il2CppModLoader/app/types/TextBox__Array.h>
#include <Il2CppModLoader/app/types/TimesliceJobTracker.h>
#include <Il2CppModLoader/app/types/TimesliceJobTracker_TimesliceJobSample.h>
#include <Il2CppModLoader/app/types/TrailerShotAutomation.h>
#include <Il2CppModLoader/app/types/TrailerShotAutomation_c.h>
#include <Il2CppModLoader/app/types/TransformRecordable.h>
#include <Il2CppModLoader/app/types/TransformRecorderData.h>
#include <Il2CppModLoader/app/types/TransformRecorderData_Data.h>
#include <Il2CppModLoader/app/types/VerletStructure.h>
#include <Il2CppModLoader/app/types/VerletStructure_VerletStructureState.h>
#include <Il2CppModLoader/app/types/VerletStructure_VerletStructureState__Array.h>
#include <Il2CppModLoader/app/types/XboxControllerRenderer_Button__Enum.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceGetReadyState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RaceGetReadyState__Class** type_info = (::app::RaceGetReadyState__Class**)(modloader::win::memory::resolve_rva(0x04764C78));
    }
    namespace RaceIdleState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RaceIdleState__Class** type_info = (::app::RaceIdleState__Class**)(modloader::win::memory::resolve_rva(0x047748C8));
    }
    namespace RaceRestoreCheckpointState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RaceRestoreCheckpointState__Class** type_info = (::app::RaceRestoreCheckpointState__Class**)(modloader::win::memory::resolve_rva(0x04722A50));
    }
    namespace RaceStateMachineContext_Waiter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RaceStateMachineContext_Waiter__Class** type_info = (::app::RaceStateMachineContext_Waiter__Class**)(modloader::win::memory::resolve_rva(0x0472E908));
    }
    namespace RaceRestoreCheckpointState_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RaceRestoreCheckpointState_c__Class** type_info = (::app::RaceRestoreCheckpointState_c__Class**)(modloader::win::memory::resolve_rva(0x04791A88));
    }
    namespace RaceLeaderboardState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RaceLeaderboardState__Class** type_info = (::app::RaceLeaderboardState__Class**)(modloader::win::memory::resolve_rva(0x04794A90));
    }
    namespace RacePrepareState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RacePrepareState__Class** type_info = (::app::RacePrepareState__Class**)(modloader::win::memory::resolve_rva(0x0476A100));
    }
    namespace RacePrepareState_ShowFlythroughUi_d_9 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RacePrepareState_ShowFlythroughUi_d_9__Class** type_info = (::app::RacePrepareState_ShowFlythroughUi_d_9__Class**)(modloader::win::memory::resolve_rva(0x04722458));
    }
    namespace RaceRunState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RaceRunState__Class** type_info = (::app::RaceRunState__Class**)(modloader::win::memory::resolve_rva(0x04786A18));
    }
    namespace RaceSpectateState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RaceSpectateState__Class** type_info = (::app::RaceSpectateState__Class**)(modloader::win::memory::resolve_rva(0x04770B48));
    }
    namespace RaceStateMachineContext_OfflineRaceMetaData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RaceStateMachineContext_OfflineRaceMetaData__Class** type_info = (::app::RaceStateMachineContext_OfflineRaceMetaData__Class**)(modloader::win::memory::resolve_rva(0x04776280));
    }
    namespace RaceStateMachineContext_OfflineRaceMetaData_WaypointRect {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RaceStateMachineContext_OfflineRaceMetaData_WaypointRect__Class** type_info = (::app::RaceStateMachineContext_OfflineRaceMetaData_WaypointRect__Class**)(modloader::win::memory::resolve_rva(0x04766B48));
    }
    namespace RaceStateMachineContext_OfflineRaceMetaData_WaypointRect__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RaceStateMachineContext_OfflineRaceMetaData_WaypointRect__Array__Class** type_info = (::app::RaceStateMachineContext_OfflineRaceMetaData_WaypointRect__Array__Class**)(modloader::win::memory::resolve_rva(0x04771238));
    }
    namespace RaceStateMachineContext_OfflineRaceMetaData_Position {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RaceStateMachineContext_OfflineRaceMetaData_Position__Class** type_info = (::app::RaceStateMachineContext_OfflineRaceMetaData_Position__Class**)(modloader::win::memory::resolve_rva(0x047675C8));
    }
    namespace ReplayValidatorData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ReplayValidatorData__Class** type_info = (::app::ReplayValidatorData__Class**)(modloader::win::memory::resolve_rva(0x047690A8));
    }
    namespace RaceStopState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RaceStopState__Class** type_info = (::app::RaceStopState__Class**)(modloader::win::memory::resolve_rva(0x0476CF38));
    }
    namespace RaceSystem_StartRaceFromMainMenuCoroutine_d_147 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RaceSystem_StartRaceFromMainMenuCoroutine_d_147__Class** type_info = (::app::RaceSystem_StartRaceFromMainMenuCoroutine_d_147__Class**)(modloader::win::memory::resolve_rva(0x047896B0));
    }
    namespace TextBox__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TextBox__Array__Class** type_info = (::app::TextBox__Array__Class**)(modloader::win::memory::resolve_rva(0x04783650));
    }
    namespace AsyncRenderCapture {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AsyncRenderCapture__Class** type_info = (::app::AsyncRenderCapture__Class**)(modloader::win::memory::resolve_rva(0x0472DAA0));
    }
    namespace RenderTargetDescriptor {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RenderTargetDescriptor__Class** type_info = (::app::RenderTargetDescriptor__Class**)(modloader::win::memory::resolve_rva(0x04774618));
    }
    namespace Int2 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Int2__Class** type_info = (::app::Int2__Class**)(modloader::win::memory::resolve_rva(0x04722550));
    }
    namespace RenderTarget {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RenderTarget__Class** type_info = (::app::RenderTarget__Class**)(modloader::win::memory::resolve_rva(0x047694F0));
    }
    namespace AsyncRenderCapture_c_DisplayClass17_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AsyncRenderCapture_c_DisplayClass17_0__Class** type_info = (::app::AsyncRenderCapture_c_DisplayClass17_0__Class**)(modloader::win::memory::resolve_rva(0x04767A88));
    }
    namespace BuildData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BuildData__Class** type_info = (::app::BuildData__Class**)(modloader::win::memory::resolve_rva(0x0470C9A8));
    }
    namespace FfmpegCommandLineBuilder {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FfmpegCommandLineBuilder__Class** type_info = (::app::FfmpegCommandLineBuilder__Class**)(modloader::win::memory::resolve_rva(0x0470E720));
    }
    namespace FfmpegStreamer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FfmpegStreamer__Class** type_info = (::app::FfmpegStreamer__Class**)(modloader::win::memory::resolve_rva(0x04705FD8));
    }
    namespace AnalogueInputData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AnalogueInputData__Class** type_info = (::app::AnalogueInputData__Class**)(modloader::win::memory::resolve_rva(0x0477CAB8));
    }
    namespace CursorInputData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CursorInputData__Class** type_info = (::app::CursorInputData__Class**)(modloader::win::memory::resolve_rva(0x04730F08));
    }
    namespace InputData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InputData__Class** type_info = (::app::InputData__Class**)(modloader::win::memory::resolve_rva(0x0470BF30));
    }
    namespace LogCallbackData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LogCallbackData__Class** type_info = (::app::LogCallbackData__Class**)(modloader::win::memory::resolve_rva(0x0478D908));
    }
    namespace AbilitiesData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AbilitiesData__Class** type_info = (::app::AbilitiesData__Class**)(modloader::win::memory::resolve_rva(0x0470DBF8));
    }
    namespace AbilitiesPlugin_FieldInfoCollection {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AbilitiesPlugin_FieldInfoCollection__Class** type_info = (::app::AbilitiesPlugin_FieldInfoCollection__Class**)(modloader::win::memory::resolve_rva(0x047854F0));
    }
    namespace RecorderData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RecorderData__Class** type_info = (::app::RecorderData__Class**)(modloader::win::memory::resolve_rva(0x047133B0));
    }
    namespace RecorderFrame {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RecorderFrame__Class** type_info = (::app::RecorderFrame__Class**)(modloader::win::memory::resolve_rva(0x047331A8));
    }
    namespace CameraData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CameraData__Class** type_info = (::app::CameraData__Class**)(modloader::win::memory::resolve_rva(0x0478E0B8));
    }
    namespace CharacterData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CharacterData__Class** type_info = (::app::CharacterData__Class**)(modloader::win::memory::resolve_rva(0x0476FF30));
    }
    namespace CheckpointData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CheckpointData__Class** type_info = (::app::CheckpointData__Class**)(modloader::win::memory::resolve_rva(0x04789C90));
    }
    namespace Recorder_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Recorder_1__Class** type_info = (::app::Recorder_1__Class**)(modloader::win::memory::resolve_rva(0x0472F278));
    }
    namespace Recorder_RecorderState__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Recorder_RecorderState__Enum__Class** type_info = (::app::Recorder_RecorderState__Enum__Class**)(modloader::win::memory::resolve_rva(0x0473F038));
    }
    namespace IRecorderPlugin {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IRecorderPlugin__Class** type_info = (::app::IRecorderPlugin__Class**)(modloader::win::memory::resolve_rva(0x04740C58));
    }
    namespace DeathsData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DeathsData__Class** type_info = (::app::DeathsData__Class**)(modloader::win::memory::resolve_rva(0x04761638));
    }
    namespace EntityData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EntityData__Class** type_info = (::app::EntityData__Class**)(modloader::win::memory::resolve_rva(0x04749A58));
    }
    namespace EntityData_EntityPosition {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EntityData_EntityPosition__Class** type_info = (::app::EntityData_EntityPosition__Class**)(modloader::win::memory::resolve_rva(0x04761338));
    }
    namespace RecorderMessageData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RecorderMessageData__Class** type_info = (::app::RecorderMessageData__Class**)(modloader::win::memory::resolve_rva(0x0472D2A8));
    }
    namespace RecorderMessageInputUI_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RecorderMessageInputUI_c__Class** type_info = (::app::RecorderMessageInputUI_c__Class**)(modloader::win::memory::resolve_rva(0x0475ABA0));
    }
    namespace TransformRecordable {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TransformRecordable__Class** type_info = (::app::TransformRecordable__Class**)(modloader::win::memory::resolve_rva(0x04734828));
    }
    namespace TransformRecorderData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TransformRecorderData__Class** type_info = (::app::TransformRecorderData__Class**)(modloader::win::memory::resolve_rva(0x047793B0));
    }
    namespace TransformRecorderData_Data {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TransformRecorderData_Data__Class** type_info = (::app::TransformRecorderData_Data__Class**)(modloader::win::memory::resolve_rva(0x04771A40));
    }
    namespace Recorder_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Recorder_c__Class** type_info = (::app::Recorder_c__Class**)(modloader::win::memory::resolve_rva(0x0471EE60));
    }
    namespace Recorder_ResetRecorderAndComponents_d_59 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Recorder_ResetRecorderAndComponents_d_59__Class** type_info = (::app::Recorder_ResetRecorderAndComponents_d_59__Class**)(modloader::win::memory::resolve_rva(0x0472AC30));
    }
    namespace RecorderInput {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RecorderInput__Class** type_info = (::app::RecorderInput__Class**)(modloader::win::memory::resolve_rva(0x04733918));
    }
    namespace RecorderPlaybackUI {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RecorderPlaybackUI__Class** type_info = (::app::RecorderPlaybackUI__Class**)(modloader::win::memory::resolve_rva(0x0477CB08));
    }
    namespace RecorderPlaybackUITimeline {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RecorderPlaybackUITimeline__Class** type_info = (::app::RecorderPlaybackUITimeline__Class**)(modloader::win::memory::resolve_rva(0x0470BAA8));
    }
    namespace RecorderPlaybackUI_Start_d_50 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RecorderPlaybackUI_Start_d_50__Class** type_info = (::app::RecorderPlaybackUI_Start_d_50__Class**)(modloader::win::memory::resolve_rva(0x0472AF58));
    }
    namespace RecorderTimelineManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RecorderTimelineManager__Class** type_info = (::app::RecorderTimelineManager__Class**)(modloader::win::memory::resolve_rva(0x0472C910));
    }
    namespace XboxControllerRenderer_Button__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XboxControllerRenderer_Button__Enum__Class** type_info = (::app::XboxControllerRenderer_Button__Enum__Class**)(modloader::win::memory::resolve_rva(0x0478A9F8));
    }
    namespace Point_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Point_1__Class** type_info = (::app::Point_1__Class**)(modloader::win::memory::resolve_rva(0x04783010));
    }
    namespace PetrifiedOwlRootMotionTest_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PetrifiedOwlRootMotionTest_c__Class** type_info = (::app::PetrifiedOwlRootMotionTest_c__Class**)(modloader::win::memory::resolve_rva(0x04762B40));
    }
    namespace ShardTraderPlaceholder_ConditionalStockList {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShardTraderPlaceholder_ConditionalStockList__Class** type_info = (::app::ShardTraderPlaceholder_ConditionalStockList__Class**)(modloader::win::memory::resolve_rva(0x0477D7A8));
    }
    namespace SkillTreeLaneLogic {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SkillTreeLaneLogic__Class** type_info = (::app::SkillTreeLaneLogic__Class**)(modloader::win::memory::resolve_rva(0x04785B50));
    }
    namespace SkillTreeLaneLogic_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SkillTreeLaneLogic_c__Class** type_info = (::app::SkillTreeLaneLogic_c__Class**)(modloader::win::memory::resolve_rva(0x047923F0));
    }
    namespace SkillTreeManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SkillTreeManager__Class** type_info = (::app::SkillTreeManager__Class**)(modloader::win::memory::resolve_rva(0x0475CD78));
    }
    namespace SoundMessage {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SoundMessage__Class** type_info = (::app::SoundMessage__Class**)(modloader::win::memory::resolve_rva(0x04784310));
    }
    namespace Segment_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Segment_1__Class** type_info = (::app::Segment_1__Class**)(modloader::win::memory::resolve_rva(0x047284F8));
    }
    namespace GroundSegment {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GroundSegment__Class** type_info = (::app::GroundSegment__Class**)(modloader::win::memory::resolve_rva(0x047933D8));
    }
    namespace GroundSegment_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GroundSegment_c__Class** type_info = (::app::GroundSegment_c__Class**)(modloader::win::memory::resolve_rva(0x047955C8));
    }
    namespace TentacleEnemy_StatesHolder {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TentacleEnemy_StatesHolder__Class** type_info = (::app::TentacleEnemy_StatesHolder__Class**)(modloader::win::memory::resolve_rva(0x04729230));
    }
    namespace TentacleEnemy_TentacleState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TentacleEnemy_TentacleState__Class** type_info = (::app::TentacleEnemy_TentacleState__Class**)(modloader::win::memory::resolve_rva(0x04738C30));
    }
    namespace TentacleEnemy_IdleState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TentacleEnemy_IdleState__Class** type_info = (::app::TentacleEnemy_IdleState__Class**)(modloader::win::memory::resolve_rva(0x0472A2D0));
    }
    namespace TentacleEnemy_WiggleData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TentacleEnemy_WiggleData__Class** type_info = (::app::TentacleEnemy_WiggleData__Class**)(modloader::win::memory::resolve_rva(0x0471E9D8));
    }
    namespace TentacleEnemy_LookAtOriState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TentacleEnemy_LookAtOriState__Class** type_info = (::app::TentacleEnemy_LookAtOriState__Class**)(modloader::win::memory::resolve_rva(0x0477B018));
    }
    namespace TentacleEnemy_MeleeAttackState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TentacleEnemy_MeleeAttackState__Class** type_info = (::app::TentacleEnemy_MeleeAttackState__Class**)(modloader::win::memory::resolve_rva(0x04777E10));
    }
    namespace TentacleEnemy_SpitAttackState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TentacleEnemy_SpitAttackState__Class** type_info = (::app::TentacleEnemy_SpitAttackState__Class**)(modloader::win::memory::resolve_rva(0x04721E48));
    }
    namespace TentacleEnemy_StuckInGroundState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TentacleEnemy_StuckInGroundState__Class** type_info = (::app::TentacleEnemy_StuckInGroundState__Class**)(modloader::win::memory::resolve_rva(0x047775D8));
    }
    namespace TentacleEnemy_HoldingOriState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TentacleEnemy_HoldingOriState__Class** type_info = (::app::TentacleEnemy_HoldingOriState__Class**)(modloader::win::memory::resolve_rva(0x04732CE0));
    }
    namespace ILeachable {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ILeachable__Class** type_info = (::app::ILeachable__Class**)(modloader::win::memory::resolve_rva(0x0473D450));
    }
    namespace TentacleEnemy_DyingState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TentacleEnemy_DyingState__Class** type_info = (::app::TentacleEnemy_DyingState__Class**)(modloader::win::memory::resolve_rva(0x047202C8));
    }
    namespace TentacleEnemy_StunState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TentacleEnemy_StunState__Class** type_info = (::app::TentacleEnemy_StunState__Class**)(modloader::win::memory::resolve_rva(0x04702D88));
    }
    namespace LegacyMaterialColorGradientAnimator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LegacyMaterialColorGradientAnimator__Class** type_info = (::app::LegacyMaterialColorGradientAnimator__Class**)(modloader::win::memory::resolve_rva(0x04797018));
    }
    namespace LegacyMaterialColorGradientAnimator_RendererData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LegacyMaterialColorGradientAnimator_RendererData__Class** type_info = (::app::LegacyMaterialColorGradientAnimator_RendererData__Class**)(modloader::win::memory::resolve_rva(0x0478C2C8));
    }
    namespace TentacleEnemy_Joint {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TentacleEnemy_Joint__Class** type_info = (::app::TentacleEnemy_Joint__Class**)(modloader::win::memory::resolve_rva(0x047867D0));
    }
    namespace TentacleEnemy_HeadRecoilData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TentacleEnemy_HeadRecoilData__Class** type_info = (::app::TentacleEnemy_HeadRecoilData__Class**)(modloader::win::memory::resolve_rva(0x04700AD0));
    }
    namespace TentacleHead_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TentacleHead_c__Class** type_info = (::app::TentacleHead_c__Class**)(modloader::win::memory::resolve_rva(0x04786D40));
    }
    namespace TentacleJoint_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TentacleJoint_c__Class** type_info = (::app::TentacleJoint_c__Class**)(modloader::win::memory::resolve_rva(0x0472E720));
    }
    namespace TextBoxMessage_States {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TextBoxMessage_States__Class** type_info = (::app::TextBoxMessage_States__Class**)(modloader::win::memory::resolve_rva(0x0475E468));
    }
    namespace TextBoxMessage_c_DisplayClass41_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TextBoxMessage_c_DisplayClass41_0__Class** type_info = (::app::TextBoxMessage_c_DisplayClass41_0__Class**)(modloader::win::memory::resolve_rva(0x04710648));
    }
    namespace TextBoxMessage_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TextBoxMessage_c__Class** type_info = (::app::TextBoxMessage_c__Class**)(modloader::win::memory::resolve_rva(0x0471E538));
    }
    namespace TimesliceJobTracker {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TimesliceJobTracker__Class** type_info = (::app::TimesliceJobTracker__Class**)(modloader::win::memory::resolve_rva(0x0470E8F8));
    }
    namespace TimesliceJobTracker_TimesliceJobSample {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TimesliceJobTracker_TimesliceJobSample__Class** type_info = (::app::TimesliceJobTracker_TimesliceJobSample__Class**)(modloader::win::memory::resolve_rva(0x047076C8));
    }
    namespace TestTagHelper_TestTypeTag__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TestTagHelper_TestTypeTag__Enum__Class** type_info = (::app::TestTagHelper_TestTypeTag__Enum__Class**)(modloader::win::memory::resolve_rva(0x04744700));
    }
    namespace SliceExecutionStats {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SliceExecutionStats__Class** type_info = (::app::SliceExecutionStats__Class**)(modloader::win::memory::resolve_rva(0x047286C8));
    }
    namespace ITestNotifier {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ITestNotifier__Class** type_info = (::app::ITestNotifier__Class**)(modloader::win::memory::resolve_rva(0x04795C88));
    }
    namespace TrailerShotAutomation {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TrailerShotAutomation__Class** type_info = (::app::TrailerShotAutomation__Class**)(modloader::win::memory::resolve_rva(0x04753460));
    }
    namespace TrailerShotAutomation_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TrailerShotAutomation_c__Class** type_info = (::app::TrailerShotAutomation_c__Class**)(modloader::win::memory::resolve_rva(0x04770788));
    }
    namespace MoonSwarmer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonSwarmer__Class** type_info = (::app::MoonSwarmer__Class**)(modloader::win::memory::resolve_rva(0x04732B68));
    }
    namespace ISwarmLimitRect {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ISwarmLimitRect__Class** type_info = (::app::ISwarmLimitRect__Class**)(modloader::win::memory::resolve_rva(0x04756470));
    }
    namespace ISwarmer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ISwarmer__Class** type_info = (::app::ISwarmer__Class**)(modloader::win::memory::resolve_rva(0x0471DAE0));
    }
    namespace VerletStructure {
        IL2CPP_MODLOADER_DLLEXPORT ::app::VerletStructure__Class** type_info = (::app::VerletStructure__Class**)(modloader::win::memory::resolve_rva(0x04760CC8));
    }
    namespace VerletStructure_VerletStructureState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::VerletStructure_VerletStructureState__Class** type_info = (::app::VerletStructure_VerletStructureState__Class**)(modloader::win::memory::resolve_rva(0x0470A5C8));
    }
    namespace VerletStructure_VerletStructureState__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::VerletStructure_VerletStructureState__Array__Class** type_info = (::app::VerletStructure_VerletStructureState__Array__Class**)(modloader::win::memory::resolve_rva(0x0475D430));
    }
} // namespace app::classes::types
