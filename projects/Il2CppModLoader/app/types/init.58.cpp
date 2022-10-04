#include <Il2CppModLoader/app/types/ActionNode_1.h>
#include <Il2CppModLoader/app/types/ActionSequence.h>
#include <Il2CppModLoader/app/types/AutoRecorder.h>
#include <Il2CppModLoader/app/types/BaseAnimator__Array.h>
#include <Il2CppModLoader/app/types/BaseTimelineSequence.h>
#include <Il2CppModLoader/app/types/BehaviourEvents.h>
#include <Il2CppModLoader/app/types/BehaviourStates.h>
#include <Il2CppModLoader/app/types/BehaviourTree_1.h>
#include <Il2CppModLoader/app/types/CageStructureTool.h>
#include <Il2CppModLoader/app/types/CageStructureTool_Edge.h>
#include <Il2CppModLoader/app/types/CageStructureTool_Face.h>
#include <Il2CppModLoader/app/types/CageStructureTool_Vertex.h>
#include <Il2CppModLoader/app/types/CartFlip.h>
#include <Il2CppModLoader/app/types/CartLogicCycle_IsAllowedDelegate.h>
#include <Il2CppModLoader/app/types/CartStopper.h>
#include <Il2CppModLoader/app/types/CharacterLeftRightMovement_PreDashDelegateType.h>
#include <Il2CppModLoader/app/types/CharacterPlatformMovement.h>
#include <Il2CppModLoader/app/types/CharacterPlatformMovement_KickbackEntry.h>
#include <Il2CppModLoader/app/types/CharacterPlatformMovement_ScheduledSpeedCurve.h>
#include <Il2CppModLoader/app/types/ComboInput.h>
#include <Il2CppModLoader/app/types/Damage.h>
#include <Il2CppModLoader/app/types/DamageDealer.h>
#include <Il2CppModLoader/app/types/DamageDealer_OverrideInfo.h>
#include <Il2CppModLoader/app/types/DamageDealer_TweakDamageDelegate.h>
#include <Il2CppModLoader/app/types/DamageLayerMask__Enum.h>
#include <Il2CppModLoader/app/types/DamageLayer__Enum.h>
#include <Il2CppModLoader/app/types/DamageOwner.h>
#include <Il2CppModLoader/app/types/DamageReceiver.h>
#include <Il2CppModLoader/app/types/DamageReceiver_DamageEntry.h>
#include <Il2CppModLoader/app/types/DamageReceiver_OverrideInfo.h>
#include <Il2CppModLoader/app/types/DamageResult.h>
#include <Il2CppModLoader/app/types/DamageType__Enum.h>
#include <Il2CppModLoader/app/types/DamageWeight__Enum.h>
#include <Il2CppModLoader/app/types/DelayedAction.h>
#include <Il2CppModLoader/app/types/DelayedAction_Action.h>
#include <Il2CppModLoader/app/types/DigZone.h>
#include <Il2CppModLoader/app/types/EnemyEntity.h>
#include <Il2CppModLoader/app/types/EntityControllerBT.h>
#include <Il2CppModLoader/app/types/EntityTargetting.h>
#include <Il2CppModLoader/app/types/ExternalForceEntry.h>
#include <Il2CppModLoader/app/types/GenericSpring1D_Particle.h>
#include <Il2CppModLoader/app/types/GrabbableSurface.h>
#include <Il2CppModLoader/app/types/GrabbableSurface_PositionInfo.h>
#include <Il2CppModLoader/app/types/GrabbableSurface__Array.h>
#include <Il2CppModLoader/app/types/GravityPlatformMovementSettings.h>
#include <Il2CppModLoader/app/types/HealthBar.h>
#include <Il2CppModLoader/app/types/HorizontalPlatformMovementSettings.h>
#include <Il2CppModLoader/app/types/HorizontalPlatformMovementSettings_SpeedMultiplierSet.h>
#include <Il2CppModLoader/app/types/HorizontalPlatformMovementSettings_SpeedSet.h>
#include <Il2CppModLoader/app/types/IAction.h>
#include <Il2CppModLoader/app/types/IAttackable.h>
#include <Il2CppModLoader/app/types/IBashAttackable.h>
#include <Il2CppModLoader/app/types/IBehaviourEvent.h>
#include <Il2CppModLoader/app/types/IBehaviourState.h>
#include <Il2CppModLoader/app/types/ICameraFrustumSuspendable.h>
#include <Il2CppModLoader/app/types/ICameraFrustumSuspendable__Array.h>
#include <Il2CppModLoader/app/types/ICharacterTurningHandler.h>
#include <Il2CppModLoader/app/types/IDamageReciever.h>
#include <Il2CppModLoader/app/types/IDamageReciever__Array.h>
#include <Il2CppModLoader/app/types/IEntry.h>
#include <Il2CppModLoader/app/types/IGrabbableRope.h>
#include <Il2CppModLoader/app/types/IPushable.h>
#include <Il2CppModLoader/app/types/IState_2.h>
#include <Il2CppModLoader/app/types/IState_2__Array.h>
#include <Il2CppModLoader/app/types/InterfaceCache.h>
#include <Il2CppModLoader/app/types/IsOnCollisionState.h>
#include <Il2CppModLoader/app/types/LegacyAnimator__Array.h>
#include <Il2CppModLoader/app/types/LegacyDamageReciever.h>
#include <Il2CppModLoader/app/types/LegacyEntityDamageReciever.h>
#include <Il2CppModLoader/app/types/LegacyEntityDamageReciever_ModifyDamageDelegate.h>
#include <Il2CppModLoader/app/types/LegacyTimelineSequence.h>
#include <Il2CppModLoader/app/types/LegacyTimelineSequence_SequenceEntry.h>
#include <Il2CppModLoader/app/types/LegacyTimelineSequence_SequenceEntry_Constraint.h>
#include <Il2CppModLoader/app/types/MasterTimelineSequence.h>
#include <Il2CppModLoader/app/types/MasterTimelineSequence_SceneEntry.h>
#include <Il2CppModLoader/app/types/MoonControllerColliderHit.h>
#include <Il2CppModLoader/app/types/MovingPlatformsController.h>
#include <Il2CppModLoader/app/types/PerformingAction.h>
#include <Il2CppModLoader/app/types/PlatformMovement.h>
#include <Il2CppModLoader/app/types/PlatformingFXFunctionality.h>
#include <Il2CppModLoader/app/types/Polygon_1.h>
#include <Il2CppModLoader/app/types/Polygon_ShapeData.h>
#include <Il2CppModLoader/app/types/PushPullBlock.h>
#include <Il2CppModLoader/app/types/Rail.h>
#include <Il2CppModLoader/app/types/RaycastCommand__Array.h>
#include <Il2CppModLoader/app/types/RuntimeSceneMetaData.h>
#include <Il2CppModLoader/app/types/SceneSoundBankData.h>
#include <Il2CppModLoader/app/types/SeinBashAttack.h>
#include <Il2CppModLoader/app/types/SeinChargeJump.h>
#include <Il2CppModLoader/app/types/SeinDashNew.h>
#include <Il2CppModLoader/app/types/SeinDashNew_PreDashDelegateType.h>
#include <Il2CppModLoader/app/types/SeinDigging_DiggingEffects__Array.h>
#include <Il2CppModLoader/app/types/SeinStomp.h>
#include <Il2CppModLoader/app/types/SeinStomp_States.h>
#include <Il2CppModLoader/app/types/SeinSwimming.h>
#include <Il2CppModLoader/app/types/StateMachine_2.h>
#include <Il2CppModLoader/app/types/TickData.h>
#include <Il2CppModLoader/app/types/TimeDistanceGate.h>
#include <Il2CppModLoader/app/types/TransitionManager_1.h>
#include <Il2CppModLoader/app/types/Transition_1.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DamageWeight__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DamageWeight__Enum__Class** type_info = (::app::DamageWeight__Enum__Class**)(modloader::win::memory::resolve_rva(0x0473B460));
    }
    namespace SeinChargeJump {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinChargeJump__Class** type_info = (::app::SeinChargeJump__Class**)(modloader::win::memory::resolve_rva(0x0478F340));
    }
    namespace IAttackable {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IAttackable__Class** type_info = (::app::IAttackable__Class**)(modloader::win::memory::resolve_rva(0x04747628));
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
    namespace IState_2 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IState_2__Class** type_info = (::app::IState_2__Class**)(modloader::win::memory::resolve_rva(0x04761E58));
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
    namespace IAction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IAction__Class** type_info = (::app::IAction__Class**)(modloader::win::memory::resolve_rva(0x04712F58));
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
    namespace IDamageReciever {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IDamageReciever__Class** type_info = (::app::IDamageReciever__Class**)(modloader::win::memory::resolve_rva(0x04731E80));
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
    namespace IPushable {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IPushable__Class** type_info = (::app::IPushable__Class**)(modloader::win::memory::resolve_rva(0x04755EB8));
    }
    namespace IGrabbableRope {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IGrabbableRope__Class** type_info = (::app::IGrabbableRope__Class**)(modloader::win::memory::resolve_rva(0x04771AC8));
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
    namespace ExternalForceEntry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ExternalForceEntry__Class** type_info = (::app::ExternalForceEntry__Class**)(modloader::win::memory::resolve_rva(0x0476CD30));
    }
    namespace RaycastCommand__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RaycastCommand__Array__Class** type_info = (::app::RaycastCommand__Array__Class**)(modloader::win::memory::resolve_rva(0x0474CE18));
    }
    namespace SeinBashAttack {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinBashAttack__Class** type_info = (::app::SeinBashAttack__Class**)(modloader::win::memory::resolve_rva(0x04781EE0));
    }
    namespace IBashAttackable {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IBashAttackable__Class** type_info = (::app::IBashAttackable__Class**)(modloader::win::memory::resolve_rva(0x04701138));
    }
    namespace EntityTargetting {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EntityTargetting__Class** type_info = (::app::EntityTargetting__Class**)(modloader::win::memory::resolve_rva(0x04769B00));
    }
    namespace EntityControllerBT {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EntityControllerBT__Class** type_info = (::app::EntityControllerBT__Class**)(modloader::win::memory::resolve_rva(0x04755B80));
    }
    namespace BehaviourTree_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BehaviourTree_1__Class** type_info = (::app::BehaviourTree_1__Class**)(modloader::win::memory::resolve_rva(0x047193B0));
    }
    namespace ActionNode_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ActionNode_1__Class** type_info = (::app::ActionNode_1__Class**)(modloader::win::memory::resolve_rva(0x0478C740));
    }
    namespace TickData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TickData__Class** type_info = (::app::TickData__Class**)(modloader::win::memory::resolve_rva(0x04701630));
    }
    namespace BehaviourStates {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BehaviourStates__Class** type_info = (::app::BehaviourStates__Class**)(modloader::win::memory::resolve_rva(0x04717360));
    }
    namespace IBehaviourState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IBehaviourState__Class** type_info = (::app::IBehaviourState__Class**)(modloader::win::memory::resolve_rva(0x0478CF98));
    }
    namespace BehaviourEvents {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BehaviourEvents__Class** type_info = (::app::BehaviourEvents__Class**)(modloader::win::memory::resolve_rva(0x04770658));
    }
    namespace IBehaviourEvent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IBehaviourEvent__Class** type_info = (::app::IBehaviourEvent__Class**)(modloader::win::memory::resolve_rva(0x0474DBF0));
    }
    namespace LegacyDamageReciever {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LegacyDamageReciever__Class** type_info = (::app::LegacyDamageReciever__Class**)(modloader::win::memory::resolve_rva(0x04797378));
    }
    namespace LegacyEntityDamageReciever {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LegacyEntityDamageReciever__Class** type_info = (::app::LegacyEntityDamageReciever__Class**)(modloader::win::memory::resolve_rva(0x04796C50));
    }
    namespace LegacyEntityDamageReciever_ModifyDamageDelegate {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LegacyEntityDamageReciever_ModifyDamageDelegate__Class** type_info = (::app::LegacyEntityDamageReciever_ModifyDamageDelegate__Class**)(modloader::win::memory::resolve_rva(0x04713F20));
    }
    namespace DamageLayer__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DamageLayer__Enum__Class** type_info = (::app::DamageLayer__Enum__Class**)(modloader::win::memory::resolve_rva(0x04757010));
    }
    namespace DamageReceiver {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DamageReceiver__Class** type_info = (::app::DamageReceiver__Class**)(modloader::win::memory::resolve_rva(0x04764D28));
    }
    namespace DamageReceiver_OverrideInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DamageReceiver_OverrideInfo__Class** type_info = (::app::DamageReceiver_OverrideInfo__Class**)(modloader::win::memory::resolve_rva(0x04723828));
    }
    namespace DamageReceiver_DamageEntry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DamageReceiver_DamageEntry__Class** type_info = (::app::DamageReceiver_DamageEntry__Class**)(modloader::win::memory::resolve_rva(0x0472B158));
    }
    namespace InterfaceCache {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InterfaceCache__Class** type_info = (::app::InterfaceCache__Class**)(modloader::win::memory::resolve_rva(0x04723AB8));
    }
    namespace IDamageReciever__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IDamageReciever__Array__Class** type_info = (::app::IDamageReciever__Array__Class**)(modloader::win::memory::resolve_rva(0x047678D8));
    }
    namespace EnemyEntity {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EnemyEntity__Class** type_info = (::app::EnemyEntity__Class**)(modloader::win::memory::resolve_rva(0x0478CFE8));
    }
    namespace ICameraFrustumSuspendable {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ICameraFrustumSuspendable__Class** type_info = (::app::ICameraFrustumSuspendable__Class**)(modloader::win::memory::resolve_rva(0x047802E8));
    }
    namespace ICameraFrustumSuspendable__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ICameraFrustumSuspendable__Array__Class** type_info = (::app::ICameraFrustumSuspendable__Array__Class**)(modloader::win::memory::resolve_rva(0x04768A50));
    }
    namespace HealthBar {
        IL2CPP_MODLOADER_DLLEXPORT ::app::HealthBar__Class** type_info = (::app::HealthBar__Class**)(modloader::win::memory::resolve_rva(0x04780D78));
    }
    namespace CartLogicCycle_IsAllowedDelegate {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CartLogicCycle_IsAllowedDelegate__Class** type_info = (::app::CartLogicCycle_IsAllowedDelegate__Class**)(modloader::win::memory::resolve_rva(0x04708500));
    }
    namespace CharacterLeftRightMovement_PreDashDelegateType {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CharacterLeftRightMovement_PreDashDelegateType__Class** type_info = (::app::CharacterLeftRightMovement_PreDashDelegateType__Class**)(modloader::win::memory::resolve_rva(0x0470A6B0));
    }
    namespace ICharacterTurningHandler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ICharacterTurningHandler__Class** type_info = (::app::ICharacterTurningHandler__Class**)(modloader::win::memory::resolve_rva(0x04721530));
    }
    namespace BaseTimelineSequence {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BaseTimelineSequence__Class** type_info = (::app::BaseTimelineSequence__Class**)(modloader::win::memory::resolve_rva(0x0473DDD0));
    }
    namespace LegacyTimelineSequence {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LegacyTimelineSequence__Class** type_info = (::app::LegacyTimelineSequence__Class**)(modloader::win::memory::resolve_rva(0x0470F4B8));
    }
    namespace IEntry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IEntry__Class** type_info = (::app::IEntry__Class**)(modloader::win::memory::resolve_rva(0x04753520));
    }
    namespace BaseAnimator__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BaseAnimator__Array__Class** type_info = (::app::BaseAnimator__Array__Class**)(modloader::win::memory::resolve_rva(0x0474DEA8));
    }
    namespace MasterTimelineSequence {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MasterTimelineSequence__Class** type_info = (::app::MasterTimelineSequence__Class**)(modloader::win::memory::resolve_rva(0x04721298));
    }
    namespace RuntimeSceneMetaData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RuntimeSceneMetaData__Class** type_info = (::app::RuntimeSceneMetaData__Class**)(modloader::win::memory::resolve_rva(0x0478A550));
    }
    namespace SceneSoundBankData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SceneSoundBankData__Class** type_info = (::app::SceneSoundBankData__Class**)(modloader::win::memory::resolve_rva(0x0478DD10));
    }
    namespace MasterTimelineSequence_SceneEntry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MasterTimelineSequence_SceneEntry__Class** type_info = (::app::MasterTimelineSequence_SceneEntry__Class**)(modloader::win::memory::resolve_rva(0x04760068));
    }
    namespace PerformingAction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PerformingAction__Class** type_info = (::app::PerformingAction__Class**)(modloader::win::memory::resolve_rva(0x04740B68));
    }
    namespace ActionSequence {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ActionSequence__Class** type_info = (::app::ActionSequence__Class**)(modloader::win::memory::resolve_rva(0x0471D558));
    }
    namespace AutoRecorder {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AutoRecorder__Class** type_info = (::app::AutoRecorder__Class**)(modloader::win::memory::resolve_rva(0x04776F38));
    }
    namespace LegacyTimelineSequence_SequenceEntry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LegacyTimelineSequence_SequenceEntry__Class** type_info = (::app::LegacyTimelineSequence_SequenceEntry__Class**)(modloader::win::memory::resolve_rva(0x047997D8));
    }
    namespace LegacyTimelineSequence_SequenceEntry_Constraint {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LegacyTimelineSequence_SequenceEntry_Constraint__Class** type_info = (::app::LegacyTimelineSequence_SequenceEntry_Constraint__Class**)(modloader::win::memory::resolve_rva(0x04774EC8));
    }
    namespace GenericSpring1D_Particle {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GenericSpring1D_Particle__Class** type_info = (::app::GenericSpring1D_Particle__Class**)(modloader::win::memory::resolve_rva(0x0473E368));
    }
    namespace CartFlip {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CartFlip__Class** type_info = (::app::CartFlip__Class**)(modloader::win::memory::resolve_rva(0x04776568));
    }
    namespace CartStopper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CartStopper__Class** type_info = (::app::CartStopper__Class**)(modloader::win::memory::resolve_rva(0x0478D7E8));
    }
    namespace Rail {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Rail__Class** type_info = (::app::Rail__Class**)(modloader::win::memory::resolve_rva(0x047175C0));
    }
    namespace PushPullBlock {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PushPullBlock__Class** type_info = (::app::PushPullBlock__Class**)(modloader::win::memory::resolve_rva(0x04765E80));
    }
} // namespace app::classes::types
