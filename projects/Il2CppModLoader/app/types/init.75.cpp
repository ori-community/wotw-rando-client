#include <Il2CppModLoader/app/types/AmbienceListener.h>
#include <Il2CppModLoader/app/types/AmbienceZone_WiseAuxSend.h>
#include <Il2CppModLoader/app/types/Ambience_AmbienceTrack.h>
#include <Il2CppModLoader/app/types/Ambience_Layer_Track.h>
#include <Il2CppModLoader/app/types/AmbientSoundZone.h>
#include <Il2CppModLoader/app/types/AnimatingFloat.h>
#include <Il2CppModLoader/app/types/AudioStateZone.h>
#include <Il2CppModLoader/app/types/AxisButtonInput.h>
#include <Il2CppModLoader/app/types/Axis__Enum_1.h>
#include <Il2CppModLoader/app/types/BuilderNPC_c.h>
#include <Il2CppModLoader/app/types/Button__Enum.h>
#include <Il2CppModLoader/app/types/CameraFrustumOptimizer.h>
#include <Il2CppModLoader/app/types/CameraFrustumOptimizer_EarlyZActivation.h>
#include <Il2CppModLoader/app/types/CarryableRigidBody.h>
#include <Il2CppModLoader/app/types/CartographerNPC.h>
#include <Il2CppModLoader/app/types/CharacterPlatformMovementManager.h>
#include <Il2CppModLoader/app/types/CharacterPlatformMovementManager_LateFrameUpdater.h>
#include <Il2CppModLoader/app/types/CharacterPlatformMovement_MoveSeinToPositionSmoothly_d_224.h>
#include <Il2CppModLoader/app/types/CharacterPlatformMovement__Array.h>
#include <Il2CppModLoader/app/types/CharacterPlatformMovement_c.h>
#include <Il2CppModLoader/app/types/CombinedMessageProvider_GetMessages_d_3.h>
#include <Il2CppModLoader/app/types/ControllerButtonInput.h>
#include <Il2CppModLoader/app/types/DisableGameObjectWhenOutOfFrustrum.h>
#include <Il2CppModLoader/app/types/EntityPlaceholder_c.h>
#include <Il2CppModLoader/app/types/ForceLanguageTranslatedMessageProvider_GetMessages_d_1.h>
#include <Il2CppModLoader/app/types/GlobalPlaceholderCountData_Tally__Array.h>
#include <Il2CppModLoader/app/types/IFrustumEnabled.h>
#include <Il2CppModLoader/app/types/IFrustumOptimizable.h>
#include <Il2CppModLoader/app/types/IPrewarmOperation.h>
#include <Il2CppModLoader/app/types/IVideoPlayer.h>
#include <Il2CppModLoader/app/types/InstantiateUtility.h>
#include <Il2CppModLoader/app/types/InstantiateUtility_c_DisplayClass30_0.h>
#include <Il2CppModLoader/app/types/InstantiationRecycleHelper_c_DisplayClass4_0.h>
#include <Il2CppModLoader/app/types/InstantiationRecycleHelper_c_DisplayClass5_0.h>
#include <Il2CppModLoader/app/types/LightSource.h>
#include <Il2CppModLoader/app/types/LightTorchZone.h>
#include <Il2CppModLoader/app/types/List_1_SoundZoneProcessor_Job_PositionZoneEvent___Array.h>
#include <Il2CppModLoader/app/types/List_1_SoundZoneProcessor_Job_PositionZoneEvent___Array__Array.h>
#include <Il2CppModLoader/app/types/LoadingBootstrap.h>
#include <Il2CppModLoader/app/types/LoadingBootstrap_OnEndOfFrame_d_34.h>
#include <Il2CppModLoader/app/types/LoadingBootstrap_Start_d_25.h>
#include <Il2CppModLoader/app/types/LoadingBootstrap_c.h>
#include <Il2CppModLoader/app/types/LoadingBootstrap_c_DisplayClass23_0.h>
#include <Il2CppModLoader/app/types/LoadingBootstrap_c_DisplayClass28_0.h>
#include <Il2CppModLoader/app/types/LoadingBootstrap_c_DisplayClass29_0.h>
#include <Il2CppModLoader/app/types/LoadingBootstrap_c_DisplayClass37_0.h>
#include <Il2CppModLoader/app/types/MaterialVFXManager.h>
#include <Il2CppModLoader/app/types/MenuTabManager.h>
#include <Il2CppModLoader/app/types/MenuTabManager_c.h>
#include <Il2CppModLoader/app/types/MeshRendererFrustrumOptimiser.h>
#include <Il2CppModLoader/app/types/MessageBox_c.h>
#include <Il2CppModLoader/app/types/MusicListener.h>
#include <Il2CppModLoader/app/types/OnDelegate.h>
#include <Il2CppModLoader/app/types/PerspectiveRotationSystem.h>
#include <Il2CppModLoader/app/types/PlatformMovementPortalVisitor.h>
#include <Il2CppModLoader/app/types/PlatformMovementPortalVisitor_c.h>
#include <Il2CppModLoader/app/types/PlatformMovement_c.h>
#include <Il2CppModLoader/app/types/PositionSyncTask__Array__Array.h>
#include <Il2CppModLoader/app/types/PrewarmOperationSlot__Enum.h>
#include <Il2CppModLoader/app/types/RECT.h>
#include <Il2CppModLoader/app/types/RigidbodyInteractionController.h>
#include <Il2CppModLoader/app/types/RigidbodyInteractionController_SoundInteractionInfo.h>
#include <Il2CppModLoader/app/types/RollingMovement_c.h>
#include <Il2CppModLoader/app/types/SaveInTheDarkZone.h>
#include <Il2CppModLoader/app/types/SeinDoubleJumpPuppet_Event__Enum.h>
#include <Il2CppModLoader/app/types/SeinEventsDebugger_Entry.h>
#include <Il2CppModLoader/app/types/SeinEventsDebugger_c.h>
#include <Il2CppModLoader/app/types/SeinIdlePuppet_c.h>
#include <Il2CppModLoader/app/types/SeinPlatformMovement.h>
#include <Il2CppModLoader/app/types/SeinWallJumpPuppet_Event__Enum.h>
#include <Il2CppModLoader/app/types/ShardTraderNPC.h>
#include <Il2CppModLoader/app/types/SoundCompositionPlayer_c_DisplayClass12_0.h>
#include <Il2CppModLoader/app/types/SoundCompositionTransition_FadeInformation.h>
#include <Il2CppModLoader/app/types/SoundZoneProcessor.h>
#include <Il2CppModLoader/app/types/SoundZoneProcessor_Job.h>
#include <Il2CppModLoader/app/types/SoundZoneProcessor_Job_PositionZoneEvent.h>
#include <Il2CppModLoader/app/types/SpiritLightCapsuleVisualAffector.h>
#include <Il2CppModLoader/app/types/SpiritLightDarknessZone.h>
#include <Il2CppModLoader/app/types/SpiritLightVisualAffectorManager.h>
#include <Il2CppModLoader/app/types/TextBoxLine_1.h>
#include <Il2CppModLoader/app/types/ThreadPriority__Enum_1__Array.h>
#include <Il2CppModLoader/app/types/TimelineSequenceLabel.h>
#include <Il2CppModLoader/app/types/Timer_2.h>
#include <Il2CppModLoader/app/types/TranslatedMessageProvider_GetMessages_d_2.h>
#include <Il2CppModLoader/app/types/UWPVideoPlayer.h>
#include <Il2CppModLoader/app/types/UberPoolGroup.h>
#include <Il2CppModLoader/app/types/UberPoolGroupWarmer.h>
#include <Il2CppModLoader/app/types/UberPoolGroupWarmer_PrewarmItem.h>
#include <Il2CppModLoader/app/types/UberPoolGroupWarmer_PrewarmItem__Array.h>
#include <Il2CppModLoader/app/types/UberPoolItem.h>
#include <Il2CppModLoader/app/types/UberPoolManager.h>
#include <Il2CppModLoader/app/types/UberPoolManager_ObjectTracking.h>
#include <Il2CppModLoader/app/types/WispMessageProvider_GetMessages_d_1.h>
#include <Il2CppModLoader/app/types/WotwWwiseBootstrapConfiguration_c_DisplayClass7_0.h>
#include <Il2CppModLoader/app/types/XboxOneController_Axis__Enum.h>
#include <Il2CppModLoader/app/types/XboxOneController_Button__Enum.h>
#include <Il2CppModLoader/app/types/ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array.h>
#include <Il2CppModLoader/app/types/ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array.h>
#include <Il2CppModLoader/app/types/ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array.h>
#include <Il2CppModLoader/app/types/ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
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
    namespace IPrewarmOperation {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IPrewarmOperation__Class** type_info = (::app::IPrewarmOperation__Class**)(modloader::win::memory::resolve_rva(0x0473BB40));
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
    namespace IVideoPlayer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVideoPlayer__Class** type_info = (::app::IVideoPlayer__Class**)(modloader::win::memory::resolve_rva(0x04717288));
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
    namespace IFrustumOptimizable {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IFrustumOptimizable__Class** type_info = (::app::IFrustumOptimizable__Class**)(modloader::win::memory::resolve_rva(0x04772278));
    }
    namespace IFrustumEnabled {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IFrustumEnabled__Class** type_info = (::app::IFrustumEnabled__Class**)(modloader::win::memory::resolve_rva(0x0472BBB0));
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
} // namespace app::classes::types
