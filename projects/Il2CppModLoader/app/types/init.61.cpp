#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/SceneSettingsComponent.h>
#include <Il2CppModLoader/app/types/VignettingSettings.h>
#include <Il2CppModLoader/app/types/NoiseSettings.h>
#include <Il2CppModLoader/app/types/ContrastSettings.h>
#include <Il2CppModLoader/app/types/DesaturationSettings.h>
#include <Il2CppModLoader/app/types/ColorCorrectionSettings.h>
#include <Il2CppModLoader/app/types/BloomSettings.h>
#include <Il2CppModLoader/app/types/TwirlSettings.h>
#include <Il2CppModLoader/app/types/EmissiveSettings.h>
#include <Il2CppModLoader/app/types/LightInfluenceSettings.h>
#include <Il2CppModLoader/app/types/LightInfluence.h>
#include <Il2CppModLoader/app/types/LightPriority_Layer__Enum__Array.h>
#include <Il2CppModLoader/app/types/ColorVariationSettings.h>
#include <Il2CppModLoader/app/types/PlayerSettingsPerScene.h>
#include <Il2CppModLoader/app/types/RenderingSettingsPerScene.h>
#include <Il2CppModLoader/app/types/CameraSettings.h>
#include <Il2CppModLoader/app/types/BlendGradientColorsJob.h>
#include <Il2CppModLoader/app/types/CameraSettings_AnimateJobData.h>
#include <Il2CppModLoader/app/types/DepthOfFieldController.h>
#include <Il2CppModLoader/app/types/SliceRenderSettings.h>
#include <Il2CppModLoader/app/types/SliceRenderSettings_Slice.h>
#include <Il2CppModLoader/app/types/SliceRenderSettings_Slice__Array.h>
#include <Il2CppModLoader/app/types/TurbulenceOverride.h>
#include <Il2CppModLoader/app/types/SceneSettings.h>
#include <Il2CppModLoader/app/types/MixerGroupSettings.h>
#include <Il2CppModLoader/app/types/PhysicsUpdateHandlerManager.h>
#include <Il2CppModLoader/app/types/IPhysicsUpdateHandler.h>
#include <Il2CppModLoader/app/types/IJobSystem.h>
#include <Il2CppModLoader/app/types/IJobSystem__Array.h>
#include <Il2CppModLoader/app/types/ITimeSlicedPostEnableObserver.h>
#include <Il2CppModLoader/app/types/ITimeSlicedPreDisableObserver.h>
#include <Il2CppModLoader/app/types/EntityPlaceholder_BaseEntityPlaceholderSettings.h>
#include <Il2CppModLoader/app/types/AllowedEntityArea.h>
#include <Il2CppModLoader/app/types/IPooled.h>
#include <Il2CppModLoader/app/types/IPooled__Array.h>
#include <Il2CppModLoader/app/types/AxisAlignedBox.h>
#include <Il2CppModLoader/app/types/EntityAvatar.h>
#include <Il2CppModLoader/app/types/EntitySpatialData.h>
#include <Il2CppModLoader/app/types/DropLootSettings.h>
#include <Il2CppModLoader/app/types/DamageDealer__Array.h>
#include <Il2CppModLoader/app/types/EntityContext.h>
#include <Il2CppModLoader/app/types/IEntityOwned.h>
#include <Il2CppModLoader/app/types/IEntityEventListener.h>
#include <Il2CppModLoader/app/types/EntityReactionBehaviour.h>
#include <Il2CppModLoader/app/types/IEntityBehaviour.h>
#include <Il2CppModLoader/app/types/EntityBehaviourDebugData.h>
#include <Il2CppModLoader/app/types/EntityDamageEvent.h>
#include <Il2CppModLoader/app/types/EntityReactionBehaviour__Array.h>
#include <Il2CppModLoader/app/types/EntityReactions_ReactionInterruptionSuspensionEntry.h>
#include <Il2CppModLoader/app/types/EntityCinematicData.h>
#include <Il2CppModLoader/app/types/EntityCinematicTask.h>
#include <Il2CppModLoader/app/types/IEntityLocomotion.h>
#include <Il2CppModLoader/app/types/AudioListenerZoneReference.h>
#include <Il2CppModLoader/app/types/ExampleZoneProcessor.h>
#include <Il2CppModLoader/app/types/SoundListenerReference.h>
#include <Il2CppModLoader/app/types/PositionSyncTask.h>
#include <Il2CppModLoader/app/types/PositionSyncTask__Array.h>
#include <Il2CppModLoader/app/types/ListenerSyncProcessor.h>
#include <Il2CppModLoader/app/types/ListenerSyncProcessor_ListenerSyncTask.h>
#include <Il2CppModLoader/app/types/ListenerSyncProcessor_ListenerSyncTask__Array.h>
#include <Il2CppModLoader/app/types/WwiseSyncProcessor.h>
#include <Il2CppModLoader/app/types/WwiseSyncProcessor_RtpcSyncTask.h>
#include <Il2CppModLoader/app/types/WwiseSyncProcessor_RtpcSyncTask__Array.h>
#include <Il2CppModLoader/app/types/IListenerSyncProcessor.h>
#include <Il2CppModLoader/app/types/UberStateToWwiseData_DesiredConditionUberState.h>
#include <Il2CppModLoader/app/types/UberStateWwiseStateManager.h>
#include <Il2CppModLoader/app/types/UberStateWwiseStateManager_ResetStateData.h>
#include <Il2CppModLoader/app/types/WotwUberStateToWwiseData_WotwUberStateToWWiseEntry.h>
#include <Il2CppModLoader/app/types/WotwUberStateToWwiseData_AbilityRequirementCondition.h>
#include <Il2CppModLoader/app/types/WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Array.h>
#include <Il2CppModLoader/app/types/WwiseIntegration.h>
#include <Il2CppModLoader/app/types/WwiseEventSystem.h>
#include <Il2CppModLoader/app/types/WwiseEventSystem_SoundHandleProtected__Array.h>
#include <Il2CppModLoader/app/types/WwiseGameObjectSystem.h>
#include <Il2CppModLoader/app/types/ArtificialSoundHost__Array.h>
#include <Il2CppModLoader/app/types/WwiseSoundBankSystem.h>
#include <Il2CppModLoader/app/types/WwiseBootstrap.h>
#include <Il2CppModLoader/app/types/WwiseBootstrap_c.h>
#include <Il2CppModLoader/app/types/WwiseBootstrap_c_DisplayClass35_0.h>
#include <Il2CppModLoader/app/types/WwiseEventSystem_c_DisplayClass3_0.h>
#include <Il2CppModLoader/app/types/WwiseEventSystem_c.h>
#include <Il2CppModLoader/app/types/WwiseGameObjectSystem_c.h>
#include <Il2CppModLoader/app/types/CallbackFlags.h>
#include <Il2CppModLoader/app/types/VolumeEffectContainer.h>
#include <Il2CppModLoader/app/types/VolumeEffect.h>
#include <Il2CppModLoader/app/types/VolumeEffectComponent.h>
#include <Il2CppModLoader/app/types/VolumeEffectField.h>
#include <Il2CppModLoader/app/types/VolumeEffectFlags.h>
#include <Il2CppModLoader/app/types/VolumeEffectComponentFlags.h>
#include <Il2CppModLoader/app/types/VolumeEffectFieldFlags.h>
#include <Il2CppModLoader/app/types/VersionInfo.h>
#include <Il2CppModLoader/app/types/VolumeEffectComponent_c_DisplayClass7_0.h>
#include <Il2CppModLoader/app/types/VolumeEffectComponent_c.h>
#include <Il2CppModLoader/app/types/VolumeEffect_c.h>
#include <Il2CppModLoader/app/types/VolumeEffectContainer_c.h>
#include <Il2CppModLoader/app/types/VolumeEffectComponentFlags_c_DisplayClass6_0.h>
#include <Il2CppModLoader/app/types/VolumeEffectComponentFlags_c_DisplayClass7_0.h>
#include <Il2CppModLoader/app/types/VolumeEffectComponentFlags_c.h>
#include <Il2CppModLoader/app/types/VolumeEffectFlags_c_DisplayClass2_0.h>
#include <Il2CppModLoader/app/types/VolumeEffectFlags_c_DisplayClass3_0.h>

namespace app::classes::types {
    namespace SceneSettingsComponent { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneSettingsComponent__Class** type_info = (::app::SceneSettingsComponent__Class**)(modloader::win::memory::resolve_rva(0x0474C0E0)); }
    namespace VignettingSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::VignettingSettings__Class** type_info = (::app::VignettingSettings__Class**)(modloader::win::memory::resolve_rva(0x0477DED0)); }
    namespace NoiseSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::NoiseSettings__Class** type_info = (::app::NoiseSettings__Class**)(modloader::win::memory::resolve_rva(0x04764C38)); }
    namespace ContrastSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::ContrastSettings__Class** type_info = (::app::ContrastSettings__Class**)(modloader::win::memory::resolve_rva(0x04779E10)); }
    namespace DesaturationSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::DesaturationSettings__Class** type_info = (::app::DesaturationSettings__Class**)(modloader::win::memory::resolve_rva(0x047474B0)); }
    namespace ColorCorrectionSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::ColorCorrectionSettings__Class** type_info = (::app::ColorCorrectionSettings__Class**)(modloader::win::memory::resolve_rva(0x04730830)); }
    namespace BloomSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::BloomSettings__Class** type_info = (::app::BloomSettings__Class**)(modloader::win::memory::resolve_rva(0x04724DC0)); }
    namespace TwirlSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::TwirlSettings__Class** type_info = (::app::TwirlSettings__Class**)(modloader::win::memory::resolve_rva(0x0470D478)); }
    namespace EmissiveSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::EmissiveSettings__Class** type_info = (::app::EmissiveSettings__Class**)(modloader::win::memory::resolve_rva(0x04779AA0)); }
    namespace LightInfluenceSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::LightInfluenceSettings__Class** type_info = (::app::LightInfluenceSettings__Class**)(modloader::win::memory::resolve_rva(0x047120D8)); }
    namespace LightInfluence { IL2CPP_MODLOADER_DLLEXPORT ::app::LightInfluence__Class** type_info = (::app::LightInfluence__Class**)(modloader::win::memory::resolve_rva(0x0476AFB8)); }
    namespace LightPriority_Layer__Enum__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::LightPriority_Layer__Enum__Array__Class** type_info = (::app::LightPriority_Layer__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x0474D818)); }
    namespace ColorVariationSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::ColorVariationSettings__Class** type_info = (::app::ColorVariationSettings__Class**)(modloader::win::memory::resolve_rva(0x047601A0)); }
    namespace PlayerSettingsPerScene { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerSettingsPerScene__Class** type_info = (::app::PlayerSettingsPerScene__Class**)(modloader::win::memory::resolve_rva(0x0475F4D0)); }
    namespace RenderingSettingsPerScene { IL2CPP_MODLOADER_DLLEXPORT ::app::RenderingSettingsPerScene__Class** type_info = (::app::RenderingSettingsPerScene__Class**)(modloader::win::memory::resolve_rva(0x0471FEB0)); }
    namespace CameraSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::CameraSettings__Class** type_info = (::app::CameraSettings__Class**)(modloader::win::memory::resolve_rva(0x0476AD78)); }
    namespace BlendGradientColorsJob { IL2CPP_MODLOADER_DLLEXPORT ::app::BlendGradientColorsJob__Class** type_info = (::app::BlendGradientColorsJob__Class**)(modloader::win::memory::resolve_rva(0x04741100)); }
    namespace CameraSettings_AnimateJobData { IL2CPP_MODLOADER_DLLEXPORT ::app::CameraSettings_AnimateJobData__Class** type_info = (::app::CameraSettings_AnimateJobData__Class**)(modloader::win::memory::resolve_rva(0x04763788)); }
    namespace DepthOfFieldController { IL2CPP_MODLOADER_DLLEXPORT ::app::DepthOfFieldController__Class** type_info = (::app::DepthOfFieldController__Class**)(modloader::win::memory::resolve_rva(0x0476E3C8)); }
    namespace SliceRenderSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::SliceRenderSettings__Class** type_info = (::app::SliceRenderSettings__Class**)(modloader::win::memory::resolve_rva(0x04788870)); }
    namespace SliceRenderSettings_Slice { IL2CPP_MODLOADER_DLLEXPORT ::app::SliceRenderSettings_Slice__Class** type_info = (::app::SliceRenderSettings_Slice__Class**)(modloader::win::memory::resolve_rva(0x04776AC0)); }
    namespace SliceRenderSettings_Slice__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::SliceRenderSettings_Slice__Array__Class** type_info = (::app::SliceRenderSettings_Slice__Array__Class**)(modloader::win::memory::resolve_rva(0x04761F10)); }
    namespace TurbulenceOverride { IL2CPP_MODLOADER_DLLEXPORT ::app::TurbulenceOverride__Class** type_info = (::app::TurbulenceOverride__Class**)(modloader::win::memory::resolve_rva(0x04781598)); }
    namespace SceneSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneSettings__Class** type_info = (::app::SceneSettings__Class**)(modloader::win::memory::resolve_rva(0x04761198)); }
    namespace MixerGroupSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::MixerGroupSettings__Class** type_info = (::app::MixerGroupSettings__Class**)(modloader::win::memory::resolve_rva(0x0474A0A0)); }
    namespace PhysicsUpdateHandlerManager { IL2CPP_MODLOADER_DLLEXPORT ::app::PhysicsUpdateHandlerManager__Class** type_info = (::app::PhysicsUpdateHandlerManager__Class**)(modloader::win::memory::resolve_rva(0x047528E0)); }
    namespace IPhysicsUpdateHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::IPhysicsUpdateHandler__Class** type_info = (::app::IPhysicsUpdateHandler__Class**)(modloader::win::memory::resolve_rva(0x0472B5B8)); }
    namespace IJobSystem { IL2CPP_MODLOADER_DLLEXPORT ::app::IJobSystem__Class** type_info = (::app::IJobSystem__Class**)(modloader::win::memory::resolve_rva(0x047221E0)); }
    namespace IJobSystem__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::IJobSystem__Array__Class** type_info = (::app::IJobSystem__Array__Class**)(modloader::win::memory::resolve_rva(0x04705C18)); }
    namespace ITimeSlicedPostEnableObserver { IL2CPP_MODLOADER_DLLEXPORT ::app::ITimeSlicedPostEnableObserver__Class** type_info = (::app::ITimeSlicedPostEnableObserver__Class**)(modloader::win::memory::resolve_rva(0x0473D730)); }
    namespace ITimeSlicedPreDisableObserver { IL2CPP_MODLOADER_DLLEXPORT ::app::ITimeSlicedPreDisableObserver__Class** type_info = (::app::ITimeSlicedPreDisableObserver__Class**)(modloader::win::memory::resolve_rva(0x0473A7C8)); }
    namespace EntityPlaceholder_BaseEntityPlaceholderSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::EntityPlaceholder_BaseEntityPlaceholderSettings__Class** type_info = (::app::EntityPlaceholder_BaseEntityPlaceholderSettings__Class**)(modloader::win::memory::resolve_rva(0x0476F568)); }
    namespace AllowedEntityArea { IL2CPP_MODLOADER_DLLEXPORT ::app::AllowedEntityArea__Class** type_info = (::app::AllowedEntityArea__Class**)(modloader::win::memory::resolve_rva(0x04753A60)); }
    namespace IPooled { IL2CPP_MODLOADER_DLLEXPORT ::app::IPooled__Class** type_info = (::app::IPooled__Class**)(modloader::win::memory::resolve_rva(0x04754A78)); }
    namespace IPooled__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::IPooled__Array__Class** type_info = (::app::IPooled__Array__Class**)(modloader::win::memory::resolve_rva(0x04717A38)); }
    namespace AxisAlignedBox { IL2CPP_MODLOADER_DLLEXPORT ::app::AxisAlignedBox__Class** type_info = (::app::AxisAlignedBox__Class**)(modloader::win::memory::resolve_rva(0x04717138)); }
    namespace EntityAvatar { IL2CPP_MODLOADER_DLLEXPORT ::app::EntityAvatar__Class** type_info = (::app::EntityAvatar__Class**)(modloader::win::memory::resolve_rva(0x0470F660)); }
    namespace EntitySpatialData { IL2CPP_MODLOADER_DLLEXPORT ::app::EntitySpatialData__Class** type_info = (::app::EntitySpatialData__Class**)(modloader::win::memory::resolve_rva(0x04740588)); }
    namespace DropLootSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::DropLootSettings__Class** type_info = (::app::DropLootSettings__Class**)(modloader::win::memory::resolve_rva(0x0473A840)); }
    namespace DamageDealer__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::DamageDealer__Array__Class** type_info = (::app::DamageDealer__Array__Class**)(modloader::win::memory::resolve_rva(0x04704068)); }
    namespace EntityContext { IL2CPP_MODLOADER_DLLEXPORT ::app::EntityContext__Class** type_info = (::app::EntityContext__Class**)(modloader::win::memory::resolve_rva(0x04722728)); }
    namespace IEntityOwned { IL2CPP_MODLOADER_DLLEXPORT ::app::IEntityOwned__Class** type_info = (::app::IEntityOwned__Class**)(modloader::win::memory::resolve_rva(0x04771000)); }
    namespace IEntityEventListener { IL2CPP_MODLOADER_DLLEXPORT ::app::IEntityEventListener__Class** type_info = (::app::IEntityEventListener__Class**)(modloader::win::memory::resolve_rva(0x0474A130)); }
    namespace EntityReactionBehaviour { IL2CPP_MODLOADER_DLLEXPORT ::app::EntityReactionBehaviour__Class** type_info = (::app::EntityReactionBehaviour__Class**)(modloader::win::memory::resolve_rva(0x0477EA68)); }
    namespace IEntityBehaviour { IL2CPP_MODLOADER_DLLEXPORT ::app::IEntityBehaviour__Class** type_info = (::app::IEntityBehaviour__Class**)(modloader::win::memory::resolve_rva(0x0477DBC8)); }
    namespace EntityBehaviourDebugData { IL2CPP_MODLOADER_DLLEXPORT ::app::EntityBehaviourDebugData__Class** type_info = (::app::EntityBehaviourDebugData__Class**)(modloader::win::memory::resolve_rva(0x0478EF58)); }
    namespace EntityDamageEvent { IL2CPP_MODLOADER_DLLEXPORT ::app::EntityDamageEvent__Class** type_info = (::app::EntityDamageEvent__Class**)(modloader::win::memory::resolve_rva(0x0471E140)); }
    namespace EntityReactionBehaviour__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::EntityReactionBehaviour__Array__Class** type_info = (::app::EntityReactionBehaviour__Array__Class**)(modloader::win::memory::resolve_rva(0x04742E70)); }
    namespace EntityReactions_ReactionInterruptionSuspensionEntry { IL2CPP_MODLOADER_DLLEXPORT ::app::EntityReactions_ReactionInterruptionSuspensionEntry__Class** type_info = (::app::EntityReactions_ReactionInterruptionSuspensionEntry__Class**)(modloader::win::memory::resolve_rva(0x04762468)); }
    namespace EntityCinematicData { IL2CPP_MODLOADER_DLLEXPORT ::app::EntityCinematicData__Class** type_info = (::app::EntityCinematicData__Class**)(modloader::win::memory::resolve_rva(0x0470F4C8)); }
    namespace EntityCinematicTask { IL2CPP_MODLOADER_DLLEXPORT ::app::EntityCinematicTask__Class** type_info = (::app::EntityCinematicTask__Class**)(modloader::win::memory::resolve_rva(0x04701028)); }
    namespace IEntityLocomotion { IL2CPP_MODLOADER_DLLEXPORT ::app::IEntityLocomotion__Class** type_info = (::app::IEntityLocomotion__Class**)(modloader::win::memory::resolve_rva(0x04763100)); }
    namespace AudioListenerZoneReference { IL2CPP_MODLOADER_DLLEXPORT ::app::AudioListenerZoneReference__Class** type_info = (::app::AudioListenerZoneReference__Class**)(modloader::win::memory::resolve_rva(0x04778458)); }
    namespace ExampleZoneProcessor { IL2CPP_MODLOADER_DLLEXPORT ::app::ExampleZoneProcessor__Class** type_info = (::app::ExampleZoneProcessor__Class**)(modloader::win::memory::resolve_rva(0x04753DA8)); }
    namespace SoundListenerReference { IL2CPP_MODLOADER_DLLEXPORT ::app::SoundListenerReference__Class** type_info = (::app::SoundListenerReference__Class**)(modloader::win::memory::resolve_rva(0x04717120)); }
    namespace PositionSyncTask { IL2CPP_MODLOADER_DLLEXPORT ::app::PositionSyncTask__Class** type_info = (::app::PositionSyncTask__Class**)(modloader::win::memory::resolve_rva(0x04771A48)); }
    namespace PositionSyncTask__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::PositionSyncTask__Array__Class** type_info = (::app::PositionSyncTask__Array__Class**)(modloader::win::memory::resolve_rva(0x04713BE0)); }
    namespace ListenerSyncProcessor { IL2CPP_MODLOADER_DLLEXPORT ::app::ListenerSyncProcessor__Class** type_info = (::app::ListenerSyncProcessor__Class**)(modloader::win::memory::resolve_rva(0x04710548)); }
    namespace ListenerSyncProcessor_ListenerSyncTask { IL2CPP_MODLOADER_DLLEXPORT ::app::ListenerSyncProcessor_ListenerSyncTask__Class** type_info = (::app::ListenerSyncProcessor_ListenerSyncTask__Class**)(modloader::win::memory::resolve_rva(0x0475CB80)); }
    namespace ListenerSyncProcessor_ListenerSyncTask__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::ListenerSyncProcessor_ListenerSyncTask__Array__Class** type_info = (::app::ListenerSyncProcessor_ListenerSyncTask__Array__Class**)(modloader::win::memory::resolve_rva(0x0474C518)); }
    namespace WwiseSyncProcessor { IL2CPP_MODLOADER_DLLEXPORT ::app::WwiseSyncProcessor__Class** type_info = (::app::WwiseSyncProcessor__Class**)(modloader::win::memory::resolve_rva(0x04729190)); }
    namespace WwiseSyncProcessor_RtpcSyncTask { IL2CPP_MODLOADER_DLLEXPORT ::app::WwiseSyncProcessor_RtpcSyncTask__Class** type_info = (::app::WwiseSyncProcessor_RtpcSyncTask__Class**)(modloader::win::memory::resolve_rva(0x0475CB00)); }
    namespace WwiseSyncProcessor_RtpcSyncTask__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::WwiseSyncProcessor_RtpcSyncTask__Array__Class** type_info = (::app::WwiseSyncProcessor_RtpcSyncTask__Array__Class**)(modloader::win::memory::resolve_rva(0x04717710)); }
    namespace IListenerSyncProcessor { IL2CPP_MODLOADER_DLLEXPORT ::app::IListenerSyncProcessor__Class** type_info = (::app::IListenerSyncProcessor__Class**)(modloader::win::memory::resolve_rva(0x047627C0)); }
    namespace UberStateToWwiseData_DesiredConditionUberState { IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateToWwiseData_DesiredConditionUberState__Class** type_info = (::app::UberStateToWwiseData_DesiredConditionUberState__Class**)(modloader::win::memory::resolve_rva(0x04747FB0)); }
    namespace UberStateWwiseStateManager { IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateWwiseStateManager__Class** type_info = (::app::UberStateWwiseStateManager__Class**)(modloader::win::memory::resolve_rva(0x047630E8)); }
    namespace UberStateWwiseStateManager_ResetStateData { IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateWwiseStateManager_ResetStateData__Class** type_info = (::app::UberStateWwiseStateManager_ResetStateData__Class**)(modloader::win::memory::resolve_rva(0x04729380)); }
    namespace WotwUberStateToWwiseData_WotwUberStateToWWiseEntry { IL2CPP_MODLOADER_DLLEXPORT ::app::WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Class** type_info = (::app::WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Class**)(modloader::win::memory::resolve_rva(0x04750B60)); }
    namespace WotwUberStateToWwiseData_AbilityRequirementCondition { IL2CPP_MODLOADER_DLLEXPORT ::app::WotwUberStateToWwiseData_AbilityRequirementCondition__Class** type_info = (::app::WotwUberStateToWwiseData_AbilityRequirementCondition__Class**)(modloader::win::memory::resolve_rva(0x0474B230)); }
    namespace WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Array__Class** type_info = (::app::WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Array__Class**)(modloader::win::memory::resolve_rva(0x047698D8)); }
    namespace WwiseIntegration { IL2CPP_MODLOADER_DLLEXPORT ::app::WwiseIntegration__Class** type_info = (::app::WwiseIntegration__Class**)(modloader::win::memory::resolve_rva(0x04777990)); }
    namespace WwiseEventSystem { IL2CPP_MODLOADER_DLLEXPORT ::app::WwiseEventSystem__Class** type_info = (::app::WwiseEventSystem__Class**)(modloader::win::memory::resolve_rva(0x04711EB8)); }
    namespace WwiseEventSystem_SoundHandleProtected__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::WwiseEventSystem_SoundHandleProtected__Array__Class** type_info = (::app::WwiseEventSystem_SoundHandleProtected__Array__Class**)(modloader::win::memory::resolve_rva(0x04782F00)); }
    namespace WwiseGameObjectSystem { IL2CPP_MODLOADER_DLLEXPORT ::app::WwiseGameObjectSystem__Class** type_info = (::app::WwiseGameObjectSystem__Class**)(modloader::win::memory::resolve_rva(0x04796480)); }
    namespace ArtificialSoundHost__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::ArtificialSoundHost__Array__Class** type_info = (::app::ArtificialSoundHost__Array__Class**)(modloader::win::memory::resolve_rva(0x04710358)); }
    namespace WwiseSoundBankSystem { IL2CPP_MODLOADER_DLLEXPORT ::app::WwiseSoundBankSystem__Class** type_info = (::app::WwiseSoundBankSystem__Class**)(modloader::win::memory::resolve_rva(0x04734C78)); }
    namespace WwiseBootstrap { IL2CPP_MODLOADER_DLLEXPORT ::app::WwiseBootstrap__Class** type_info = (::app::WwiseBootstrap__Class**)(modloader::win::memory::resolve_rva(0x04740020)); }
    namespace WwiseBootstrap_c { IL2CPP_MODLOADER_DLLEXPORT ::app::WwiseBootstrap_c__Class** type_info = (::app::WwiseBootstrap_c__Class**)(modloader::win::memory::resolve_rva(0x04733488)); }
    namespace WwiseBootstrap_c_DisplayClass35_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::WwiseBootstrap_c_DisplayClass35_0__Class** type_info = (::app::WwiseBootstrap_c_DisplayClass35_0__Class**)(modloader::win::memory::resolve_rva(0x04770B38)); }
    namespace WwiseEventSystem_c_DisplayClass3_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::WwiseEventSystem_c_DisplayClass3_0__Class** type_info = (::app::WwiseEventSystem_c_DisplayClass3_0__Class**)(modloader::win::memory::resolve_rva(0x0472D750)); }
    namespace WwiseEventSystem_c { IL2CPP_MODLOADER_DLLEXPORT ::app::WwiseEventSystem_c__Class** type_info = (::app::WwiseEventSystem_c__Class**)(modloader::win::memory::resolve_rva(0x04736B80)); }
    namespace WwiseGameObjectSystem_c { IL2CPP_MODLOADER_DLLEXPORT ::app::WwiseGameObjectSystem_c__Class** type_info = (::app::WwiseGameObjectSystem_c__Class**)(modloader::win::memory::resolve_rva(0x0477D988)); }
    namespace CallbackFlags { IL2CPP_MODLOADER_DLLEXPORT ::app::CallbackFlags__Class** type_info = (::app::CallbackFlags__Class**)(modloader::win::memory::resolve_rva(0x04758268)); }
    namespace VolumeEffectContainer { IL2CPP_MODLOADER_DLLEXPORT ::app::VolumeEffectContainer__Class** type_info = (::app::VolumeEffectContainer__Class**)(modloader::win::memory::resolve_rva(0x0473EDD8)); }
    namespace VolumeEffect { IL2CPP_MODLOADER_DLLEXPORT ::app::VolumeEffect__Class** type_info = (::app::VolumeEffect__Class**)(modloader::win::memory::resolve_rva(0x0471AB98)); }
    namespace VolumeEffectComponent { IL2CPP_MODLOADER_DLLEXPORT ::app::VolumeEffectComponent__Class** type_info = (::app::VolumeEffectComponent__Class**)(modloader::win::memory::resolve_rva(0x047232D8)); }
    namespace VolumeEffectField { IL2CPP_MODLOADER_DLLEXPORT ::app::VolumeEffectField__Class** type_info = (::app::VolumeEffectField__Class**)(modloader::win::memory::resolve_rva(0x0472C800)); }
    namespace VolumeEffectFlags { IL2CPP_MODLOADER_DLLEXPORT ::app::VolumeEffectFlags__Class** type_info = (::app::VolumeEffectFlags__Class**)(modloader::win::memory::resolve_rva(0x04760740)); }
    namespace VolumeEffectComponentFlags { IL2CPP_MODLOADER_DLLEXPORT ::app::VolumeEffectComponentFlags__Class** type_info = (::app::VolumeEffectComponentFlags__Class**)(modloader::win::memory::resolve_rva(0x0470BCF0)); }
    namespace VolumeEffectFieldFlags { IL2CPP_MODLOADER_DLLEXPORT ::app::VolumeEffectFieldFlags__Class** type_info = (::app::VolumeEffectFieldFlags__Class**)(modloader::win::memory::resolve_rva(0x04733C98)); }
    namespace VersionInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::VersionInfo__Class** type_info = (::app::VersionInfo__Class**)(modloader::win::memory::resolve_rva(0x047843C0)); }
    namespace VolumeEffectComponent_c_DisplayClass7_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::VolumeEffectComponent_c_DisplayClass7_0__Class** type_info = (::app::VolumeEffectComponent_c_DisplayClass7_0__Class**)(modloader::win::memory::resolve_rva(0x0476A508)); }
    namespace VolumeEffectComponent_c { IL2CPP_MODLOADER_DLLEXPORT ::app::VolumeEffectComponent_c__Class** type_info = (::app::VolumeEffectComponent_c__Class**)(modloader::win::memory::resolve_rva(0x047832E0)); }
    namespace VolumeEffect_c { IL2CPP_MODLOADER_DLLEXPORT ::app::VolumeEffect_c__Class** type_info = (::app::VolumeEffect_c__Class**)(modloader::win::memory::resolve_rva(0x04755E28)); }
    namespace VolumeEffectContainer_c { IL2CPP_MODLOADER_DLLEXPORT ::app::VolumeEffectContainer_c__Class** type_info = (::app::VolumeEffectContainer_c__Class**)(modloader::win::memory::resolve_rva(0x04757250)); }
    namespace VolumeEffectComponentFlags_c_DisplayClass6_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::VolumeEffectComponentFlags_c_DisplayClass6_0__Class** type_info = (::app::VolumeEffectComponentFlags_c_DisplayClass6_0__Class**)(modloader::win::memory::resolve_rva(0x0474A688)); }
    namespace VolumeEffectComponentFlags_c_DisplayClass7_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::VolumeEffectComponentFlags_c_DisplayClass7_0__Class** type_info = (::app::VolumeEffectComponentFlags_c_DisplayClass7_0__Class**)(modloader::win::memory::resolve_rva(0x0471F648)); }
    namespace VolumeEffectComponentFlags_c { IL2CPP_MODLOADER_DLLEXPORT ::app::VolumeEffectComponentFlags_c__Class** type_info = (::app::VolumeEffectComponentFlags_c__Class**)(modloader::win::memory::resolve_rva(0x04761DD8)); }
    namespace VolumeEffectFlags_c_DisplayClass2_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::VolumeEffectFlags_c_DisplayClass2_0__Class** type_info = (::app::VolumeEffectFlags_c_DisplayClass2_0__Class**)(modloader::win::memory::resolve_rva(0x04770760)); }
    namespace VolumeEffectFlags_c_DisplayClass3_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::VolumeEffectFlags_c_DisplayClass3_0__Class** type_info = (::app::VolumeEffectFlags_c_DisplayClass3_0__Class**)(modloader::win::memory::resolve_rva(0x04753DA0)); }
}
