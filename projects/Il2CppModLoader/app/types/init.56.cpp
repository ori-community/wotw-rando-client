#include <Il2CppModLoader/app/types/ActionNode_1.h>
#include <Il2CppModLoader/app/types/ActionSequence.h>
#include <Il2CppModLoader/app/types/ActivateCooldownRule__Array.h>
#include <Il2CppModLoader/app/types/AnimationLayerContext.h>
#include <Il2CppModLoader/app/types/ArrowHitData.h>
#include <Il2CppModLoader/app/types/AutoRecorder.h>
#include <Il2CppModLoader/app/types/BaseAnimator__Array.h>
#include <Il2CppModLoader/app/types/BaseTimelineSequence.h>
#include <Il2CppModLoader/app/types/BehaviourEvents.h>
#include <Il2CppModLoader/app/types/BehaviourStates.h>
#include <Il2CppModLoader/app/types/BehaviourTree_1.h>
#include <Il2CppModLoader/app/types/CameraTargetData.h>
#include <Il2CppModLoader/app/types/CartFlip.h>
#include <Il2CppModLoader/app/types/CartLogicCycle_IsAllowedDelegate.h>
#include <Il2CppModLoader/app/types/CartStopper.h>
#include <Il2CppModLoader/app/types/CharacterLeftRightMovement_PreDashDelegateType.h>
#include <Il2CppModLoader/app/types/CleverMenuItemSelectionManager_NavigationData.h>
#include <Il2CppModLoader/app/types/CleverMenuItem__Array.h>
#include <Il2CppModLoader/app/types/ComboMoveStressTest.h>
#include <Il2CppModLoader/app/types/DamageLayer__Enum.h>
#include <Il2CppModLoader/app/types/DamageReceiver.h>
#include <Il2CppModLoader/app/types/DamageReceiver_DamageEntry.h>
#include <Il2CppModLoader/app/types/DamageReceiver_OverrideInfo.h>
#include <Il2CppModLoader/app/types/DamageReceiver__Array.h>
#include <Il2CppModLoader/app/types/DamageType__Enum__Array.h>
#include <Il2CppModLoader/app/types/EnemyEntity.h>
#include <Il2CppModLoader/app/types/EntityBehaviourNode.h>
#include <Il2CppModLoader/app/types/EntityControllerBT.h>
#include <Il2CppModLoader/app/types/EntityFallEvent.h>
#include <Il2CppModLoader/app/types/EntityTargetting.h>
#include <Il2CppModLoader/app/types/ExternalForceEntry.h>
#include <Il2CppModLoader/app/types/ForceRefreshAnimatorContext.h>
#include <Il2CppModLoader/app/types/GenericSpring1D_Particle.h>
#include <Il2CppModLoader/app/types/GroundEntityLocomotion.h>
#include <Il2CppModLoader/app/types/GroundEntityMovementProcessor.h>
#include <Il2CppModLoader/app/types/HealthBar.h>
#include <Il2CppModLoader/app/types/ICameraFrustumSuspendable__Array.h>
#include <Il2CppModLoader/app/types/IDamageReciever__Array.h>
#include <Il2CppModLoader/app/types/Input_InputButtonProcessor.h>
#include <Il2CppModLoader/app/types/InstantiationRecycleHelper.h>
#include <Il2CppModLoader/app/types/InterfaceCache.h>
#include <Il2CppModLoader/app/types/Kickback.h>
#include <Il2CppModLoader/app/types/LegacyDamageReciever.h>
#include <Il2CppModLoader/app/types/LegacyEntityDamageReciever.h>
#include <Il2CppModLoader/app/types/LegacyEntityDamageReciever_ModifyDamageDelegate.h>
#include <Il2CppModLoader/app/types/LegacyTimelineSequence.h>
#include <Il2CppModLoader/app/types/LegacyTimelineSequence_SequenceEntry.h>
#include <Il2CppModLoader/app/types/LegacyTimelineSequence_SequenceEntry_Constraint.h>
#include <Il2CppModLoader/app/types/LegacyTransparencyAnimator.h>
#include <Il2CppModLoader/app/types/LegacyTransparencyAnimator_RendererData.h>
#include <Il2CppModLoader/app/types/Locomotion.h>
#include <Il2CppModLoader/app/types/LocomotionContext.h>
#include <Il2CppModLoader/app/types/LocomotionGroundMoveTimelineBehaviour.h>
#include <Il2CppModLoader/app/types/MasterTimelineSequence.h>
#include <Il2CppModLoader/app/types/MasterTimelineSequence_SceneEntry.h>
#include <Il2CppModLoader/app/types/MeleeComboMove.h>
#include <Il2CppModLoader/app/types/MeleeComboMoveHammerBase.h>
#include <Il2CppModLoader/app/types/MeleePositionInterpolator.h>
#include <Il2CppModLoader/app/types/MeleeWeapon.h>
#include <Il2CppModLoader/app/types/MeleeWeaponColliderStick.h>
#include <Il2CppModLoader/app/types/MeleeWeaponColliderStick_DebugCircle.h>
#include <Il2CppModLoader/app/types/MeleeWeaponHammer.h>
#include <Il2CppModLoader/app/types/PerformingAction.h>
#include <Il2CppModLoader/app/types/PushPullBlock.h>
#include <Il2CppModLoader/app/types/Rail.h>
#include <Il2CppModLoader/app/types/RaycastCommand__Array.h>
#include <Il2CppModLoader/app/types/RideableTypes__Enum.h>
#include <Il2CppModLoader/app/types/RootMotionProcessor.h>
#include <Il2CppModLoader/app/types/RootMotionProcessorData.h>
#include <Il2CppModLoader/app/types/RuntimeSceneMetaData.h>
#include <Il2CppModLoader/app/types/SceneSoundBankData.h>
#include <Il2CppModLoader/app/types/SeinBashAttack.h>
#include <Il2CppModLoader/app/types/SeinBowAttack.h>
#include <Il2CppModLoader/app/types/SeinBowAttack_Settings.h>
#include <Il2CppModLoader/app/types/SeinCarry_States.h>
#include <Il2CppModLoader/app/types/SeinChargeFlameAbility.h>
#include <Il2CppModLoader/app/types/SeinChargeFlameAbility_States.h>
#include <Il2CppModLoader/app/types/SeinCinematic.h>
#include <Il2CppModLoader/app/types/SeinComboHandler_StubbedComboMove.h>
#include <Il2CppModLoader/app/types/SeinDashAttack.h>
#include <Il2CppModLoader/app/types/SeinHold.h>
#include <Il2CppModLoader/app/types/SeinHold_States.h>
#include <Il2CppModLoader/app/types/SeinInteraction_ThrownKeystone.h>
#include <Il2CppModLoader/app/types/SeinJumpHandler.h>
#include <Il2CppModLoader/app/types/SeinMeleeAttack.h>
#include <Il2CppModLoader/app/types/SeinSpiritLeashAbility.h>
#include <Il2CppModLoader/app/types/SeinSpiritLeashAbility_RayDependency__Array.h>
#include <Il2CppModLoader/app/types/SeinStandardSpiritFlameAbility_PoisonSettings.h>
#include <Il2CppModLoader/app/types/SeinStandingOnEdge.h>
#include <Il2CppModLoader/app/types/ShotCombo.h>
#include <Il2CppModLoader/app/types/SpherecastCommand__Array.h>
#include <Il2CppModLoader/app/types/SpiritFlameProjectileOffsetGenerator.h>
#include <Il2CppModLoader/app/types/State_2.h>
#include <Il2CppModLoader/app/types/TargetSpheres.h>
#include <Il2CppModLoader/app/types/TickData.h>
#include <Il2CppModLoader/app/types/UberShaderProperty_Color__Enum__Array.h>
#include <Il2CppModLoader/app/types/Varying2DSoundProvider.h>
#include <Il2CppModLoader/app/types/Vitals_DamageProcessHelper.h>
#include <Il2CppModLoader/app/types/Vitals_DamageProcessHelper_DamageBucket.h>
#include <Il2CppModLoader/app/types/Vitals_DamageProcessHelper_SortedDamageEntry.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExternalForceEntry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ExternalForceEntry__Class** type_info = (::app::ExternalForceEntry__Class**)(modloader::win::memory::resolve_rva(0x0476CD30));
    }
    namespace RaycastCommand__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RaycastCommand__Array__Class** type_info = (::app::RaycastCommand__Array__Class**)(modloader::win::memory::resolve_rva(0x0474CE18));
    }
    namespace SeinBashAttack {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinBashAttack__Class** type_info = (::app::SeinBashAttack__Class**)(modloader::win::memory::resolve_rva(0x04781EE0));
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
    namespace BehaviourEvents {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BehaviourEvents__Class** type_info = (::app::BehaviourEvents__Class**)(modloader::win::memory::resolve_rva(0x04770658));
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
    namespace BaseTimelineSequence {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BaseTimelineSequence__Class** type_info = (::app::BaseTimelineSequence__Class**)(modloader::win::memory::resolve_rva(0x0473DDD0));
    }
    namespace LegacyTimelineSequence {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LegacyTimelineSequence__Class** type_info = (::app::LegacyTimelineSequence__Class**)(modloader::win::memory::resolve_rva(0x0470F4B8));
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
    namespace RideableTypes__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RideableTypes__Enum__Class** type_info = (::app::RideableTypes__Enum__Class**)(modloader::win::memory::resolve_rva(0x04717B60));
    }
    namespace CameraTargetData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CameraTargetData__Class** type_info = (::app::CameraTargetData__Class**)(modloader::win::memory::resolve_rva(0x04794050));
    }
    namespace Locomotion {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Locomotion__Class** type_info = (::app::Locomotion__Class**)(modloader::win::memory::resolve_rva(0x04717448));
    }
    namespace LocomotionContext {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LocomotionContext__Class** type_info = (::app::LocomotionContext__Class**)(modloader::win::memory::resolve_rva(0x0472CFF8));
    }
    namespace RootMotionProcessor {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RootMotionProcessor__Class** type_info = (::app::RootMotionProcessor__Class**)(modloader::win::memory::resolve_rva(0x047111A8));
    }
    namespace RootMotionProcessorData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RootMotionProcessorData__Class** type_info = (::app::RootMotionProcessorData__Class**)(modloader::win::memory::resolve_rva(0x04734228));
    }
    namespace EntityBehaviourNode {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EntityBehaviourNode__Class** type_info = (::app::EntityBehaviourNode__Class**)(modloader::win::memory::resolve_rva(0x0474D460));
    }
    namespace GroundEntityLocomotion {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GroundEntityLocomotion__Class** type_info = (::app::GroundEntityLocomotion__Class**)(modloader::win::memory::resolve_rva(0x0470CFD8));
    }
    namespace GroundEntityMovementProcessor {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GroundEntityMovementProcessor__Class** type_info = (::app::GroundEntityMovementProcessor__Class**)(modloader::win::memory::resolve_rva(0x04740500));
    }
    namespace LocomotionGroundMoveTimelineBehaviour {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LocomotionGroundMoveTimelineBehaviour__Class** type_info = (::app::LocomotionGroundMoveTimelineBehaviour__Class**)(modloader::win::memory::resolve_rva(0x0474CE68));
    }
    namespace EntityFallEvent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EntityFallEvent__Class** type_info = (::app::EntityFallEvent__Class**)(modloader::win::memory::resolve_rva(0x0478DFA8));
    }
    namespace DamageReceiver__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DamageReceiver__Array__Class** type_info = (::app::DamageReceiver__Array__Class**)(modloader::win::memory::resolve_rva(0x0470A450));
    }
    namespace Vitals_DamageProcessHelper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Vitals_DamageProcessHelper__Class** type_info = (::app::Vitals_DamageProcessHelper__Class**)(modloader::win::memory::resolve_rva(0x04714380));
    }
    namespace Vitals_DamageProcessHelper_SortedDamageEntry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Vitals_DamageProcessHelper_SortedDamageEntry__Class** type_info = (::app::Vitals_DamageProcessHelper_SortedDamageEntry__Class**)(modloader::win::memory::resolve_rva(0x04788440));
    }
    namespace Vitals_DamageProcessHelper_DamageBucket {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Vitals_DamageProcessHelper_DamageBucket__Class** type_info = (::app::Vitals_DamageProcessHelper_DamageBucket__Class**)(modloader::win::memory::resolve_rva(0x04758250));
    }
    namespace TargetSpheres {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TargetSpheres__Class** type_info = (::app::TargetSpheres__Class**)(modloader::win::memory::resolve_rva(0x047012C8));
    }
    namespace SpiritFlameProjectileOffsetGenerator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SpiritFlameProjectileOffsetGenerator__Class** type_info = (::app::SpiritFlameProjectileOffsetGenerator__Class**)(modloader::win::memory::resolve_rva(0x0475A378));
    }
    namespace ArrowHitData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ArrowHitData__Class** type_info = (::app::ArrowHitData__Class**)(modloader::win::memory::resolve_rva(0x04779408));
    }
    namespace ShotCombo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShotCombo__Class** type_info = (::app::ShotCombo__Class**)(modloader::win::memory::resolve_rva(0x04786898));
    }
    namespace SeinStandardSpiritFlameAbility_PoisonSettings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinStandardSpiritFlameAbility_PoisonSettings__Class** type_info = (::app::SeinStandardSpiritFlameAbility_PoisonSettings__Class**)(modloader::win::memory::resolve_rva(0x04775540));
    }
    namespace Varying2DSoundProvider {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Varying2DSoundProvider__Class** type_info = (::app::Varying2DSoundProvider__Class**)(modloader::win::memory::resolve_rva(0x0474C388));
    }
    namespace SeinCarry_States {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinCarry_States__Class** type_info = (::app::SeinCarry_States__Class**)(modloader::win::memory::resolve_rva(0x04772A20));
    }
    namespace SeinHold {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinHold__Class** type_info = (::app::SeinHold__Class**)(modloader::win::memory::resolve_rva(0x0473A918));
    }
    namespace SeinHold_States {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinHold_States__Class** type_info = (::app::SeinHold_States__Class**)(modloader::win::memory::resolve_rva(0x0472FC68));
    }
    namespace LegacyTransparencyAnimator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LegacyTransparencyAnimator__Class** type_info = (::app::LegacyTransparencyAnimator__Class**)(modloader::win::memory::resolve_rva(0x04755F48));
    }
    namespace UberShaderProperty_Color__Enum__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberShaderProperty_Color__Enum__Array__Class** type_info = (::app::UberShaderProperty_Color__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x0475A080));
    }
    namespace LegacyTransparencyAnimator_RendererData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LegacyTransparencyAnimator_RendererData__Class** type_info = (::app::LegacyTransparencyAnimator_RendererData__Class**)(modloader::win::memory::resolve_rva(0x04720800));
    }
    namespace ForceRefreshAnimatorContext {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ForceRefreshAnimatorContext__Class** type_info = (::app::ForceRefreshAnimatorContext__Class**)(modloader::win::memory::resolve_rva(0x0477EC70));
    }
    namespace CleverMenuItemSelectionManager_NavigationData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CleverMenuItemSelectionManager_NavigationData__Class** type_info = (::app::CleverMenuItemSelectionManager_NavigationData__Class**)(modloader::win::memory::resolve_rva(0x04784D28));
    }
    namespace CleverMenuItem__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CleverMenuItem__Array__Class** type_info = (::app::CleverMenuItem__Array__Class**)(modloader::win::memory::resolve_rva(0x0470E5F0));
    }
    namespace SeinStandingOnEdge {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinStandingOnEdge__Class** type_info = (::app::SeinStandingOnEdge__Class**)(modloader::win::memory::resolve_rva(0x04703128));
    }
    namespace SeinInteraction_ThrownKeystone {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinInteraction_ThrownKeystone__Class** type_info = (::app::SeinInteraction_ThrownKeystone__Class**)(modloader::win::memory::resolve_rva(0x047734A8));
    }
    namespace SeinCinematic {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinCinematic__Class** type_info = (::app::SeinCinematic__Class**)(modloader::win::memory::resolve_rva(0x0476EFC8));
    }
    namespace SeinChargeFlameAbility {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinChargeFlameAbility__Class** type_info = (::app::SeinChargeFlameAbility__Class**)(modloader::win::memory::resolve_rva(0x04763798));
    }
    namespace SeinChargeFlameAbility_States {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinChargeFlameAbility_States__Class** type_info = (::app::SeinChargeFlameAbility_States__Class**)(modloader::win::memory::resolve_rva(0x047526D8));
    }
    namespace State_2 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::State_2__Class** type_info = (::app::State_2__Class**)(modloader::win::memory::resolve_rva(0x04745D48));
    }
    namespace SeinDashAttack {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinDashAttack__Class** type_info = (::app::SeinDashAttack__Class**)(modloader::win::memory::resolve_rva(0x04775698));
    }
    namespace Input_InputButtonProcessor {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Input_InputButtonProcessor__Class** type_info = (::app::Input_InputButtonProcessor__Class**)(modloader::win::memory::resolve_rva(0x047792E0));
    }
    namespace SeinSpiritLeashAbility {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinSpiritLeashAbility__Class** type_info = (::app::SeinSpiritLeashAbility__Class**)(modloader::win::memory::resolve_rva(0x04797FD8));
    }
    namespace DamageType__Enum__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DamageType__Enum__Array__Class** type_info = (::app::DamageType__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x0472DDD8));
    }
    namespace SeinSpiritLeashAbility_RayDependency__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinSpiritLeashAbility_RayDependency__Array__Class** type_info = (::app::SeinSpiritLeashAbility_RayDependency__Array__Class**)(modloader::win::memory::resolve_rva(0x0474DC50));
    }
    namespace SpherecastCommand__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SpherecastCommand__Array__Class** type_info = (::app::SpherecastCommand__Array__Class**)(modloader::win::memory::resolve_rva(0x0472A830));
    }
    namespace AnimationLayerContext {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationLayerContext__Class** type_info = (::app::AnimationLayerContext__Class**)(modloader::win::memory::resolve_rva(0x0470AE48));
    }
    namespace SeinBowAttack {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinBowAttack__Class** type_info = (::app::SeinBowAttack__Class**)(modloader::win::memory::resolve_rva(0x047396F0));
    }
    namespace SeinBowAttack_Settings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinBowAttack_Settings__Class** type_info = (::app::SeinBowAttack_Settings__Class**)(modloader::win::memory::resolve_rva(0x04702B98));
    }
    namespace Kickback {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Kickback__Class** type_info = (::app::Kickback__Class**)(modloader::win::memory::resolve_rva(0x0478BF20));
    }
    namespace InstantiationRecycleHelper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InstantiationRecycleHelper__Class** type_info = (::app::InstantiationRecycleHelper__Class**)(modloader::win::memory::resolve_rva(0x0477E588));
    }
    namespace SeinMeleeAttack {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinMeleeAttack__Class** type_info = (::app::SeinMeleeAttack__Class**)(modloader::win::memory::resolve_rva(0x047335E8));
    }
    namespace MeleeWeapon {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MeleeWeapon__Class** type_info = (::app::MeleeWeapon__Class**)(modloader::win::memory::resolve_rva(0x04774348));
    }
    namespace MeleeComboMove {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MeleeComboMove__Class** type_info = (::app::MeleeComboMove__Class**)(modloader::win::memory::resolve_rva(0x0470B758));
    }
    namespace ActivateCooldownRule__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ActivateCooldownRule__Array__Class** type_info = (::app::ActivateCooldownRule__Array__Class**)(modloader::win::memory::resolve_rva(0x04749370));
    }
    namespace SeinComboHandler_StubbedComboMove {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinComboHandler_StubbedComboMove__Class** type_info = (::app::SeinComboHandler_StubbedComboMove__Class**)(modloader::win::memory::resolve_rva(0x0478F700));
    }
    namespace ComboMoveStressTest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ComboMoveStressTest__Class** type_info = (::app::ComboMoveStressTest__Class**)(modloader::win::memory::resolve_rva(0x04761E50));
    }
    namespace SeinJumpHandler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinJumpHandler__Class** type_info = (::app::SeinJumpHandler__Class**)(modloader::win::memory::resolve_rva(0x04741D90));
    }
    namespace MeleeComboMoveHammerBase {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MeleeComboMoveHammerBase__Class** type_info = (::app::MeleeComboMoveHammerBase__Class**)(modloader::win::memory::resolve_rva(0x0474BE68));
    }
    namespace MeleeWeaponHammer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MeleeWeaponHammer__Class** type_info = (::app::MeleeWeaponHammer__Class**)(modloader::win::memory::resolve_rva(0x047440B8));
    }
    namespace MeleeWeaponColliderStick {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MeleeWeaponColliderStick__Class** type_info = (::app::MeleeWeaponColliderStick__Class**)(modloader::win::memory::resolve_rva(0x04707118));
    }
    namespace MeleeWeaponColliderStick_DebugCircle {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MeleeWeaponColliderStick_DebugCircle__Class** type_info = (::app::MeleeWeaponColliderStick_DebugCircle__Class**)(modloader::win::memory::resolve_rva(0x04772528));
    }
    namespace MeleePositionInterpolator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MeleePositionInterpolator__Class** type_info = (::app::MeleePositionInterpolator__Class**)(modloader::win::memory::resolve_rva(0x04766ED8));
    }
} // namespace app::classes::types
