#include <Il2CppModLoader/app/types/AnimationMeshingSettings.h>
#include <Il2CppModLoader/app/types/AnimationMontage_TimelineEventSubscription.h>
#include <Il2CppModLoader/app/types/ArtOptimizationDataModel.h>
#include <Il2CppModLoader/app/types/AsyncRaycast.h>
#include <Il2CppModLoader/app/types/AsyncRaycast_Result__Enum.h>
#include <Il2CppModLoader/app/types/AsyncRaycast_State__Enum.h>
#include <Il2CppModLoader/app/types/AtlasSpriteTextureBinder.h>
#include <Il2CppModLoader/app/types/BaurEntity.h>
#include <Il2CppModLoader/app/types/CharacterAbility.h>
#include <Il2CppModLoader/app/types/CharacterAnimationSystem_CharacterAnimationState.h>
#include <Il2CppModLoader/app/types/CharacterInteractableType__Enum.h>
#include <Il2CppModLoader/app/types/CollectableCheckpointSettings.h>
#include <Il2CppModLoader/app/types/CollectablePlaceholder.h>
#include <Il2CppModLoader/app/types/EnergyOrbPickup.h>
#include <Il2CppModLoader/app/types/EntityPlaceholderScalingData_Difficulties.h>
#include <Il2CppModLoader/app/types/EntityPlaceholderScalingData_EntityScalingValues.h>
#include <Il2CppModLoader/app/types/EntityPlaceholderScalingData_EntityScalingValues__Array.h>
#include <Il2CppModLoader/app/types/EventTriggerAnimator__Array.h>
#include <Il2CppModLoader/app/types/ExpOrbPickup.h>
#include <Il2CppModLoader/app/types/FloatZone.h>
#include <Il2CppModLoader/app/types/GameWorldArea_PlayerAbilityInfo.h>
#include <Il2CppModLoader/app/types/GenericPuppet_GhostGenericResourcesReflectionCache.h>
#include <Il2CppModLoader/app/types/GhostCharacterAbilitiesPlugin.h>
#include <Il2CppModLoader/app/types/GhostGenericResourceAttribute.h>
#include <Il2CppModLoader/app/types/ICharacter.h>
#include <Il2CppModLoader/app/types/IMontageEventProvider.h>
#include <Il2CppModLoader/app/types/IPortalVisitor.h>
#include <Il2CppModLoader/app/types/InteractiveMessageBox.h>
#include <Il2CppModLoader/app/types/KeystonePickup.h>
#include <Il2CppModLoader/app/types/KuDash_PreDashDelegateType.h>
#include <Il2CppModLoader/app/types/KuLogicCycle_IsAllowedDelegate.h>
#include <Il2CppModLoader/app/types/LegacyDoor.h>
#include <Il2CppModLoader/app/types/MapStonePickup.h>
#include <Il2CppModLoader/app/types/MaxEnergyContainerPickup.h>
#include <Il2CppModLoader/app/types/MaxEnergyHalfContainerPickup.h>
#include <Il2CppModLoader/app/types/MaxHealthContainerPickup.h>
#include <Il2CppModLoader/app/types/MaxHealthHalfContainerPickup.h>
#include <Il2CppModLoader/app/types/ModifierWrapper.h>
#include <Il2CppModLoader/app/types/MortarEntity.h>
#include <Il2CppModLoader/app/types/MortarEntity_AimVeloCache.h>
#include <Il2CppModLoader/app/types/MortarEntity_AimVeloCache_EntityParams.h>
#include <Il2CppModLoader/app/types/MortarEntity_AimVeloCache_Grid.h>
#include <Il2CppModLoader/app/types/MortarEntity_AimVeloCache_Packer.h>
#include <Il2CppModLoader/app/types/NPCCameraTransition.h>
#include <Il2CppModLoader/app/types/NPCEntity.h>
#include <Il2CppModLoader/app/types/OrePickup.h>
#include <Il2CppModLoader/app/types/OriPositionPrediction.h>
#include <Il2CppModLoader/app/types/PickupBase.h>
#include <Il2CppModLoader/app/types/PlayerSpiritShards.h>
#include <Il2CppModLoader/app/types/Portal_PortalVisitorTracking.h>
#include <Il2CppModLoader/app/types/QuestItemPickup.h>
#include <Il2CppModLoader/app/types/RestoreHealthPickup.h>
#include <Il2CppModLoader/app/types/RuntimeGameWorldArea.h>
#include <Il2CppModLoader/app/types/RuntimeSceneMetaData__Array.h>
#include <Il2CppModLoader/app/types/RuntimeWorldMapIcon.h>
#include <Il2CppModLoader/app/types/Sample.h>
#include <Il2CppModLoader/app/types/SceneRootData.h>
#include <Il2CppModLoader/app/types/SceneTrackingChange.h>
#include <Il2CppModLoader/app/types/SeinController.h>
#include <Il2CppModLoader/app/types/SeinDamageReciever.h>
#include <Il2CppModLoader/app/types/SeinDeadlyDarknessController.h>
#include <Il2CppModLoader/app/types/SeinEnergy.h>
#include <Il2CppModLoader/app/types/SeinEvent__Enum.h>
#include <Il2CppModLoader/app/types/SeinInput.h>
#include <Il2CppModLoader/app/types/SeinLevel.h>
#include <Il2CppModLoader/app/types/SeinNestedPrefab.h>
#include <Il2CppModLoader/app/types/SeinNestedPrefab__Array.h>
#include <Il2CppModLoader/app/types/SeinPickupProcessor.h>
#include <Il2CppModLoader/app/types/SeinPickupProcessor_CollectableInfo.h>
#include <Il2CppModLoader/app/types/SeinPlayAnimationController.h>
#include <Il2CppModLoader/app/types/SeinPowerslideSpell_FireTrailPoint.h>
#include <Il2CppModLoader/app/types/SeinSoulFlame.h>
#include <Il2CppModLoader/app/types/Sensor.h>
#include <Il2CppModLoader/app/types/Sensor_SensorLineOfSightRequest_State__Enum.h>
#include <Il2CppModLoader/app/types/SerializableUberSaderModifierWrapper.h>
#include <Il2CppModLoader/app/types/SerializableUberShaderWrapper.h>
#include <Il2CppModLoader/app/types/ShardSlotUpgradePickup.h>
#include <Il2CppModLoader/app/types/ShowFixedTimeTextEntity.h>
#include <Il2CppModLoader/app/types/ShowFixedTimeTextEntity_TextVisuals.h>
#include <Il2CppModLoader/app/types/SkillPointPickup.h>
#include <Il2CppModLoader/app/types/SpellInventory_Binding__Enum.h>
#include <Il2CppModLoader/app/types/SpiritShardPickup.h>
#include <Il2CppModLoader/app/types/SpiritShardPickupContext.h>
#include <Il2CppModLoader/app/types/StateFovModifier__Array.h>
#include <Il2CppModLoader/app/types/StaticEntityLocomotion.h>
#include <Il2CppModLoader/app/types/TextureAnimator.h>
#include <Il2CppModLoader/app/types/TexturePoolEntity.h>
#include <Il2CppModLoader/app/types/TexturesPool.h>
#include <Il2CppModLoader/app/types/TimeSlicedActivationTask.h>
#include <Il2CppModLoader/app/types/TimeSlicedActivationTask_ObjectActivationInfo__Array.h>
#include <Il2CppModLoader/app/types/TimesliceSceneUnloadTask.h>
#include <Il2CppModLoader/app/types/UberShaderAtlasTexture.h>
#include <Il2CppModLoader/app/types/UberShaderBlockTextured.h>
#include <Il2CppModLoader/app/types/UberShaderComponent.h>
#include <Il2CppModLoader/app/types/UberShaderMainTexture.h>
#include <Il2CppModLoader/app/types/UberShaderModifier.h>
#include <Il2CppModLoader/app/types/UberShaderTexture.h>
#include <Il2CppModLoader/app/types/UberShaderTextureBase.h>
#include <Il2CppModLoader/app/types/UberShaderVector.h>
#include <Il2CppModLoader/app/types/UberShaderWrapper.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IMontageEventProvider {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IMontageEventProvider__Class** type_info = (::app::IMontageEventProvider__Class**)(modloader::win::memory::resolve_rva(0x047371C8));
    }
    namespace AnimationMontage_TimelineEventSubscription {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationMontage_TimelineEventSubscription__Class** type_info = (::app::AnimationMontage_TimelineEventSubscription__Class**)(modloader::win::memory::resolve_rva(0x0477CD18));
    }
    namespace SeinPowerslideSpell_FireTrailPoint {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinPowerslideSpell_FireTrailPoint__Class** type_info = (::app::SeinPowerslideSpell_FireTrailPoint__Class**)(modloader::win::memory::resolve_rva(0x04792778));
    }
    namespace SeinController {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinController__Class** type_info = (::app::SeinController__Class**)(modloader::win::memory::resolve_rva(0x04731AC0));
    }
    namespace SeinPlayAnimationController {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinPlayAnimationController__Class** type_info = (::app::SeinPlayAnimationController__Class**)(modloader::win::memory::resolve_rva(0x04716F80));
    }
    namespace LegacyDoor {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LegacyDoor__Class** type_info = (::app::LegacyDoor__Class**)(modloader::win::memory::resolve_rva(0x04799AF0));
    }
    namespace RuntimeSceneMetaData__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RuntimeSceneMetaData__Array__Class** type_info = (::app::RuntimeSceneMetaData__Array__Class**)(modloader::win::memory::resolve_rva(0x0478E2D0));
    }
    namespace SeinSoulFlame {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinSoulFlame__Class** type_info = (::app::SeinSoulFlame__Class**)(modloader::win::memory::resolve_rva(0x04795B58));
    }
    namespace SeinInput {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinInput__Class** type_info = (::app::SeinInput__Class**)(modloader::win::memory::resolve_rva(0x04756380));
    }
    namespace SeinLevel {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinLevel__Class** type_info = (::app::SeinLevel__Class**)(modloader::win::memory::resolve_rva(0x047684B8));
    }
    namespace SeinEnergy {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinEnergy__Class** type_info = (::app::SeinEnergy__Class**)(modloader::win::memory::resolve_rva(0x04773B88));
    }
    namespace SeinDamageReciever {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinDamageReciever__Class** type_info = (::app::SeinDamageReciever__Class**)(modloader::win::memory::resolve_rva(0x0470E738));
    }
    namespace SeinDeadlyDarknessController {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinDeadlyDarknessController__Class** type_info = (::app::SeinDeadlyDarknessController__Class**)(modloader::win::memory::resolve_rva(0x0472A628));
    }
    namespace SeinPickupProcessor {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinPickupProcessor__Class** type_info = (::app::SeinPickupProcessor__Class**)(modloader::win::memory::resolve_rva(0x0474D4B0));
    }
    namespace ShowFixedTimeTextEntity {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShowFixedTimeTextEntity__Class** type_info = (::app::ShowFixedTimeTextEntity__Class**)(modloader::win::memory::resolve_rva(0x04796670));
    }
    namespace ShowFixedTimeTextEntity_TextVisuals {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShowFixedTimeTextEntity_TextVisuals__Class** type_info = (::app::ShowFixedTimeTextEntity_TextVisuals__Class**)(modloader::win::memory::resolve_rva(0x04786FF8));
    }
    namespace NPCEntity {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NPCEntity__Class** type_info = (::app::NPCEntity__Class**)(modloader::win::memory::resolve_rva(0x0476F3C8));
    }
    namespace NPCCameraTransition {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NPCCameraTransition__Class** type_info = (::app::NPCCameraTransition__Class**)(modloader::win::memory::resolve_rva(0x04707FC0));
    }
    namespace StaticEntityLocomotion {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StaticEntityLocomotion__Class** type_info = (::app::StaticEntityLocomotion__Class**)(modloader::win::memory::resolve_rva(0x047938D0));
    }
    namespace MortarEntity {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MortarEntity__Class** type_info = (::app::MortarEntity__Class**)(modloader::win::memory::resolve_rva(0x0475E648));
    }
    namespace Sensor_SensorLineOfSightRequest_State__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Sensor_SensorLineOfSightRequest_State__Enum__Class** type_info = (::app::Sensor_SensorLineOfSightRequest_State__Enum__Class**)(modloader::win::memory::resolve_rva(0x0471C7B8));
    }
    namespace Sensor {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Sensor__Class** type_info = (::app::Sensor__Class**)(modloader::win::memory::resolve_rva(0x047630F8));
    }
    namespace OriPositionPrediction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::OriPositionPrediction__Class** type_info = (::app::OriPositionPrediction__Class**)(modloader::win::memory::resolve_rva(0x0473C040));
    }
    namespace AsyncRaycast_State__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AsyncRaycast_State__Enum__Class** type_info = (::app::AsyncRaycast_State__Enum__Class**)(modloader::win::memory::resolve_rva(0x0478CCA0));
    }
    namespace AsyncRaycast_Result__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AsyncRaycast_Result__Enum__Class** type_info = (::app::AsyncRaycast_Result__Enum__Class**)(modloader::win::memory::resolve_rva(0x0475F490));
    }
    namespace AsyncRaycast {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AsyncRaycast__Class** type_info = (::app::AsyncRaycast__Class**)(modloader::win::memory::resolve_rva(0x04710058));
    }
    namespace MortarEntity_AimVeloCache {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MortarEntity_AimVeloCache__Class** type_info = (::app::MortarEntity_AimVeloCache__Class**)(modloader::win::memory::resolve_rva(0x0477C808));
    }
    namespace MortarEntity_AimVeloCache_Grid {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MortarEntity_AimVeloCache_Grid__Class** type_info = (::app::MortarEntity_AimVeloCache_Grid__Class**)(modloader::win::memory::resolve_rva(0x047089E8));
    }
    namespace MortarEntity_AimVeloCache_Packer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MortarEntity_AimVeloCache_Packer__Class** type_info = (::app::MortarEntity_AimVeloCache_Packer__Class**)(modloader::win::memory::resolve_rva(0x047555E0));
    }
    namespace MortarEntity_AimVeloCache_EntityParams {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MortarEntity_AimVeloCache_EntityParams__Class** type_info = (::app::MortarEntity_AimVeloCache_EntityParams__Class**)(modloader::win::memory::resolve_rva(0x047504E8));
    }
    namespace CharacterInteractableType__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CharacterInteractableType__Enum__Class** type_info = (::app::CharacterInteractableType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0476E3F0));
    }
    namespace ICharacter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ICharacter__Class** type_info = (::app::ICharacter__Class**)(modloader::win::memory::resolve_rva(0x047147F0));
    }
    namespace BaurEntity {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BaurEntity__Class** type_info = (::app::BaurEntity__Class**)(modloader::win::memory::resolve_rva(0x0474F8E8));
    }
    namespace InteractiveMessageBox {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InteractiveMessageBox__Class** type_info = (::app::InteractiveMessageBox__Class**)(modloader::win::memory::resolve_rva(0x04726F10));
    }
    namespace SeinPickupProcessor_CollectableInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinPickupProcessor_CollectableInfo__Class** type_info = (::app::SeinPickupProcessor_CollectableInfo__Class**)(modloader::win::memory::resolve_rva(0x04709710));
    }
    namespace SpiritShardPickupContext {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SpiritShardPickupContext__Class** type_info = (::app::SpiritShardPickupContext__Class**)(modloader::win::memory::resolve_rva(0x047455D8));
    }
    namespace PickupBase {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PickupBase__Class** type_info = (::app::PickupBase__Class**)(modloader::win::memory::resolve_rva(0x047099E0));
    }
    namespace CollectablePlaceholder {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CollectablePlaceholder__Class** type_info = (::app::CollectablePlaceholder__Class**)(modloader::win::memory::resolve_rva(0x04762A18));
    }
    namespace CollectableCheckpointSettings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CollectableCheckpointSettings__Class** type_info = (::app::CollectableCheckpointSettings__Class**)(modloader::win::memory::resolve_rva(0x04757EC0));
    }
    namespace QuestItemPickup {
        IL2CPP_MODLOADER_DLLEXPORT ::app::QuestItemPickup__Class** type_info = (::app::QuestItemPickup__Class**)(modloader::win::memory::resolve_rva(0x047573B8));
    }
    namespace ExpOrbPickup {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ExpOrbPickup__Class** type_info = (::app::ExpOrbPickup__Class**)(modloader::win::memory::resolve_rva(0x0470EC20));
    }
    namespace OrePickup {
        IL2CPP_MODLOADER_DLLEXPORT ::app::OrePickup__Class** type_info = (::app::OrePickup__Class**)(modloader::win::memory::resolve_rva(0x04765F88));
    }
    namespace SkillPointPickup {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SkillPointPickup__Class** type_info = (::app::SkillPointPickup__Class**)(modloader::win::memory::resolve_rva(0x04786F68));
    }
    namespace EnergyOrbPickup {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EnergyOrbPickup__Class** type_info = (::app::EnergyOrbPickup__Class**)(modloader::win::memory::resolve_rva(0x04766C28));
    }
    namespace MaxEnergyContainerPickup {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MaxEnergyContainerPickup__Class** type_info = (::app::MaxEnergyContainerPickup__Class**)(modloader::win::memory::resolve_rva(0x0470D828));
    }
    namespace MaxEnergyHalfContainerPickup {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MaxEnergyHalfContainerPickup__Class** type_info = (::app::MaxEnergyHalfContainerPickup__Class**)(modloader::win::memory::resolve_rva(0x04792780));
    }
    namespace KeystonePickup {
        IL2CPP_MODLOADER_DLLEXPORT ::app::KeystonePickup__Class** type_info = (::app::KeystonePickup__Class**)(modloader::win::memory::resolve_rva(0x0470B3E8));
    }
    namespace RestoreHealthPickup {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RestoreHealthPickup__Class** type_info = (::app::RestoreHealthPickup__Class**)(modloader::win::memory::resolve_rva(0x04751170));
    }
    namespace MaxHealthContainerPickup {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MaxHealthContainerPickup__Class** type_info = (::app::MaxHealthContainerPickup__Class**)(modloader::win::memory::resolve_rva(0x04731568));
    }
    namespace MaxHealthHalfContainerPickup {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MaxHealthHalfContainerPickup__Class** type_info = (::app::MaxHealthHalfContainerPickup__Class**)(modloader::win::memory::resolve_rva(0x04794F98));
    }
    namespace MapStonePickup {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MapStonePickup__Class** type_info = (::app::MapStonePickup__Class**)(modloader::win::memory::resolve_rva(0x04785400));
    }
    namespace SpiritShardPickup {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SpiritShardPickup__Class** type_info = (::app::SpiritShardPickup__Class**)(modloader::win::memory::resolve_rva(0x047063F0));
    }
    namespace ShardSlotUpgradePickup {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShardSlotUpgradePickup__Class** type_info = (::app::ShardSlotUpgradePickup__Class**)(modloader::win::memory::resolve_rva(0x04713478));
    }
    namespace CharacterAbility {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CharacterAbility__Class** type_info = (::app::CharacterAbility__Class**)(modloader::win::memory::resolve_rva(0x04780D70));
    }
    namespace PlayerSpiritShards {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerSpiritShards__Class** type_info = (::app::PlayerSpiritShards__Class**)(modloader::win::memory::resolve_rva(0x04782188));
    }
    namespace SpellInventory_Binding__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SpellInventory_Binding__Enum__Class** type_info = (::app::SpellInventory_Binding__Enum__Class**)(modloader::win::memory::resolve_rva(0x04717368));
    }
    namespace SeinEvent__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinEvent__Enum__Class** type_info = (::app::SeinEvent__Enum__Class**)(modloader::win::memory::resolve_rva(0x0470C9F8));
    }
    namespace StateFovModifier__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StateFovModifier__Array__Class** type_info = (::app::StateFovModifier__Array__Class**)(modloader::win::memory::resolve_rva(0x04711AD8));
    }
    namespace SeinNestedPrefab {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinNestedPrefab__Class** type_info = (::app::SeinNestedPrefab__Class**)(modloader::win::memory::resolve_rva(0x0472D640));
    }
    namespace SeinNestedPrefab__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinNestedPrefab__Array__Class** type_info = (::app::SeinNestedPrefab__Array__Class**)(modloader::win::memory::resolve_rva(0x0474ADC0));
    }
    namespace CharacterAnimationSystem_CharacterAnimationState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CharacterAnimationSystem_CharacterAnimationState__Class** type_info = (::app::CharacterAnimationSystem_CharacterAnimationState__Class**)(modloader::win::memory::resolve_rva(0x04714C50));
    }
    namespace AnimationMeshingSettings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationMeshingSettings__Class** type_info = (::app::AnimationMeshingSettings__Class**)(modloader::win::memory::resolve_rva(0x04724EC0));
    }
    namespace AtlasSpriteTextureBinder {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AtlasSpriteTextureBinder__Class** type_info = (::app::AtlasSpriteTextureBinder__Class**)(modloader::win::memory::resolve_rva(0x0472E610));
    }
    namespace TextureAnimator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TextureAnimator__Class** type_info = (::app::TextureAnimator__Class**)(modloader::win::memory::resolve_rva(0x04711FC8));
    }
    namespace GhostCharacterAbilitiesPlugin {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GhostCharacterAbilitiesPlugin__Class** type_info = (::app::GhostCharacterAbilitiesPlugin__Class**)(modloader::win::memory::resolve_rva(0x0472B0A8));
    }
    namespace GenericPuppet_GhostGenericResourcesReflectionCache {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GenericPuppet_GhostGenericResourcesReflectionCache__Class** type_info = (::app::GenericPuppet_GhostGenericResourcesReflectionCache__Class**)(modloader::win::memory::resolve_rva(0x04751278));
    }
    namespace GhostGenericResourceAttribute {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GhostGenericResourceAttribute__Class** type_info = (::app::GhostGenericResourceAttribute__Class**)(modloader::win::memory::resolve_rva(0x04709800));
    }
    namespace FloatZone {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FloatZone__Class** type_info = (::app::FloatZone__Class**)(modloader::win::memory::resolve_rva(0x0470F590));
    }
    namespace EventTriggerAnimator__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EventTriggerAnimator__Array__Class** type_info = (::app::EventTriggerAnimator__Array__Class**)(modloader::win::memory::resolve_rva(0x04714138));
    }
    namespace KuDash_PreDashDelegateType {
        IL2CPP_MODLOADER_DLLEXPORT ::app::KuDash_PreDashDelegateType__Class** type_info = (::app::KuDash_PreDashDelegateType__Class**)(modloader::win::memory::resolve_rva(0x04730278));
    }
    namespace KuLogicCycle_IsAllowedDelegate {
        IL2CPP_MODLOADER_DLLEXPORT ::app::KuLogicCycle_IsAllowedDelegate__Class** type_info = (::app::KuLogicCycle_IsAllowedDelegate__Class**)(modloader::win::memory::resolve_rva(0x04740DD0));
    }
    namespace EntityPlaceholderScalingData_Difficulties {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EntityPlaceholderScalingData_Difficulties__Class** type_info = (::app::EntityPlaceholderScalingData_Difficulties__Class**)(modloader::win::memory::resolve_rva(0x04737140));
    }
    namespace EntityPlaceholderScalingData_EntityScalingValues {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EntityPlaceholderScalingData_EntityScalingValues__Class** type_info = (::app::EntityPlaceholderScalingData_EntityScalingValues__Class**)(modloader::win::memory::resolve_rva(0x0476F0C8));
    }
    namespace EntityPlaceholderScalingData_EntityScalingValues__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EntityPlaceholderScalingData_EntityScalingValues__Array__Class** type_info = (::app::EntityPlaceholderScalingData_EntityScalingValues__Array__Class**)(modloader::win::memory::resolve_rva(0x04732EA0));
    }
    namespace GameWorldArea_PlayerAbilityInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GameWorldArea_PlayerAbilityInfo__Class** type_info = (::app::GameWorldArea_PlayerAbilityInfo__Class**)(modloader::win::memory::resolve_rva(0x04796338));
    }
    namespace RuntimeGameWorldArea {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RuntimeGameWorldArea__Class** type_info = (::app::RuntimeGameWorldArea__Class**)(modloader::win::memory::resolve_rva(0x04761DF0));
    }
    namespace RuntimeWorldMapIcon {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RuntimeWorldMapIcon__Class** type_info = (::app::RuntimeWorldMapIcon__Class**)(modloader::win::memory::resolve_rva(0x04739DA8));
    }
    namespace SceneTrackingChange {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SceneTrackingChange__Class** type_info = (::app::SceneTrackingChange__Class**)(modloader::win::memory::resolve_rva(0x04790580));
    }
    namespace ArtOptimizationDataModel {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ArtOptimizationDataModel__Class** type_info = (::app::ArtOptimizationDataModel__Class**)(modloader::win::memory::resolve_rva(0x0473CBC8));
    }
    namespace SerializableUberShaderWrapper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SerializableUberShaderWrapper__Class** type_info = (::app::SerializableUberShaderWrapper__Class**)(modloader::win::memory::resolve_rva(0x047128F8));
    }
    namespace UberShaderComponent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberShaderComponent__Class** type_info = (::app::UberShaderComponent__Class**)(modloader::win::memory::resolve_rva(0x0470BC10));
    }
    namespace UberShaderTextureBase {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberShaderTextureBase__Class** type_info = (::app::UberShaderTextureBase__Class**)(modloader::win::memory::resolve_rva(0x04746600));
    }
    namespace UberShaderTexture {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberShaderTexture__Class** type_info = (::app::UberShaderTexture__Class**)(modloader::win::memory::resolve_rva(0x04737FE0));
    }
    namespace UberShaderMainTexture {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberShaderMainTexture__Class** type_info = (::app::UberShaderMainTexture__Class**)(modloader::win::memory::resolve_rva(0x047660C8));
    }
    namespace UberShaderAtlasTexture {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberShaderAtlasTexture__Class** type_info = (::app::UberShaderAtlasTexture__Class**)(modloader::win::memory::resolve_rva(0x04783530));
    }
    namespace UberShaderBlockTextured {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberShaderBlockTextured__Class** type_info = (::app::UberShaderBlockTextured__Class**)(modloader::win::memory::resolve_rva(0x04719C10));
    }
    namespace UberShaderModifier {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberShaderModifier__Class** type_info = (::app::UberShaderModifier__Class**)(modloader::win::memory::resolve_rva(0x047040F0));
    }
    namespace UberShaderVector {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberShaderVector__Class** type_info = (::app::UberShaderVector__Class**)(modloader::win::memory::resolve_rva(0x0473D098));
    }
    namespace Sample {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Sample__Class** type_info = (::app::Sample__Class**)(modloader::win::memory::resolve_rva(0x0472EA08));
    }
    namespace TexturePoolEntity {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TexturePoolEntity__Class** type_info = (::app::TexturePoolEntity__Class**)(modloader::win::memory::resolve_rva(0x047623A8));
    }
    namespace TexturesPool {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TexturesPool__Class** type_info = (::app::TexturesPool__Class**)(modloader::win::memory::resolve_rva(0x0475A4C8));
    }
    namespace SerializableUberSaderModifierWrapper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SerializableUberSaderModifierWrapper__Class** type_info = (::app::SerializableUberSaderModifierWrapper__Class**)(modloader::win::memory::resolve_rva(0x04729BD0));
    }
    namespace UberShaderWrapper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberShaderWrapper__Class** type_info = (::app::UberShaderWrapper__Class**)(modloader::win::memory::resolve_rva(0x04704498));
    }
    namespace ModifierWrapper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ModifierWrapper__Class** type_info = (::app::ModifierWrapper__Class**)(modloader::win::memory::resolve_rva(0x0475FAA0));
    }
    namespace SceneRootData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SceneRootData__Class** type_info = (::app::SceneRootData__Class**)(modloader::win::memory::resolve_rva(0x04735F18));
    }
    namespace IPortalVisitor {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IPortalVisitor__Class** type_info = (::app::IPortalVisitor__Class**)(modloader::win::memory::resolve_rva(0x047757E8));
    }
    namespace Portal_PortalVisitorTracking {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Portal_PortalVisitorTracking__Class** type_info = (::app::Portal_PortalVisitorTracking__Class**)(modloader::win::memory::resolve_rva(0x0471DA68));
    }
    namespace TimeSlicedActivationTask {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TimeSlicedActivationTask__Class** type_info = (::app::TimeSlicedActivationTask__Class**)(modloader::win::memory::resolve_rva(0x0474CD80));
    }
    namespace TimeSlicedActivationTask_ObjectActivationInfo__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TimeSlicedActivationTask_ObjectActivationInfo__Array__Class** type_info = (::app::TimeSlicedActivationTask_ObjectActivationInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x047323D8));
    }
    namespace TimesliceSceneUnloadTask {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TimesliceSceneUnloadTask__Class** type_info = (::app::TimesliceSceneUnloadTask__Class**)(modloader::win::memory::resolve_rva(0x0477DB88));
    }
} // namespace app::classes::types
