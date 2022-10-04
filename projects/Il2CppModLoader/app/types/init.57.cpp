#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/RigidbodyState__Array.h>
#include <Il2CppModLoader/app/types/JointState.h>
#include <Il2CppModLoader/app/types/ConfigurableJointMotion__Enum__Array.h>
#include <Il2CppModLoader/app/types/PhysicalSystemState__Array.h>
#include <Il2CppModLoader/app/types/FrustumOptimizable.h>
#include <Il2CppModLoader/app/types/TimeSlicedCoroutineJob.h>
#include <Il2CppModLoader/app/types/TimeSlicedRigidbodyTask.h>
#include <Il2CppModLoader/app/types/SceneState__Enum.h>
#include <Il2CppModLoader/app/types/SceneRoot.h>
#include <Il2CppModLoader/app/types/SceneMetaData_SeinAbilitiesWotW.h>
#include <Il2CppModLoader/app/types/EquipmentType__Enum.h>
#include <Il2CppModLoader/app/types/SceneMetaData_SeinEquipmentWotW.h>
#include <Il2CppModLoader/app/types/SceneMetaData_SeinEquipmentWotW__Array.h>
#include <Il2CppModLoader/app/types/SpiritShardType__Enum.h>
#include <Il2CppModLoader/app/types/AbilityType__Enum.h>
#include <Il2CppModLoader/app/types/SavePedestalUberState_PedestalState.h>
#include <Il2CppModLoader/app/types/SceneMetaData__Array.h>
#include <Il2CppModLoader/app/types/WorldMapIconType__Enum.h>
#include <Il2CppModLoader/app/types/PlayerUberStateDescriptor.h>
#include <Il2CppModLoader/app/types/PlayerUberState.h>
#include <Il2CppModLoader/app/types/PlayerUberStateAbilities.h>
#include <Il2CppModLoader/app/types/PlayerUberStateAbilities_Ability.h>
#include <Il2CppModLoader/app/types/AbilityType__Enum__Array.h>
#include <Il2CppModLoader/app/types/PlayerUberStateInventory.h>
#include <Il2CppModLoader/app/types/PlayerUberStateInventory_InventoryItem.h>
#include <Il2CppModLoader/app/types/PlayerUberStateShards_Shard.h>
#include <Il2CppModLoader/app/types/QuestItemType__Enum.h>
#include <Il2CppModLoader/app/types/PlayerUberStateInventory_QuestItem.h>
#include <Il2CppModLoader/app/types/PlayerUberStateShards.h>
#include <Il2CppModLoader/app/types/SpiritShardType__Enum__Array.h>
#include <Il2CppModLoader/app/types/PlayerUberStateStats.h>
#include <Il2CppModLoader/app/types/PlayerUberStateHoldables.h>
#include <Il2CppModLoader/app/types/PlayerUberStateAreaMapInformation.h>
#include <Il2CppModLoader/app/types/GameWorldAreaID__Enum.h>
#include <Il2CppModLoader/app/types/WorldMapAreaState__Enum.h>
#include <Il2CppModLoader/app/types/PlayerUberStateAreaMapInformation_MapTrailEntry.h>
#include <Il2CppModLoader/app/types/PlayerUberStateAreaMapInformation_MapTrailEntryPool.h>
#include <Il2CppModLoader/app/types/PlayerUberStatePinInformation.h>
#include <Il2CppModLoader/app/types/GameMapPins_PinColour__Enum.h>
#include <Il2CppModLoader/app/types/GameMapPins_Pin.h>
#include <Il2CppModLoader/app/types/DifficultyMode__Enum.h>
#include <Il2CppModLoader/app/types/PlayerUberStateGeneral.h>
#include <Il2CppModLoader/app/types/GameWorld.h>
#include <Il2CppModLoader/app/types/Ku.h>
#include <Il2CppModLoader/app/types/GenericPuppet.h>
#include <Il2CppModLoader/app/types/IPuppetBase.h>
#include <Il2CppModLoader/app/types/GhostGenericEventsPlugin.h>
#include <Il2CppModLoader/app/types/GhostRecorder.h>
#include <Il2CppModLoader/app/types/PreRecordingData.h>
#include <Il2CppModLoader/app/types/PreRecordingInstantiationEntry.h>
#include <Il2CppModLoader/app/types/PreRecordingDynamicSceneObjectEntry.h>
#include <Il2CppModLoader/app/types/PreRecordingUberStateEntry.h>
#include <Il2CppModLoader/app/types/GlobalRecordingTable.h>
#include <Il2CppModLoader/app/types/GlobalRecordingTable_RecordableEntry.h>
#include <Il2CppModLoader/app/types/GhostRecorderData.h>
#include <Il2CppModLoader/app/types/GhostFrame.h>
#include <Il2CppModLoader/app/types/IGhostFrameData.h>
#include <Il2CppModLoader/app/types/IGhostFrameData__Array.h>
#include <Il2CppModLoader/app/types/GhostCharacterData.h>
#include <Il2CppModLoader/app/types/GhostFrame_FrameDataTypes__Enum.h>
#include <Il2CppModLoader/app/types/GhostPlayer.h>
#include <Il2CppModLoader/app/types/UberShaderColor.h>
#include <Il2CppModLoader/app/types/UberShaderBlock.h>
#include <Il2CppModLoader/app/types/UberShaderBlockGrabPass.h>
#include <Il2CppModLoader/app/types/IPuppet.h>
#include <Il2CppModLoader/app/types/RecordableObjectPuppet.h>
#include <Il2CppModLoader/app/types/JumperEnemyPuppet.h>
#include <Il2CppModLoader/app/types/AnimationMetaData_AnimationData.h>
#include <Il2CppModLoader/app/types/AnimationMetaData_FloatAnimation.h>
#include <Il2CppModLoader/app/types/AtlasSpriteTexture.h>
#include <Il2CppModLoader/app/types/GhostRecordingMetaDataPlugin.h>
#include <Il2CppModLoader/app/types/GhostRecordingMetaDataData.h>
#include <Il2CppModLoader/app/types/SeinLogicCycle_IsAllowedDelegate.h>
#include <Il2CppModLoader/app/types/SeinCharacter.h>
#include <Il2CppModLoader/app/types/SeinLogicCycle.h>
#include <Il2CppModLoader/app/types/SeinDoubleJump.h>
#include <Il2CppModLoader/app/types/SoundPlayer.h>
#include <Il2CppModLoader/app/types/SoundHostReference.h>
#include <Il2CppModLoader/app/types/WwiseEventSystem_SoundHandleProtected.h>
#include <Il2CppModLoader/app/types/ISoundHost.h>
#include <Il2CppModLoader/app/types/WwiseEventSystem_EventState.h>
#include <Il2CppModLoader/app/types/WwiseEventSystem_SoundHandleProtected_CallbackData.h>
#include <Il2CppModLoader/app/types/IComboMove.h>
#include <Il2CppModLoader/app/types/SurfaceMaterialType__Enum.h>
#include <Il2CppModLoader/app/types/MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache.h>
#include <Il2CppModLoader/app/types/HornBugMovementEffects.h>
#include <Il2CppModLoader/app/types/SeinPlatformingEffects.h>
#include <Il2CppModLoader/app/types/MaterialBasedSeinPlatformingEffects__Array.h>
#include <Il2CppModLoader/app/types/SeinPoleEffects.h>
#include <Il2CppModLoader/app/types/MaterialTypeVFXSettings.h>
#include <Il2CppModLoader/app/types/MaterialVFXSet.h>
#include <Il2CppModLoader/app/types/MaterialVFXSizePair.h>
#include <Il2CppModLoader/app/types/SurfaceMaterialType__Enum__Array.h>
#include <Il2CppModLoader/app/types/WeaponTypeVFXSettings.h>
#include <Il2CppModLoader/app/types/WeaponVFXSet.h>
#include <Il2CppModLoader/app/types/EquipmentType__Enum__Array.h>
#include <Il2CppModLoader/app/types/SeinWallJump.h>
#include <Il2CppModLoader/app/types/ArtificialSoundHostReference.h>
#include <Il2CppModLoader/app/types/SoundSource.h>
#include <Il2CppModLoader/app/types/ArtificialSoundHost.h>

namespace app::classes::types {
    namespace RigidbodyState__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::RigidbodyState__Array__Class** type_info = (::app::RigidbodyState__Array__Class**)(modloader::win::memory::resolve_rva(0x04750988)); }
    namespace JointState { IL2CPP_MODLOADER_DLLEXPORT ::app::JointState__Class** type_info = (::app::JointState__Class**)(modloader::win::memory::resolve_rva(0x04724B50)); }
    namespace ConfigurableJointMotion__Enum__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::ConfigurableJointMotion__Enum__Array__Class** type_info = (::app::ConfigurableJointMotion__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x047223E0)); }
    namespace PhysicalSystemState__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::PhysicalSystemState__Array__Class** type_info = (::app::PhysicalSystemState__Array__Class**)(modloader::win::memory::resolve_rva(0x047470E8)); }
    namespace FrustumOptimizable { IL2CPP_MODLOADER_DLLEXPORT ::app::FrustumOptimizable__Class** type_info = (::app::FrustumOptimizable__Class**)(modloader::win::memory::resolve_rva(0x04764E50)); }
    namespace TimeSlicedCoroutineJob { IL2CPP_MODLOADER_DLLEXPORT ::app::TimeSlicedCoroutineJob__Class** type_info = (::app::TimeSlicedCoroutineJob__Class**)(modloader::win::memory::resolve_rva(0x04793818)); }
    namespace TimeSlicedRigidbodyTask { IL2CPP_MODLOADER_DLLEXPORT ::app::TimeSlicedRigidbodyTask__Class** type_info = (::app::TimeSlicedRigidbodyTask__Class**)(modloader::win::memory::resolve_rva(0x047397A8)); }
    namespace SceneState__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneState__Enum__Class** type_info = (::app::SceneState__Enum__Class**)(modloader::win::memory::resolve_rva(0x047856F8)); }
    namespace SceneRoot { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneRoot__Class** type_info = (::app::SceneRoot__Class**)(modloader::win::memory::resolve_rva(0x04799D28)); }
    namespace SceneMetaData_SeinAbilitiesWotW { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneMetaData_SeinAbilitiesWotW__Class** type_info = (::app::SceneMetaData_SeinAbilitiesWotW__Class**)(modloader::win::memory::resolve_rva(0x04705A70)); }
    namespace EquipmentType__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::EquipmentType__Enum__Class** type_info = (::app::EquipmentType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0471BCC8)); }
    namespace SceneMetaData_SeinEquipmentWotW { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneMetaData_SeinEquipmentWotW__Class** type_info = (::app::SceneMetaData_SeinEquipmentWotW__Class**)(modloader::win::memory::resolve_rva(0x0475C130)); }
    namespace SceneMetaData_SeinEquipmentWotW__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneMetaData_SeinEquipmentWotW__Array__Class** type_info = (::app::SceneMetaData_SeinEquipmentWotW__Array__Class**)(modloader::win::memory::resolve_rva(0x047549E0)); }
    namespace SpiritShardType__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::SpiritShardType__Enum__Class** type_info = (::app::SpiritShardType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04732700)); }
    namespace AbilityType__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::AbilityType__Enum__Class** type_info = (::app::AbilityType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04797D88)); }
    namespace SavePedestalUberState_PedestalState { IL2CPP_MODLOADER_DLLEXPORT ::app::SavePedestalUberState_PedestalState__Class** type_info = (::app::SavePedestalUberState_PedestalState__Class**)(modloader::win::memory::resolve_rva(0x0473E320)); }
    namespace SceneMetaData__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneMetaData__Array__Class** type_info = (::app::SceneMetaData__Array__Class**)(modloader::win::memory::resolve_rva(0x04793ED0)); }
    namespace WorldMapIconType__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::WorldMapIconType__Enum__Class** type_info = (::app::WorldMapIconType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0474C930)); }
    namespace PlayerUberStateDescriptor { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerUberStateDescriptor__Class** type_info = (::app::PlayerUberStateDescriptor__Class**)(modloader::win::memory::resolve_rva(0x0473B108)); }
    namespace PlayerUberState { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerUberState__Class** type_info = (::app::PlayerUberState__Class**)(modloader::win::memory::resolve_rva(0x04703AF8)); }
    namespace PlayerUberStateAbilities { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerUberStateAbilities__Class** type_info = (::app::PlayerUberStateAbilities__Class**)(modloader::win::memory::resolve_rva(0x04718198)); }
    namespace PlayerUberStateAbilities_Ability { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerUberStateAbilities_Ability__Class** type_info = (::app::PlayerUberStateAbilities_Ability__Class**)(modloader::win::memory::resolve_rva(0x04799F88)); }
    namespace AbilityType__Enum__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::AbilityType__Enum__Array__Class** type_info = (::app::AbilityType__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04737D50)); }
    namespace PlayerUberStateInventory { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerUberStateInventory__Class** type_info = (::app::PlayerUberStateInventory__Class**)(modloader::win::memory::resolve_rva(0x0472D860)); }
    namespace PlayerUberStateInventory_InventoryItem { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerUberStateInventory_InventoryItem__Class** type_info = (::app::PlayerUberStateInventory_InventoryItem__Class**)(modloader::win::memory::resolve_rva(0x0478B640)); }
    namespace PlayerUberStateShards_Shard { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerUberStateShards_Shard__Class** type_info = (::app::PlayerUberStateShards_Shard__Class**)(modloader::win::memory::resolve_rva(0x0477E3C8)); }
    namespace QuestItemType__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::QuestItemType__Enum__Class** type_info = (::app::QuestItemType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04789A78)); }
    namespace PlayerUberStateInventory_QuestItem { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerUberStateInventory_QuestItem__Class** type_info = (::app::PlayerUberStateInventory_QuestItem__Class**)(modloader::win::memory::resolve_rva(0x0478D910)); }
    namespace PlayerUberStateShards { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerUberStateShards__Class** type_info = (::app::PlayerUberStateShards__Class**)(modloader::win::memory::resolve_rva(0x047474A8)); }
    namespace SpiritShardType__Enum__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::SpiritShardType__Enum__Array__Class** type_info = (::app::SpiritShardType__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04795B30)); }
    namespace PlayerUberStateStats { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerUberStateStats__Class** type_info = (::app::PlayerUberStateStats__Class**)(modloader::win::memory::resolve_rva(0x04766978)); }
    namespace PlayerUberStateHoldables { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerUberStateHoldables__Class** type_info = (::app::PlayerUberStateHoldables__Class**)(modloader::win::memory::resolve_rva(0x0471E718)); }
    namespace PlayerUberStateAreaMapInformation { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerUberStateAreaMapInformation__Class** type_info = (::app::PlayerUberStateAreaMapInformation__Class**)(modloader::win::memory::resolve_rva(0x04797228)); }
    namespace GameWorldAreaID__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::GameWorldAreaID__Enum__Class** type_info = (::app::GameWorldAreaID__Enum__Class**)(modloader::win::memory::resolve_rva(0x0470E498)); }
    namespace WorldMapAreaState__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::WorldMapAreaState__Enum__Class** type_info = (::app::WorldMapAreaState__Enum__Class**)(modloader::win::memory::resolve_rva(0x04707E70)); }
    namespace PlayerUberStateAreaMapInformation_MapTrailEntry { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerUberStateAreaMapInformation_MapTrailEntry__Class** type_info = (::app::PlayerUberStateAreaMapInformation_MapTrailEntry__Class**)(modloader::win::memory::resolve_rva(0x0471EC90)); }
    namespace PlayerUberStateAreaMapInformation_MapTrailEntryPool { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerUberStateAreaMapInformation_MapTrailEntryPool__Class** type_info = (::app::PlayerUberStateAreaMapInformation_MapTrailEntryPool__Class**)(modloader::win::memory::resolve_rva(0x04784F98)); }
    namespace PlayerUberStatePinInformation { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerUberStatePinInformation__Class** type_info = (::app::PlayerUberStatePinInformation__Class**)(modloader::win::memory::resolve_rva(0x04743FA0)); }
    namespace GameMapPins_PinColour__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::GameMapPins_PinColour__Enum__Class** type_info = (::app::GameMapPins_PinColour__Enum__Class**)(modloader::win::memory::resolve_rva(0x04725A50)); }
    namespace GameMapPins_Pin { IL2CPP_MODLOADER_DLLEXPORT ::app::GameMapPins_Pin__Class** type_info = (::app::GameMapPins_Pin__Class**)(modloader::win::memory::resolve_rva(0x04743ED8)); }
    namespace DifficultyMode__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::DifficultyMode__Enum__Class** type_info = (::app::DifficultyMode__Enum__Class**)(modloader::win::memory::resolve_rva(0x047210F8)); }
    namespace PlayerUberStateGeneral { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerUberStateGeneral__Class** type_info = (::app::PlayerUberStateGeneral__Class**)(modloader::win::memory::resolve_rva(0x04771CE0)); }
    namespace GameWorld { IL2CPP_MODLOADER_DLLEXPORT ::app::GameWorld__Class** type_info = (::app::GameWorld__Class**)(modloader::win::memory::resolve_rva(0x04783850)); }
    namespace Ku { IL2CPP_MODLOADER_DLLEXPORT ::app::Ku__Class** type_info = (::app::Ku__Class**)(modloader::win::memory::resolve_rva(0x04755AF8)); }
    namespace GenericPuppet { IL2CPP_MODLOADER_DLLEXPORT ::app::GenericPuppet__Class** type_info = (::app::GenericPuppet__Class**)(modloader::win::memory::resolve_rva(0x04788268)); }
    namespace IPuppetBase { IL2CPP_MODLOADER_DLLEXPORT ::app::IPuppetBase__Class** type_info = (::app::IPuppetBase__Class**)(modloader::win::memory::resolve_rva(0x04786860)); }
    namespace GhostGenericEventsPlugin { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostGenericEventsPlugin__Class** type_info = (::app::GhostGenericEventsPlugin__Class**)(modloader::win::memory::resolve_rva(0x04713B98)); }
    namespace GhostRecorder { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostRecorder__Class** type_info = (::app::GhostRecorder__Class**)(modloader::win::memory::resolve_rva(0x04781760)); }
    namespace PreRecordingData { IL2CPP_MODLOADER_DLLEXPORT ::app::PreRecordingData__Class** type_info = (::app::PreRecordingData__Class**)(modloader::win::memory::resolve_rva(0x0474D760)); }
    namespace PreRecordingInstantiationEntry { IL2CPP_MODLOADER_DLLEXPORT ::app::PreRecordingInstantiationEntry__Class** type_info = (::app::PreRecordingInstantiationEntry__Class**)(modloader::win::memory::resolve_rva(0x047062C8)); }
    namespace PreRecordingDynamicSceneObjectEntry { IL2CPP_MODLOADER_DLLEXPORT ::app::PreRecordingDynamicSceneObjectEntry__Class** type_info = (::app::PreRecordingDynamicSceneObjectEntry__Class**)(modloader::win::memory::resolve_rva(0x04795AB0)); }
    namespace PreRecordingUberStateEntry { IL2CPP_MODLOADER_DLLEXPORT ::app::PreRecordingUberStateEntry__Class** type_info = (::app::PreRecordingUberStateEntry__Class**)(modloader::win::memory::resolve_rva(0x0475C220)); }
    namespace GlobalRecordingTable { IL2CPP_MODLOADER_DLLEXPORT ::app::GlobalRecordingTable__Class** type_info = (::app::GlobalRecordingTable__Class**)(modloader::win::memory::resolve_rva(0x0474A368)); }
    namespace GlobalRecordingTable_RecordableEntry { IL2CPP_MODLOADER_DLLEXPORT ::app::GlobalRecordingTable_RecordableEntry__Class** type_info = (::app::GlobalRecordingTable_RecordableEntry__Class**)(modloader::win::memory::resolve_rva(0x047922F8)); }
    namespace GhostRecorderData { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostRecorderData__Class** type_info = (::app::GhostRecorderData__Class**)(modloader::win::memory::resolve_rva(0x047147E8)); }
    namespace GhostFrame { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostFrame__Class** type_info = (::app::GhostFrame__Class**)(modloader::win::memory::resolve_rva(0x047987A0)); }
    namespace IGhostFrameData { IL2CPP_MODLOADER_DLLEXPORT ::app::IGhostFrameData__Class** type_info = (::app::IGhostFrameData__Class**)(modloader::win::memory::resolve_rva(0x0470F670)); }
    namespace IGhostFrameData__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::IGhostFrameData__Array__Class** type_info = (::app::IGhostFrameData__Array__Class**)(modloader::win::memory::resolve_rva(0x047607F8)); }
    namespace GhostCharacterData { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostCharacterData__Class** type_info = (::app::GhostCharacterData__Class**)(modloader::win::memory::resolve_rva(0x047381B0)); }
    namespace GhostFrame_FrameDataTypes__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostFrame_FrameDataTypes__Enum__Class** type_info = (::app::GhostFrame_FrameDataTypes__Enum__Class**)(modloader::win::memory::resolve_rva(0x0477FC88)); }
    namespace GhostPlayer { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostPlayer__Class** type_info = (::app::GhostPlayer__Class**)(modloader::win::memory::resolve_rva(0x04737998)); }
    namespace UberShaderColor { IL2CPP_MODLOADER_DLLEXPORT ::app::UberShaderColor__Class** type_info = (::app::UberShaderColor__Class**)(modloader::win::memory::resolve_rva(0x04767178)); }
    namespace UberShaderBlock { IL2CPP_MODLOADER_DLLEXPORT ::app::UberShaderBlock__Class** type_info = (::app::UberShaderBlock__Class**)(modloader::win::memory::resolve_rva(0x0477CD60)); }
    namespace UberShaderBlockGrabPass { IL2CPP_MODLOADER_DLLEXPORT ::app::UberShaderBlockGrabPass__Class** type_info = (::app::UberShaderBlockGrabPass__Class**)(modloader::win::memory::resolve_rva(0x047305C8)); }
    namespace IPuppet { IL2CPP_MODLOADER_DLLEXPORT ::app::IPuppet__Class** type_info = (::app::IPuppet__Class**)(modloader::win::memory::resolve_rva(0x047556C0)); }
    namespace RecordableObjectPuppet { IL2CPP_MODLOADER_DLLEXPORT ::app::RecordableObjectPuppet__Class** type_info = (::app::RecordableObjectPuppet__Class**)(modloader::win::memory::resolve_rva(0x04780B60)); }
    namespace JumperEnemyPuppet { IL2CPP_MODLOADER_DLLEXPORT ::app::JumperEnemyPuppet__Class** type_info = (::app::JumperEnemyPuppet__Class**)(modloader::win::memory::resolve_rva(0x04794348)); }
    namespace AnimationMetaData_AnimationData { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationMetaData_AnimationData__Class** type_info = (::app::AnimationMetaData_AnimationData__Class**)(modloader::win::memory::resolve_rva(0x0476BE38)); }
    namespace AnimationMetaData_FloatAnimation { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationMetaData_FloatAnimation__Class** type_info = (::app::AnimationMetaData_FloatAnimation__Class**)(modloader::win::memory::resolve_rva(0x047748D8)); }
    namespace AtlasSpriteTexture { IL2CPP_MODLOADER_DLLEXPORT ::app::AtlasSpriteTexture__Class** type_info = (::app::AtlasSpriteTexture__Class**)(modloader::win::memory::resolve_rva(0x04794250)); }
    namespace GhostRecordingMetaDataPlugin { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostRecordingMetaDataPlugin__Class** type_info = (::app::GhostRecordingMetaDataPlugin__Class**)(modloader::win::memory::resolve_rva(0x04745ED0)); }
    namespace GhostRecordingMetaDataData { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostRecordingMetaDataData__Class** type_info = (::app::GhostRecordingMetaDataData__Class**)(modloader::win::memory::resolve_rva(0x0470F768)); }
    namespace SeinLogicCycle_IsAllowedDelegate { IL2CPP_MODLOADER_DLLEXPORT ::app::SeinLogicCycle_IsAllowedDelegate__Class** type_info = (::app::SeinLogicCycle_IsAllowedDelegate__Class**)(modloader::win::memory::resolve_rva(0x0472C210)); }
    namespace SeinCharacter { IL2CPP_MODLOADER_DLLEXPORT ::app::SeinCharacter__Class** type_info = (::app::SeinCharacter__Class**)(modloader::win::memory::resolve_rva(0x04738A08)); }
    namespace SeinLogicCycle { IL2CPP_MODLOADER_DLLEXPORT ::app::SeinLogicCycle__Class** type_info = (::app::SeinLogicCycle__Class**)(modloader::win::memory::resolve_rva(0x04786E08)); }
    namespace SeinDoubleJump { IL2CPP_MODLOADER_DLLEXPORT ::app::SeinDoubleJump__Class** type_info = (::app::SeinDoubleJump__Class**)(modloader::win::memory::resolve_rva(0x047422A8)); }
    namespace SoundPlayer { IL2CPP_MODLOADER_DLLEXPORT ::app::SoundPlayer__Class** type_info = (::app::SoundPlayer__Class**)(modloader::win::memory::resolve_rva(0x0477A6B0)); }
    namespace SoundHostReference { IL2CPP_MODLOADER_DLLEXPORT ::app::SoundHostReference__Class** type_info = (::app::SoundHostReference__Class**)(modloader::win::memory::resolve_rva(0x04759220)); }
    namespace WwiseEventSystem_SoundHandleProtected { IL2CPP_MODLOADER_DLLEXPORT ::app::WwiseEventSystem_SoundHandleProtected__Class** type_info = (::app::WwiseEventSystem_SoundHandleProtected__Class**)(modloader::win::memory::resolve_rva(0x04722CC0)); }
    namespace ISoundHost { IL2CPP_MODLOADER_DLLEXPORT ::app::ISoundHost__Class** type_info = (::app::ISoundHost__Class**)(modloader::win::memory::resolve_rva(0x04712578)); }
    namespace WwiseEventSystem_EventState { IL2CPP_MODLOADER_DLLEXPORT ::app::WwiseEventSystem_EventState__Class** type_info = (::app::WwiseEventSystem_EventState__Class**)(modloader::win::memory::resolve_rva(0x04791A90)); }
    namespace WwiseEventSystem_SoundHandleProtected_CallbackData { IL2CPP_MODLOADER_DLLEXPORT ::app::WwiseEventSystem_SoundHandleProtected_CallbackData__Class** type_info = (::app::WwiseEventSystem_SoundHandleProtected_CallbackData__Class**)(modloader::win::memory::resolve_rva(0x0474FCA0)); }
    namespace IComboMove { IL2CPP_MODLOADER_DLLEXPORT ::app::IComboMove__Class** type_info = (::app::IComboMove__Class**)(modloader::win::memory::resolve_rva(0x0473B090)); }
    namespace SurfaceMaterialType__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::SurfaceMaterialType__Enum__Class** type_info = (::app::SurfaceMaterialType__Enum__Class**)(modloader::win::memory::resolve_rva(0x047221D8)); }
    namespace MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache { IL2CPP_MODLOADER_DLLEXPORT ::app::MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache__Class** type_info = (::app::MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache__Class**)(modloader::win::memory::resolve_rva(0x0471B370)); }
    namespace HornBugMovementEffects { IL2CPP_MODLOADER_DLLEXPORT ::app::HornBugMovementEffects__Class** type_info = (::app::HornBugMovementEffects__Class**)(modloader::win::memory::resolve_rva(0x0471C498)); }
    namespace SeinPlatformingEffects { IL2CPP_MODLOADER_DLLEXPORT ::app::SeinPlatformingEffects__Class** type_info = (::app::SeinPlatformingEffects__Class**)(modloader::win::memory::resolve_rva(0x0475E5F0)); }
    namespace MaterialBasedSeinPlatformingEffects__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::MaterialBasedSeinPlatformingEffects__Array__Class** type_info = (::app::MaterialBasedSeinPlatformingEffects__Array__Class**)(modloader::win::memory::resolve_rva(0x047954F8)); }
    namespace SeinPoleEffects { IL2CPP_MODLOADER_DLLEXPORT ::app::SeinPoleEffects__Class** type_info = (::app::SeinPoleEffects__Class**)(modloader::win::memory::resolve_rva(0x0472CE50)); }
    namespace MaterialTypeVFXSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::MaterialTypeVFXSettings__Class** type_info = (::app::MaterialTypeVFXSettings__Class**)(modloader::win::memory::resolve_rva(0x04795848)); }
    namespace MaterialVFXSet { IL2CPP_MODLOADER_DLLEXPORT ::app::MaterialVFXSet__Class** type_info = (::app::MaterialVFXSet__Class**)(modloader::win::memory::resolve_rva(0x047309D0)); }
    namespace MaterialVFXSizePair { IL2CPP_MODLOADER_DLLEXPORT ::app::MaterialVFXSizePair__Class** type_info = (::app::MaterialVFXSizePair__Class**)(modloader::win::memory::resolve_rva(0x04760370)); }
    namespace SurfaceMaterialType__Enum__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::SurfaceMaterialType__Enum__Array__Class** type_info = (::app::SurfaceMaterialType__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04731668)); }
    namespace WeaponTypeVFXSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::WeaponTypeVFXSettings__Class** type_info = (::app::WeaponTypeVFXSettings__Class**)(modloader::win::memory::resolve_rva(0x04781E78)); }
    namespace WeaponVFXSet { IL2CPP_MODLOADER_DLLEXPORT ::app::WeaponVFXSet__Class** type_info = (::app::WeaponVFXSet__Class**)(modloader::win::memory::resolve_rva(0x04758D88)); }
    namespace EquipmentType__Enum__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::EquipmentType__Enum__Array__Class** type_info = (::app::EquipmentType__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x0472B500)); }
    namespace SeinWallJump { IL2CPP_MODLOADER_DLLEXPORT ::app::SeinWallJump__Class** type_info = (::app::SeinWallJump__Class**)(modloader::win::memory::resolve_rva(0x0470D9D0)); }
    namespace ArtificialSoundHostReference { IL2CPP_MODLOADER_DLLEXPORT ::app::ArtificialSoundHostReference__Class** type_info = (::app::ArtificialSoundHostReference__Class**)(modloader::win::memory::resolve_rva(0x04707380)); }
    namespace SoundSource { IL2CPP_MODLOADER_DLLEXPORT ::app::SoundSource__Class** type_info = (::app::SoundSource__Class**)(modloader::win::memory::resolve_rva(0x04719580)); }
    namespace ArtificialSoundHost { IL2CPP_MODLOADER_DLLEXPORT ::app::ArtificialSoundHost__Class** type_info = (::app::ArtificialSoundHost__Class**)(modloader::win::memory::resolve_rva(0x04704320)); }
}
