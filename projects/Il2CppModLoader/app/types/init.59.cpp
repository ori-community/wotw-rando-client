#include <Il2CppModLoader/app/types/ActivateCooldownRule__Array.h>
#include <Il2CppModLoader/app/types/AnimationLayerContext.h>
#include <Il2CppModLoader/app/types/AnimationMontage.h>
#include <Il2CppModLoader/app/types/AnimationMontage_Entry.h>
#include <Il2CppModLoader/app/types/ArrowHitData.h>
#include <Il2CppModLoader/app/types/AutoRotate.h>
#include <Il2CppModLoader/app/types/CameraTargetData.h>
#include <Il2CppModLoader/app/types/CleverMenuItemSelectionManager_NavigationData.h>
#include <Il2CppModLoader/app/types/CleverMenuItem__Array.h>
#include <Il2CppModLoader/app/types/ComboMove.h>
#include <Il2CppModLoader/app/types/ComboMoveStressTest.h>
#include <Il2CppModLoader/app/types/DamageReceiver__Array.h>
#include <Il2CppModLoader/app/types/DamageType__Enum__Array.h>
#include <Il2CppModLoader/app/types/EntityBehaviourNode.h>
#include <Il2CppModLoader/app/types/EntityFallEvent.h>
#include <Il2CppModLoader/app/types/ForceRefreshAnimatorContext.h>
#include <Il2CppModLoader/app/types/GrabbableSurfaceMovingWheel.h>
#include <Il2CppModLoader/app/types/GroundEntityLocomotion.h>
#include <Il2CppModLoader/app/types/GroundEntityMovementProcessor.h>
#include <Il2CppModLoader/app/types/HammerTrail_TrailPoint__Array.h>
#include <Il2CppModLoader/app/types/IAnimatedValueListener.h>
#include <Il2CppModLoader/app/types/IBowAttackable.h>
#include <Il2CppModLoader/app/types/ICarryable.h>
#include <Il2CppModLoader/app/types/ICharacterInteractable.h>
#include <Il2CppModLoader/app/types/IChargeDashAttackable.h>
#include <Il2CppModLoader/app/types/ICleverMenuFadeObserver.h>
#include <Il2CppModLoader/app/types/IComboMoveProvider.h>
#include <Il2CppModLoader/app/types/IGreanade.h>
#include <Il2CppModLoader/app/types/IHoldable.h>
#include <Il2CppModLoader/app/types/ILever.h>
#include <Il2CppModLoader/app/types/ILocomotionTurningHandler.h>
#include <Il2CppModLoader/app/types/IPressurePlate.h>
#include <Il2CppModLoader/app/types/IRideable.h>
#include <Il2CppModLoader/app/types/ISpiritFlameAttackable.h>
#include <Il2CppModLoader/app/types/ISpiritLeashAttackable.h>
#include <Il2CppModLoader/app/types/ISpiritSlashAttackable.h>
#include <Il2CppModLoader/app/types/IThrowable.h>
#include <Il2CppModLoader/app/types/IVitalsDeathListener.h>
#include <Il2CppModLoader/app/types/Input_InputButtonProcessor.h>
#include <Il2CppModLoader/app/types/InstantiationRecycleHelper.h>
#include <Il2CppModLoader/app/types/Kickback.h>
#include <Il2CppModLoader/app/types/LegacyTransparencyAnimator.h>
#include <Il2CppModLoader/app/types/LegacyTransparencyAnimator_RendererData.h>
#include <Il2CppModLoader/app/types/Locomotion.h>
#include <Il2CppModLoader/app/types/LocomotionContext.h>
#include <Il2CppModLoader/app/types/LocomotionGroundMoveTimelineBehaviour.h>
#include <Il2CppModLoader/app/types/MeleeComboMove.h>
#include <Il2CppModLoader/app/types/MeleeComboMoveHammerBase.h>
#include <Il2CppModLoader/app/types/MeleePositionInterpolator.h>
#include <Il2CppModLoader/app/types/MeleeWeapon.h>
#include <Il2CppModLoader/app/types/MeleeWeaponChainsword.h>
#include <Il2CppModLoader/app/types/MeleeWeaponColliderStick.h>
#include <Il2CppModLoader/app/types/MeleeWeaponColliderStick_DebugCircle.h>
#include <Il2CppModLoader/app/types/MeleeWeaponHammer.h>
#include <Il2CppModLoader/app/types/MeleeWeapon__Array.h>
#include <Il2CppModLoader/app/types/Projectile.h>
#include <Il2CppModLoader/app/types/Projectile_ExplodeCollisionInfo.h>
#include <Il2CppModLoader/app/types/ProtectiveLightRadial.h>
#include <Il2CppModLoader/app/types/RideableTypes__Enum.h>
#include <Il2CppModLoader/app/types/RootMotionProcessor.h>
#include <Il2CppModLoader/app/types/RootMotionProcessorData.h>
#include <Il2CppModLoader/app/types/SeinBlazeSpell_BlazeSetupInfo.h>
#include <Il2CppModLoader/app/types/SeinBlazeSpell_BlazeSetupInfo__Array.h>
#include <Il2CppModLoader/app/types/SeinBlazeSpell_States.h>
#include <Il2CppModLoader/app/types/SeinBowAttack.h>
#include <Il2CppModLoader/app/types/SeinBowAttack_Settings.h>
#include <Il2CppModLoader/app/types/SeinCarry_States.h>
#include <Il2CppModLoader/app/types/SeinChakramSpell_BalancingData_ChakramDamageSettings.h>
#include <Il2CppModLoader/app/types/SeinChargeFlameAbility.h>
#include <Il2CppModLoader/app/types/SeinChargeFlameAbility_States.h>
#include <Il2CppModLoader/app/types/SeinCinematic.h>
#include <Il2CppModLoader/app/types/SeinComboHandler_StubbedComboMove.h>
#include <Il2CppModLoader/app/types/SeinDashAttack.h>
#include <Il2CppModLoader/app/types/SeinGlowSpell_GlowLightInfo.h>
#include <Il2CppModLoader/app/types/SeinGlowSpell_GlowState__Enum.h>
#include <Il2CppModLoader/app/types/SeinGlowSpell_QuickGlowSetupInfo.h>
#include <Il2CppModLoader/app/types/SeinGlowSpell_QuickGlowSetupInfo__Array.h>
#include <Il2CppModLoader/app/types/SeinHold.h>
#include <Il2CppModLoader/app/types/SeinHold_States.h>
#include <Il2CppModLoader/app/types/SeinInteraction_ThrownKeystone.h>
#include <Il2CppModLoader/app/types/SeinJumpHandler.h>
#include <Il2CppModLoader/app/types/SeinMeleeAttack.h>
#include <Il2CppModLoader/app/types/SeinRide.h>
#include <Il2CppModLoader/app/types/SeinSpiritLeashAbility.h>
#include <Il2CppModLoader/app/types/SeinSpiritLeashAbility_RayDependency__Array.h>
#include <Il2CppModLoader/app/types/SeinSpiritSpearSpell.h>
#include <Il2CppModLoader/app/types/SeinSpiritSpearSpell_FlyingSpear.h>
#include <Il2CppModLoader/app/types/SeinStandardSpiritFlameAbility_PoisonSettings.h>
#include <Il2CppModLoader/app/types/SeinStandingOnEdge.h>
#include <Il2CppModLoader/app/types/ShotCombo.h>
#include <Il2CppModLoader/app/types/SpherecastCommand__Array.h>
#include <Il2CppModLoader/app/types/SpiritFlameProjectileOffsetGenerator.h>
#include <Il2CppModLoader/app/types/SpiritLightRadialVisualAffector.h>
#include <Il2CppModLoader/app/types/State_2.h>
#include <Il2CppModLoader/app/types/TargetSpheres.h>
#include <Il2CppModLoader/app/types/UberShaderProperty_Color__Enum__Array.h>
#include <Il2CppModLoader/app/types/Varying2DSoundProvider.h>
#include <Il2CppModLoader/app/types/Vitals_DamageProcessHelper.h>
#include <Il2CppModLoader/app/types/Vitals_DamageProcessHelper_DamageBucket.h>
#include <Il2CppModLoader/app/types/Vitals_DamageProcessHelper_SortedDamageEntry.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPressurePlate {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IPressurePlate__Class** type_info = (::app::IPressurePlate__Class**)(modloader::win::memory::resolve_rva(0x04779F58));
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
    namespace ILocomotionTurningHandler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ILocomotionTurningHandler__Class** type_info = (::app::ILocomotionTurningHandler__Class**)(modloader::win::memory::resolve_rva(0x04732300));
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
    namespace IVitalsDeathListener {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVitalsDeathListener__Class** type_info = (::app::IVitalsDeathListener__Class**)(modloader::win::memory::resolve_rva(0x04775A80));
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
    namespace ICarryable {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ICarryable__Class** type_info = (::app::ICarryable__Class**)(modloader::win::memory::resolve_rva(0x04743C98));
    }
    namespace SeinHold {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinHold__Class** type_info = (::app::SeinHold__Class**)(modloader::win::memory::resolve_rva(0x0473A918));
    }
    namespace IHoldable {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IHoldable__Class** type_info = (::app::IHoldable__Class**)(modloader::win::memory::resolve_rva(0x04795670));
    }
    namespace IThrowable {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IThrowable__Class** type_info = (::app::IThrowable__Class**)(modloader::win::memory::resolve_rva(0x047485B8));
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
    namespace ICleverMenuFadeObserver {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ICleverMenuFadeObserver__Class** type_info = (::app::ICleverMenuFadeObserver__Class**)(modloader::win::memory::resolve_rva(0x0471B9C0));
    }
    namespace CleverMenuItem__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CleverMenuItem__Array__Class** type_info = (::app::CleverMenuItem__Array__Class**)(modloader::win::memory::resolve_rva(0x0470E5F0));
    }
    namespace SeinStandingOnEdge {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinStandingOnEdge__Class** type_info = (::app::SeinStandingOnEdge__Class**)(modloader::win::memory::resolve_rva(0x04703128));
    }
    namespace ILever {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ILever__Class** type_info = (::app::ILever__Class**)(modloader::win::memory::resolve_rva(0x04785DF0));
    }
    namespace SeinInteraction_ThrownKeystone {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinInteraction_ThrownKeystone__Class** type_info = (::app::SeinInteraction_ThrownKeystone__Class**)(modloader::win::memory::resolve_rva(0x047734A8));
    }
    namespace ICharacterInteractable {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ICharacterInteractable__Class** type_info = (::app::ICharacterInteractable__Class**)(modloader::win::memory::resolve_rva(0x0470F7C0));
    }
    namespace SeinCinematic {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinCinematic__Class** type_info = (::app::SeinCinematic__Class**)(modloader::win::memory::resolve_rva(0x0476EFC8));
    }
    namespace ISpiritFlameAttackable {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ISpiritFlameAttackable__Class** type_info = (::app::ISpiritFlameAttackable__Class**)(modloader::win::memory::resolve_rva(0x0476E3A8));
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
    namespace IChargeDashAttackable {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IChargeDashAttackable__Class** type_info = (::app::IChargeDashAttackable__Class**)(modloader::win::memory::resolve_rva(0x047081D0));
    }
    namespace IGreanade {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IGreanade__Class** type_info = (::app::IGreanade__Class**)(modloader::win::memory::resolve_rva(0x047961B8));
    }
    namespace Input_InputButtonProcessor {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Input_InputButtonProcessor__Class** type_info = (::app::Input_InputButtonProcessor__Class**)(modloader::win::memory::resolve_rva(0x047792E0));
    }
    namespace SeinSpiritLeashAbility {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinSpiritLeashAbility__Class** type_info = (::app::SeinSpiritLeashAbility__Class**)(modloader::win::memory::resolve_rva(0x04797FD8));
    }
    namespace ISpiritLeashAttackable {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ISpiritLeashAttackable__Class** type_info = (::app::ISpiritLeashAttackable__Class**)(modloader::win::memory::resolve_rva(0x047077C8));
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
    namespace ISpiritSlashAttackable {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ISpiritSlashAttackable__Class** type_info = (::app::ISpiritSlashAttackable__Class**)(modloader::win::memory::resolve_rva(0x04727BD0));
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
    namespace IBowAttackable {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IBowAttackable__Class** type_info = (::app::IBowAttackable__Class**)(modloader::win::memory::resolve_rva(0x04720DB0));
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
    namespace IComboMoveProvider {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IComboMoveProvider__Class** type_info = (::app::IComboMoveProvider__Class**)(modloader::win::memory::resolve_rva(0x0471BAB8));
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
    namespace HammerTrail_TrailPoint__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::HammerTrail_TrailPoint__Array__Class** type_info = (::app::HammerTrail_TrailPoint__Array__Class**)(modloader::win::memory::resolve_rva(0x04765F90));
    }
    namespace MeleeWeaponChainsword {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MeleeWeaponChainsword__Class** type_info = (::app::MeleeWeaponChainsword__Class**)(modloader::win::memory::resolve_rva(0x047607F0));
    }
    namespace MeleeWeapon__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MeleeWeapon__Array__Class** type_info = (::app::MeleeWeapon__Array__Class**)(modloader::win::memory::resolve_rva(0x04702758));
    }
    namespace GrabbableSurfaceMovingWheel {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GrabbableSurfaceMovingWheel__Class** type_info = (::app::GrabbableSurfaceMovingWheel__Class**)(modloader::win::memory::resolve_rva(0x0475D8F8));
    }
    namespace AutoRotate {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AutoRotate__Class** type_info = (::app::AutoRotate__Class**)(modloader::win::memory::resolve_rva(0x047801D8));
    }
    namespace SeinRide {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinRide__Class** type_info = (::app::SeinRide__Class**)(modloader::win::memory::resolve_rva(0x04772FC8));
    }
    namespace IRideable {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IRideable__Class** type_info = (::app::IRideable__Class**)(modloader::win::memory::resolve_rva(0x047874D0));
    }
    namespace SeinSpiritSpearSpell {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinSpiritSpearSpell__Class** type_info = (::app::SeinSpiritSpearSpell__Class**)(modloader::win::memory::resolve_rva(0x0470C9A0));
    }
    namespace SeinSpiritSpearSpell_FlyingSpear {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinSpiritSpearSpell_FlyingSpear__Class** type_info = (::app::SeinSpiritSpearSpell_FlyingSpear__Class**)(modloader::win::memory::resolve_rva(0x047406D8));
    }
    namespace ComboMove {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ComboMove__Class** type_info = (::app::ComboMove__Class**)(modloader::win::memory::resolve_rva(0x04757CE0));
    }
    namespace SeinGlowSpell_GlowState__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinGlowSpell_GlowState__Enum__Class** type_info = (::app::SeinGlowSpell_GlowState__Enum__Class**)(modloader::win::memory::resolve_rva(0x04779BB0));
    }
    namespace SeinGlowSpell_QuickGlowSetupInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinGlowSpell_QuickGlowSetupInfo__Class** type_info = (::app::SeinGlowSpell_QuickGlowSetupInfo__Class**)(modloader::win::memory::resolve_rva(0x04720760));
    }
    namespace SeinGlowSpell_QuickGlowSetupInfo__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinGlowSpell_QuickGlowSetupInfo__Array__Class** type_info = (::app::SeinGlowSpell_QuickGlowSetupInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x04766758));
    }
    namespace SeinGlowSpell_GlowLightInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinGlowSpell_GlowLightInfo__Class** type_info = (::app::SeinGlowSpell_GlowLightInfo__Class**)(modloader::win::memory::resolve_rva(0x04770C80));
    }
    namespace SpiritLightRadialVisualAffector {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SpiritLightRadialVisualAffector__Class** type_info = (::app::SpiritLightRadialVisualAffector__Class**)(modloader::win::memory::resolve_rva(0x0475C368));
    }
    namespace ProtectiveLightRadial {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ProtectiveLightRadial__Class** type_info = (::app::ProtectiveLightRadial__Class**)(modloader::win::memory::resolve_rva(0x047466B0));
    }
    namespace Projectile {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Projectile__Class** type_info = (::app::Projectile__Class**)(modloader::win::memory::resolve_rva(0x047469A0));
    }
    namespace Projectile_ExplodeCollisionInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Projectile_ExplodeCollisionInfo__Class** type_info = (::app::Projectile_ExplodeCollisionInfo__Class**)(modloader::win::memory::resolve_rva(0x0476C380));
    }
    namespace SeinChakramSpell_BalancingData_ChakramDamageSettings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinChakramSpell_BalancingData_ChakramDamageSettings__Class** type_info = (::app::SeinChakramSpell_BalancingData_ChakramDamageSettings__Class**)(modloader::win::memory::resolve_rva(0x04716488));
    }
    namespace SeinBlazeSpell_BlazeSetupInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinBlazeSpell_BlazeSetupInfo__Class** type_info = (::app::SeinBlazeSpell_BlazeSetupInfo__Class**)(modloader::win::memory::resolve_rva(0x04739A68));
    }
    namespace SeinBlazeSpell_BlazeSetupInfo__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinBlazeSpell_BlazeSetupInfo__Array__Class** type_info = (::app::SeinBlazeSpell_BlazeSetupInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x0473B280));
    }
    namespace SeinBlazeSpell_States {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinBlazeSpell_States__Class** type_info = (::app::SeinBlazeSpell_States__Class**)(modloader::win::memory::resolve_rva(0x0478B440));
    }
    namespace AnimationMontage {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationMontage__Class** type_info = (::app::AnimationMontage__Class**)(modloader::win::memory::resolve_rva(0x0472F048));
    }
    namespace AnimationMontage_Entry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationMontage_Entry__Class** type_info = (::app::AnimationMontage_Entry__Class**)(modloader::win::memory::resolve_rva(0x04731B38));
    }
    namespace IAnimatedValueListener {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IAnimatedValueListener__Class** type_info = (::app::IAnimatedValueListener__Class**)(modloader::win::memory::resolve_rva(0x0472DC80));
    }
} // namespace app::classes::types
