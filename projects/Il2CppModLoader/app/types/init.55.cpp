#include <Il2CppModLoader/app/types/AnimationMetaData_AnimationData.h>
#include <Il2CppModLoader/app/types/AnimationMetaData_FloatAnimation.h>
#include <Il2CppModLoader/app/types/ArtificialSoundHost.h>
#include <Il2CppModLoader/app/types/ArtificialSoundHostReference.h>
#include <Il2CppModLoader/app/types/AtlasSpriteTexture.h>
#include <Il2CppModLoader/app/types/CageStructureTool.h>
#include <Il2CppModLoader/app/types/CageStructureTool_Edge.h>
#include <Il2CppModLoader/app/types/CageStructureTool_Face.h>
#include <Il2CppModLoader/app/types/CageStructureTool_Vertex.h>
#include <Il2CppModLoader/app/types/CharacterPlatformMovement.h>
#include <Il2CppModLoader/app/types/CharacterPlatformMovement_KickbackEntry.h>
#include <Il2CppModLoader/app/types/CharacterPlatformMovement_ScheduledSpeedCurve.h>
#include <Il2CppModLoader/app/types/ComboInput.h>
#include <Il2CppModLoader/app/types/Damage.h>
#include <Il2CppModLoader/app/types/DamageDealer.h>
#include <Il2CppModLoader/app/types/DamageDealer_OverrideInfo.h>
#include <Il2CppModLoader/app/types/DamageDealer_TweakDamageDelegate.h>
#include <Il2CppModLoader/app/types/DamageLayerMask__Enum.h>
#include <Il2CppModLoader/app/types/DamageOwner.h>
#include <Il2CppModLoader/app/types/DamageResult.h>
#include <Il2CppModLoader/app/types/DamageType__Enum.h>
#include <Il2CppModLoader/app/types/DamageWeight__Enum.h>
#include <Il2CppModLoader/app/types/DelayedAction.h>
#include <Il2CppModLoader/app/types/DelayedAction_Action.h>
#include <Il2CppModLoader/app/types/DigZone.h>
#include <Il2CppModLoader/app/types/EquipmentType__Enum__Array.h>
#include <Il2CppModLoader/app/types/GameWorld.h>
#include <Il2CppModLoader/app/types/GenericPuppet.h>
#include <Il2CppModLoader/app/types/GhostCharacterData.h>
#include <Il2CppModLoader/app/types/GhostFrame.h>
#include <Il2CppModLoader/app/types/GhostFrame_FrameDataTypes__Enum.h>
#include <Il2CppModLoader/app/types/GhostGenericEventsPlugin.h>
#include <Il2CppModLoader/app/types/GhostPlayer.h>
#include <Il2CppModLoader/app/types/GhostRecorder.h>
#include <Il2CppModLoader/app/types/GhostRecorderData.h>
#include <Il2CppModLoader/app/types/GhostRecordingMetaDataData.h>
#include <Il2CppModLoader/app/types/GhostRecordingMetaDataPlugin.h>
#include <Il2CppModLoader/app/types/GlobalRecordingTable.h>
#include <Il2CppModLoader/app/types/GlobalRecordingTable_RecordableEntry.h>
#include <Il2CppModLoader/app/types/GrabbableSurface.h>
#include <Il2CppModLoader/app/types/GrabbableSurface_PositionInfo.h>
#include <Il2CppModLoader/app/types/GrabbableSurface__Array.h>
#include <Il2CppModLoader/app/types/GravityPlatformMovementSettings.h>
#include <Il2CppModLoader/app/types/HorizontalPlatformMovementSettings.h>
#include <Il2CppModLoader/app/types/HorizontalPlatformMovementSettings_SpeedMultiplierSet.h>
#include <Il2CppModLoader/app/types/HorizontalPlatformMovementSettings_SpeedSet.h>
#include <Il2CppModLoader/app/types/HornBugMovementEffects.h>
#include <Il2CppModLoader/app/types/IGhostFrameData__Array.h>
#include <Il2CppModLoader/app/types/IState_2__Array.h>
#include <Il2CppModLoader/app/types/IsOnCollisionState.h>
#include <Il2CppModLoader/app/types/JumperEnemyPuppet.h>
#include <Il2CppModLoader/app/types/Ku.h>
#include <Il2CppModLoader/app/types/LegacyAnimator__Array.h>
#include <Il2CppModLoader/app/types/MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache.h>
#include <Il2CppModLoader/app/types/MaterialBasedSeinPlatformingEffects__Array.h>
#include <Il2CppModLoader/app/types/MaterialTypeVFXSettings.h>
#include <Il2CppModLoader/app/types/MaterialVFXSet.h>
#include <Il2CppModLoader/app/types/MaterialVFXSizePair.h>
#include <Il2CppModLoader/app/types/MoonControllerColliderHit.h>
#include <Il2CppModLoader/app/types/MovingPlatformsController.h>
#include <Il2CppModLoader/app/types/PlatformMovement.h>
#include <Il2CppModLoader/app/types/PlatformingFXFunctionality.h>
#include <Il2CppModLoader/app/types/Polygon_1.h>
#include <Il2CppModLoader/app/types/Polygon_ShapeData.h>
#include <Il2CppModLoader/app/types/PreRecordingData.h>
#include <Il2CppModLoader/app/types/PreRecordingDynamicSceneObjectEntry.h>
#include <Il2CppModLoader/app/types/PreRecordingInstantiationEntry.h>
#include <Il2CppModLoader/app/types/PreRecordingUberStateEntry.h>
#include <Il2CppModLoader/app/types/RecordableObjectPuppet.h>
#include <Il2CppModLoader/app/types/SeinCharacter.h>
#include <Il2CppModLoader/app/types/SeinChargeJump.h>
#include <Il2CppModLoader/app/types/SeinDashNew.h>
#include <Il2CppModLoader/app/types/SeinDashNew_PreDashDelegateType.h>
#include <Il2CppModLoader/app/types/SeinDigging_DiggingEffects__Array.h>
#include <Il2CppModLoader/app/types/SeinDoubleJump.h>
#include <Il2CppModLoader/app/types/SeinLogicCycle.h>
#include <Il2CppModLoader/app/types/SeinLogicCycle_IsAllowedDelegate.h>
#include <Il2CppModLoader/app/types/SeinPlatformingEffects.h>
#include <Il2CppModLoader/app/types/SeinPoleEffects.h>
#include <Il2CppModLoader/app/types/SeinStomp.h>
#include <Il2CppModLoader/app/types/SeinStomp_States.h>
#include <Il2CppModLoader/app/types/SeinSwimming.h>
#include <Il2CppModLoader/app/types/SeinWallJump.h>
#include <Il2CppModLoader/app/types/SoundHostReference.h>
#include <Il2CppModLoader/app/types/SoundPlayer.h>
#include <Il2CppModLoader/app/types/SoundSource.h>
#include <Il2CppModLoader/app/types/StateMachine_2.h>
#include <Il2CppModLoader/app/types/SurfaceMaterialType__Enum.h>
#include <Il2CppModLoader/app/types/SurfaceMaterialType__Enum__Array.h>
#include <Il2CppModLoader/app/types/TimeDistanceGate.h>
#include <Il2CppModLoader/app/types/TransitionManager_1.h>
#include <Il2CppModLoader/app/types/Transition_1.h>
#include <Il2CppModLoader/app/types/UberShaderBlock.h>
#include <Il2CppModLoader/app/types/UberShaderBlockGrabPass.h>
#include <Il2CppModLoader/app/types/UberShaderColor.h>
#include <Il2CppModLoader/app/types/WeaponTypeVFXSettings.h>
#include <Il2CppModLoader/app/types/WeaponVFXSet.h>
#include <Il2CppModLoader/app/types/WwiseEventSystem_EventState.h>
#include <Il2CppModLoader/app/types/WwiseEventSystem_SoundHandleProtected.h>
#include <Il2CppModLoader/app/types/WwiseEventSystem_SoundHandleProtected_CallbackData.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameWorld {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GameWorld__Class** type_info = (::app::GameWorld__Class**)(modloader::win::memory::resolve_rva(0x04783850));
    }
    namespace Ku {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Ku__Class** type_info = (::app::Ku__Class**)(modloader::win::memory::resolve_rva(0x04755AF8));
    }
    namespace GenericPuppet {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GenericPuppet__Class** type_info = (::app::GenericPuppet__Class**)(modloader::win::memory::resolve_rva(0x04788268));
    }
    namespace GhostGenericEventsPlugin {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GhostGenericEventsPlugin__Class** type_info = (::app::GhostGenericEventsPlugin__Class**)(modloader::win::memory::resolve_rva(0x04713B98));
    }
    namespace GhostRecorder {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GhostRecorder__Class** type_info = (::app::GhostRecorder__Class**)(modloader::win::memory::resolve_rva(0x04781760));
    }
    namespace PreRecordingData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PreRecordingData__Class** type_info = (::app::PreRecordingData__Class**)(modloader::win::memory::resolve_rva(0x0474D760));
    }
    namespace PreRecordingInstantiationEntry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PreRecordingInstantiationEntry__Class** type_info = (::app::PreRecordingInstantiationEntry__Class**)(modloader::win::memory::resolve_rva(0x047062C8));
    }
    namespace PreRecordingDynamicSceneObjectEntry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PreRecordingDynamicSceneObjectEntry__Class** type_info = (::app::PreRecordingDynamicSceneObjectEntry__Class**)(modloader::win::memory::resolve_rva(0x04795AB0));
    }
    namespace PreRecordingUberStateEntry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PreRecordingUberStateEntry__Class** type_info = (::app::PreRecordingUberStateEntry__Class**)(modloader::win::memory::resolve_rva(0x0475C220));
    }
    namespace GlobalRecordingTable {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GlobalRecordingTable__Class** type_info = (::app::GlobalRecordingTable__Class**)(modloader::win::memory::resolve_rva(0x0474A368));
    }
    namespace GlobalRecordingTable_RecordableEntry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GlobalRecordingTable_RecordableEntry__Class** type_info = (::app::GlobalRecordingTable_RecordableEntry__Class**)(modloader::win::memory::resolve_rva(0x047922F8));
    }
    namespace GhostRecorderData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GhostRecorderData__Class** type_info = (::app::GhostRecorderData__Class**)(modloader::win::memory::resolve_rva(0x047147E8));
    }
    namespace GhostFrame {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GhostFrame__Class** type_info = (::app::GhostFrame__Class**)(modloader::win::memory::resolve_rva(0x047987A0));
    }
    namespace IGhostFrameData__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IGhostFrameData__Array__Class** type_info = (::app::IGhostFrameData__Array__Class**)(modloader::win::memory::resolve_rva(0x047607F8));
    }
    namespace GhostCharacterData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GhostCharacterData__Class** type_info = (::app::GhostCharacterData__Class**)(modloader::win::memory::resolve_rva(0x047381B0));
    }
    namespace GhostFrame_FrameDataTypes__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GhostFrame_FrameDataTypes__Enum__Class** type_info = (::app::GhostFrame_FrameDataTypes__Enum__Class**)(modloader::win::memory::resolve_rva(0x0477FC88));
    }
    namespace GhostPlayer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GhostPlayer__Class** type_info = (::app::GhostPlayer__Class**)(modloader::win::memory::resolve_rva(0x04737998));
    }
    namespace UberShaderColor {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberShaderColor__Class** type_info = (::app::UberShaderColor__Class**)(modloader::win::memory::resolve_rva(0x04767178));
    }
    namespace UberShaderBlock {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberShaderBlock__Class** type_info = (::app::UberShaderBlock__Class**)(modloader::win::memory::resolve_rva(0x0477CD60));
    }
    namespace UberShaderBlockGrabPass {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberShaderBlockGrabPass__Class** type_info = (::app::UberShaderBlockGrabPass__Class**)(modloader::win::memory::resolve_rva(0x047305C8));
    }
    namespace RecordableObjectPuppet {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RecordableObjectPuppet__Class** type_info = (::app::RecordableObjectPuppet__Class**)(modloader::win::memory::resolve_rva(0x04780B60));
    }
    namespace JumperEnemyPuppet {
        IL2CPP_MODLOADER_DLLEXPORT ::app::JumperEnemyPuppet__Class** type_info = (::app::JumperEnemyPuppet__Class**)(modloader::win::memory::resolve_rva(0x04794348));
    }
    namespace AnimationMetaData_AnimationData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationMetaData_AnimationData__Class** type_info = (::app::AnimationMetaData_AnimationData__Class**)(modloader::win::memory::resolve_rva(0x0476BE38));
    }
    namespace AnimationMetaData_FloatAnimation {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationMetaData_FloatAnimation__Class** type_info = (::app::AnimationMetaData_FloatAnimation__Class**)(modloader::win::memory::resolve_rva(0x047748D8));
    }
    namespace AtlasSpriteTexture {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AtlasSpriteTexture__Class** type_info = (::app::AtlasSpriteTexture__Class**)(modloader::win::memory::resolve_rva(0x04794250));
    }
    namespace GhostRecordingMetaDataPlugin {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GhostRecordingMetaDataPlugin__Class** type_info = (::app::GhostRecordingMetaDataPlugin__Class**)(modloader::win::memory::resolve_rva(0x04745ED0));
    }
    namespace GhostRecordingMetaDataData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GhostRecordingMetaDataData__Class** type_info = (::app::GhostRecordingMetaDataData__Class**)(modloader::win::memory::resolve_rva(0x0470F768));
    }
    namespace SeinLogicCycle_IsAllowedDelegate {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinLogicCycle_IsAllowedDelegate__Class** type_info = (::app::SeinLogicCycle_IsAllowedDelegate__Class**)(modloader::win::memory::resolve_rva(0x0472C210));
    }
    namespace SeinCharacter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinCharacter__Class** type_info = (::app::SeinCharacter__Class**)(modloader::win::memory::resolve_rva(0x04738A08));
    }
    namespace SeinLogicCycle {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinLogicCycle__Class** type_info = (::app::SeinLogicCycle__Class**)(modloader::win::memory::resolve_rva(0x04786E08));
    }
    namespace SeinDoubleJump {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinDoubleJump__Class** type_info = (::app::SeinDoubleJump__Class**)(modloader::win::memory::resolve_rva(0x047422A8));
    }
    namespace SoundPlayer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SoundPlayer__Class** type_info = (::app::SoundPlayer__Class**)(modloader::win::memory::resolve_rva(0x0477A6B0));
    }
    namespace SoundHostReference {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SoundHostReference__Class** type_info = (::app::SoundHostReference__Class**)(modloader::win::memory::resolve_rva(0x04759220));
    }
    namespace WwiseEventSystem_SoundHandleProtected {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WwiseEventSystem_SoundHandleProtected__Class** type_info = (::app::WwiseEventSystem_SoundHandleProtected__Class**)(modloader::win::memory::resolve_rva(0x04722CC0));
    }
    namespace WwiseEventSystem_EventState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WwiseEventSystem_EventState__Class** type_info = (::app::WwiseEventSystem_EventState__Class**)(modloader::win::memory::resolve_rva(0x04791A90));
    }
    namespace WwiseEventSystem_SoundHandleProtected_CallbackData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WwiseEventSystem_SoundHandleProtected_CallbackData__Class** type_info = (::app::WwiseEventSystem_SoundHandleProtected_CallbackData__Class**)(modloader::win::memory::resolve_rva(0x0474FCA0));
    }
    namespace SurfaceMaterialType__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SurfaceMaterialType__Enum__Class** type_info = (::app::SurfaceMaterialType__Enum__Class**)(modloader::win::memory::resolve_rva(0x047221D8));
    }
    namespace MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache__Class** type_info = (::app::MaterialBasedResourceMap_MaterialBasedResourceMapRuntimeCache__Class**)(modloader::win::memory::resolve_rva(0x0471B370));
    }
    namespace HornBugMovementEffects {
        IL2CPP_MODLOADER_DLLEXPORT ::app::HornBugMovementEffects__Class** type_info = (::app::HornBugMovementEffects__Class**)(modloader::win::memory::resolve_rva(0x0471C498));
    }
    namespace SeinPlatformingEffects {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinPlatformingEffects__Class** type_info = (::app::SeinPlatformingEffects__Class**)(modloader::win::memory::resolve_rva(0x0475E5F0));
    }
    namespace MaterialBasedSeinPlatformingEffects__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MaterialBasedSeinPlatformingEffects__Array__Class** type_info = (::app::MaterialBasedSeinPlatformingEffects__Array__Class**)(modloader::win::memory::resolve_rva(0x047954F8));
    }
    namespace SeinPoleEffects {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinPoleEffects__Class** type_info = (::app::SeinPoleEffects__Class**)(modloader::win::memory::resolve_rva(0x0472CE50));
    }
    namespace MaterialTypeVFXSettings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MaterialTypeVFXSettings__Class** type_info = (::app::MaterialTypeVFXSettings__Class**)(modloader::win::memory::resolve_rva(0x04795848));
    }
    namespace MaterialVFXSet {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MaterialVFXSet__Class** type_info = (::app::MaterialVFXSet__Class**)(modloader::win::memory::resolve_rva(0x047309D0));
    }
    namespace MaterialVFXSizePair {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MaterialVFXSizePair__Class** type_info = (::app::MaterialVFXSizePair__Class**)(modloader::win::memory::resolve_rva(0x04760370));
    }
    namespace SurfaceMaterialType__Enum__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SurfaceMaterialType__Enum__Array__Class** type_info = (::app::SurfaceMaterialType__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04731668));
    }
    namespace WeaponTypeVFXSettings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WeaponTypeVFXSettings__Class** type_info = (::app::WeaponTypeVFXSettings__Class**)(modloader::win::memory::resolve_rva(0x04781E78));
    }
    namespace WeaponVFXSet {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WeaponVFXSet__Class** type_info = (::app::WeaponVFXSet__Class**)(modloader::win::memory::resolve_rva(0x04758D88));
    }
    namespace EquipmentType__Enum__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EquipmentType__Enum__Array__Class** type_info = (::app::EquipmentType__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x0472B500));
    }
    namespace SeinWallJump {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinWallJump__Class** type_info = (::app::SeinWallJump__Class**)(modloader::win::memory::resolve_rva(0x0470D9D0));
    }
    namespace ArtificialSoundHostReference {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ArtificialSoundHostReference__Class** type_info = (::app::ArtificialSoundHostReference__Class**)(modloader::win::memory::resolve_rva(0x04707380));
    }
    namespace SoundSource {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SoundSource__Class** type_info = (::app::SoundSource__Class**)(modloader::win::memory::resolve_rva(0x04719580));
    }
    namespace ArtificialSoundHost {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ArtificialSoundHost__Class** type_info = (::app::ArtificialSoundHost__Class**)(modloader::win::memory::resolve_rva(0x04704320));
    }
    namespace DamageWeight__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DamageWeight__Enum__Class** type_info = (::app::DamageWeight__Enum__Class**)(modloader::win::memory::resolve_rva(0x0473B460));
    }
    namespace SeinChargeJump {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinChargeJump__Class** type_info = (::app::SeinChargeJump__Class**)(modloader::win::memory::resolve_rva(0x0478F340));
    }
    namespace GravityPlatformMovementSettings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GravityPlatformMovementSettings__Class** type_info = (::app::GravityPlatformMovementSettings__Class**)(modloader::win::memory::resolve_rva(0x04717C90));
    }
    namespace HorizontalPlatformMovementSettings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::HorizontalPlatformMovementSettings__Class** type_info = (::app::HorizontalPlatformMovementSettings__Class**)(modloader::win::memory::resolve_rva(0x0475E988));
    }
    namespace HorizontalPlatformMovementSettings_SpeedSet {
        IL2CPP_MODLOADER_DLLEXPORT ::app::HorizontalPlatformMovementSettings_SpeedSet__Class** type_info = (::app::HorizontalPlatformMovementSettings_SpeedSet__Class**)(modloader::win::memory::resolve_rva(0x04746B60));
    }
    namespace ComboInput {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ComboInput__Class** type_info = (::app::ComboInput__Class**)(modloader::win::memory::resolve_rva(0x0470BF40));
    }
    namespace SeinStomp {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinStomp__Class** type_info = (::app::SeinStomp__Class**)(modloader::win::memory::resolve_rva(0x04760A40));
    }
    namespace StateMachine_2 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StateMachine_2__Class** type_info = (::app::StateMachine_2__Class**)(modloader::win::memory::resolve_rva(0x047470F0));
    }
    namespace IState_2__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IState_2__Array__Class** type_info = (::app::IState_2__Array__Class**)(modloader::win::memory::resolve_rva(0x0478F6E8));
    }
    namespace TransitionManager_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TransitionManager_1__Class** type_info = (::app::TransitionManager_1__Class**)(modloader::win::memory::resolve_rva(0x047306F8));
    }
    namespace Transition_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Transition_1__Class** type_info = (::app::Transition_1__Class**)(modloader::win::memory::resolve_rva(0x0471F2A8));
    }
    namespace SeinStomp_States {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinStomp_States__Class** type_info = (::app::SeinStomp_States__Class**)(modloader::win::memory::resolve_rva(0x047556E0));
    }
    namespace DamageOwner {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DamageOwner__Class** type_info = (::app::DamageOwner__Class**)(modloader::win::memory::resolve_rva(0x04766F28));
    }
    namespace DamageType__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DamageType__Enum__Class** type_info = (::app::DamageType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04753450));
    }
    namespace DamageLayerMask__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DamageLayerMask__Enum__Class** type_info = (::app::DamageLayerMask__Enum__Class**)(modloader::win::memory::resolve_rva(0x04710EF0));
    }
    namespace Damage {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Damage__Class** type_info = (::app::Damage__Class**)(modloader::win::memory::resolve_rva(0x04732128));
    }
    namespace DamageResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DamageResult__Class** type_info = (::app::DamageResult__Class**)(modloader::win::memory::resolve_rva(0x04747D60));
    }
    namespace HorizontalPlatformMovementSettings_SpeedMultiplierSet {
        IL2CPP_MODLOADER_DLLEXPORT ::app::HorizontalPlatformMovementSettings_SpeedMultiplierSet__Class** type_info = (::app::HorizontalPlatformMovementSettings_SpeedMultiplierSet__Class**)(modloader::win::memory::resolve_rva(0x04751698));
    }
    namespace DelayedAction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DelayedAction__Class** type_info = (::app::DelayedAction__Class**)(modloader::win::memory::resolve_rva(0x04711538));
    }
    namespace DelayedAction_Action {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DelayedAction_Action__Class** type_info = (::app::DelayedAction_Action__Class**)(modloader::win::memory::resolve_rva(0x047994F0));
    }
    namespace SeinSwimming {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinSwimming__Class** type_info = (::app::SeinSwimming__Class**)(modloader::win::memory::resolve_rva(0x047209F8));
    }
    namespace CharacterPlatformMovement_ScheduledSpeedCurve {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CharacterPlatformMovement_ScheduledSpeedCurve__Class** type_info = (::app::CharacterPlatformMovement_ScheduledSpeedCurve__Class**)(modloader::win::memory::resolve_rva(0x0472D8B8));
    }
    namespace LegacyAnimator__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LegacyAnimator__Array__Class** type_info = (::app::LegacyAnimator__Array__Class**)(modloader::win::memory::resolve_rva(0x047287A0));
    }
    namespace SeinDigging_DiggingEffects__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinDigging_DiggingEffects__Array__Class** type_info = (::app::SeinDigging_DiggingEffects__Array__Class**)(modloader::win::memory::resolve_rva(0x04777540));
    }
    namespace DigZone {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DigZone__Class** type_info = (::app::DigZone__Class**)(modloader::win::memory::resolve_rva(0x04791450));
    }
    namespace CageStructureTool {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CageStructureTool__Class** type_info = (::app::CageStructureTool__Class**)(modloader::win::memory::resolve_rva(0x047988F8));
    }
    namespace CageStructureTool_Vertex {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CageStructureTool_Vertex__Class** type_info = (::app::CageStructureTool_Vertex__Class**)(modloader::win::memory::resolve_rva(0x0471CA40));
    }
    namespace CageStructureTool_Edge {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CageStructureTool_Edge__Class** type_info = (::app::CageStructureTool_Edge__Class**)(modloader::win::memory::resolve_rva(0x0478A960));
    }
    namespace CageStructureTool_Face {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CageStructureTool_Face__Class** type_info = (::app::CageStructureTool_Face__Class**)(modloader::win::memory::resolve_rva(0x04790CC8));
    }
    namespace SeinDashNew {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinDashNew__Class** type_info = (::app::SeinDashNew__Class**)(modloader::win::memory::resolve_rva(0x04776E58));
    }
    namespace SeinDashNew_PreDashDelegateType {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinDashNew_PreDashDelegateType__Class** type_info = (::app::SeinDashNew_PreDashDelegateType__Class**)(modloader::win::memory::resolve_rva(0x04736BE8));
    }
    namespace PlatformMovement {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlatformMovement__Class** type_info = (::app::PlatformMovement__Class**)(modloader::win::memory::resolve_rva(0x04757B60));
    }
    namespace IsOnCollisionState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IsOnCollisionState__Class** type_info = (::app::IsOnCollisionState__Class**)(modloader::win::memory::resolve_rva(0x04790050));
    }
    namespace MovingPlatformsController {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MovingPlatformsController__Class** type_info = (::app::MovingPlatformsController__Class**)(modloader::win::memory::resolve_rva(0x04747218));
    }
    namespace GrabbableSurface {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GrabbableSurface__Class** type_info = (::app::GrabbableSurface__Class**)(modloader::win::memory::resolve_rva(0x04769B90));
    }
    namespace GrabbableSurface_PositionInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GrabbableSurface_PositionInfo__Class** type_info = (::app::GrabbableSurface_PositionInfo__Class**)(modloader::win::memory::resolve_rva(0x04732EB0));
    }
    namespace GrabbableSurface__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GrabbableSurface__Array__Class** type_info = (::app::GrabbableSurface__Array__Class**)(modloader::win::memory::resolve_rva(0x04718F20));
    }
    namespace CharacterPlatformMovement {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CharacterPlatformMovement__Class** type_info = (::app::CharacterPlatformMovement__Class**)(modloader::win::memory::resolve_rva(0x0472B818));
    }
    namespace MoonControllerColliderHit {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonControllerColliderHit__Class** type_info = (::app::MoonControllerColliderHit__Class**)(modloader::win::memory::resolve_rva(0x04797E48));
    }
    namespace DamageDealer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DamageDealer__Class** type_info = (::app::DamageDealer__Class**)(modloader::win::memory::resolve_rva(0x047926D8));
    }
    namespace DamageDealer_OverrideInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DamageDealer_OverrideInfo__Class** type_info = (::app::DamageDealer_OverrideInfo__Class**)(modloader::win::memory::resolve_rva(0x0470FBA0));
    }
    namespace DamageDealer_TweakDamageDelegate {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DamageDealer_TweakDamageDelegate__Class** type_info = (::app::DamageDealer_TweakDamageDelegate__Class**)(modloader::win::memory::resolve_rva(0x0476AD70));
    }
    namespace Polygon_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Polygon_1__Class** type_info = (::app::Polygon_1__Class**)(modloader::win::memory::resolve_rva(0x04758258));
    }
    namespace Polygon_ShapeData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Polygon_ShapeData__Class** type_info = (::app::Polygon_ShapeData__Class**)(modloader::win::memory::resolve_rva(0x04708120));
    }
    namespace CharacterPlatformMovement_KickbackEntry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CharacterPlatformMovement_KickbackEntry__Class** type_info = (::app::CharacterPlatformMovement_KickbackEntry__Class**)(modloader::win::memory::resolve_rva(0x047714E0));
    }
    namespace PlatformingFXFunctionality {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlatformingFXFunctionality__Class** type_info = (::app::PlatformingFXFunctionality__Class**)(modloader::win::memory::resolve_rva(0x04794980));
    }
    namespace TimeDistanceGate {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TimeDistanceGate__Class** type_info = (::app::TimeDistanceGate__Class**)(modloader::win::memory::resolve_rva(0x04711360));
    }
} // namespace app::classes::types
