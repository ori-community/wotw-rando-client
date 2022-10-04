#include <Il2CppModLoader/app/types/AbilityBasedSetting.h>
#include <Il2CppModLoader/app/types/AbilityTypeEnumComparer.h>
#include <Il2CppModLoader/app/types/CameraAdditiveSettings.h>
#include <Il2CppModLoader/app/types/CameraCrossFadeManager.h>
#include <Il2CppModLoader/app/types/CameraGoThroughScrollLocks.h>
#include <Il2CppModLoader/app/types/CameraOffsetController.h>
#include <Il2CppModLoader/app/types/CameraOffsetController_c.h>
#include <Il2CppModLoader/app/types/CameraPostProcessing.h>
#include <Il2CppModLoader/app/types/CameraPuppetController.h>
#include <Il2CppModLoader/app/types/CameraScrollLockConstraint.h>
#include <Il2CppModLoader/app/types/CameraSettingsZone.h>
#include <Il2CppModLoader/app/types/CameraShakeLogic.h>
#include <Il2CppModLoader/app/types/CameraTarget.h>
#include <Il2CppModLoader/app/types/CameraTarget_c.h>
#include <Il2CppModLoader/app/types/ChallengeShrineManager.h>
#include <Il2CppModLoader/app/types/CharacterGravity_c.h>
#include <Il2CppModLoader/app/types/CharacterLeftRightMovement_c.h>
#include <Il2CppModLoader/app/types/CharacterState_c.h>
#include <Il2CppModLoader/app/types/CheckpointRestrictZone.h>
#include <Il2CppModLoader/app/types/CheckpointRestrictZone_CheckpointRestrictType__Enum.h>
#include <Il2CppModLoader/app/types/CommandEnumComparer.h>
#include <Il2CppModLoader/app/types/ControllerShakeLogic.h>
#include <Il2CppModLoader/app/types/DeathInformation.h>
#include <Il2CppModLoader/app/types/DeathWispsManager.h>
#include <Il2CppModLoader/app/types/DefaultCameraProviderEntry_Type__Enum.h>
#include <Il2CppModLoader/app/types/DynamicCameraTargetting.h>
#include <Il2CppModLoader/app/types/DynamicCameraWeightZone.h>
#include <Il2CppModLoader/app/types/EntitySettings.h>
#include <Il2CppModLoader/app/types/FaderBrightnessContrastSettings.h>
#include <Il2CppModLoader/app/types/FloatProviderZone__Array.h>
#include <Il2CppModLoader/app/types/ForceGrabReleaseZone.h>
#include <Il2CppModLoader/app/types/GameplayCameraTargetEntry.h>
#include <Il2CppModLoader/app/types/GameplayCameraTargetsProvider.h>
#include <Il2CppModLoader/app/types/IControllerShake.h>
#include <Il2CppModLoader/app/types/IDebugMenuItem.h>
#include <Il2CppModLoader/app/types/IFieldOfViewInfluencer.h>
#include <Il2CppModLoader/app/types/IGhostGenericSoundPlayer.h>
#include <Il2CppModLoader/app/types/IPostProcessInfluencer.h>
#include <Il2CppModLoader/app/types/Input_Command__Enum__Array.h>
#include <Il2CppModLoader/app/types/InterestSettings.h>
#include <Il2CppModLoader/app/types/MonoBehaviour__Array.h>
#include <Il2CppModLoader/app/types/MortarWormChargingState.h>
#include <Il2CppModLoader/app/types/MortarWormEnemyDeath_Start_d_4.h>
#include <Il2CppModLoader/app/types/MortarWormEnemy_c.h>
#include <Il2CppModLoader/app/types/MortarWormIdleState.h>
#include <Il2CppModLoader/app/types/OriJumpPuppet.h>
#include <Il2CppModLoader/app/types/PlayerAbilities_c.h>
#include <Il2CppModLoader/app/types/PlayerInputButtonRebinder.h>
#include <Il2CppModLoader/app/types/Ray__Array.h>
#include <Il2CppModLoader/app/types/RespawningPlaceholder_c.h>
#include <Il2CppModLoader/app/types/SceneDefaultSettingsHelper.h>
#include <Il2CppModLoader/app/types/SceneSettingsTransitionZone.h>
#include <Il2CppModLoader/app/types/SeinBashAttackPuppet.h>
#include <Il2CppModLoader/app/types/SeinBashAttack_c.h>
#include <Il2CppModLoader/app/types/SeinCarry_DelayedPickupSound_d_41.h>
#include <Il2CppModLoader/app/types/SeinChargeJumpLegacy_c.h>
#include <Il2CppModLoader/app/types/SeinChargeJumpPuppet.h>
#include <Il2CppModLoader/app/types/SeinCinematic_c.h>
#include <Il2CppModLoader/app/types/SeinCinematic_c_DisplayClass45_0.h>
#include <Il2CppModLoader/app/types/SeinClamberPuppet.h>
#include <Il2CppModLoader/app/types/SeinDamageReciever_FlashSprite_d_85.h>
#include <Il2CppModLoader/app/types/SeinDamageReciever_OnKillRoutine_d_97.h>
#include <Il2CppModLoader/app/types/SeinDamageReciever_c.h>
#include <Il2CppModLoader/app/types/SeinDamageReciever_c_DisplayClass58_0.h>
#include <Il2CppModLoader/app/types/SeinDamageReciever_c_DisplayClass58_1.h>
#include <Il2CppModLoader/app/types/SeinDamageReciever_c_DisplayClass58_2.h>
#include <Il2CppModLoader/app/types/SeinDamageReciever_c_DisplayClass92_0.h>
#include <Il2CppModLoader/app/types/SeinDashAttack_c.h>
#include <Il2CppModLoader/app/types/SeinDashNewPuppet.h>
#include <Il2CppModLoader/app/types/SeinDashNew_c.h>
#include <Il2CppModLoader/app/types/SeinDeathCounter.h>
#include <Il2CppModLoader/app/types/SeinDeathsManager.h>
#include <Il2CppModLoader/app/types/SeinDoubleJumpPuppet.h>
#include <Il2CppModLoader/app/types/SeinDoubleJump_c.h>
#include <Il2CppModLoader/app/types/SeinDrillPuppet.h>
#include <Il2CppModLoader/app/types/SeinFallPuppet.h>
#include <Il2CppModLoader/app/types/SeinFeatherFlapPuppet.h>
#include <Il2CppModLoader/app/types/SeinFirewhirlSpell_c.h>
#include <Il2CppModLoader/app/types/SeinFootstepsPuppet.h>
#include <Il2CppModLoader/app/types/SeinGlidePuppet.h>
#include <Il2CppModLoader/app/types/SeinGrabRopePuppet.h>
#include <Il2CppModLoader/app/types/SeinGrabSurfacePuppet.h>
#include <Il2CppModLoader/app/types/SeinGrabWallPuppet.h>
#include <Il2CppModLoader/app/types/SeinIdlePuppet.h>
#include <Il2CppModLoader/app/types/SeinJump_c.h>
#include <Il2CppModLoader/app/types/SeinLeverPuppet.h>
#include <Il2CppModLoader/app/types/SeinRunPuppet.h>
#include <Il2CppModLoader/app/types/SeinSpiritSentrySpell_HandleSpawningSentries_d_16.h>
#include <Il2CppModLoader/app/types/SeinSpiritSpearSpellPuppet.h>
#include <Il2CppModLoader/app/types/SeinStomp_c.h>
#include <Il2CppModLoader/app/types/SeinTurretSpell_HandleSpawningSentries_d_40.h>
#include <Il2CppModLoader/app/types/SeinWallJumpPuppet.h>
#include <Il2CppModLoader/app/types/SeinWallJump_HandleChangeDirectionWhileJumpingInwards_d_50.h>
#include <Il2CppModLoader/app/types/SeinWallJump_RoutineToReenableAirDeceleration_d_52.h>
#include <Il2CppModLoader/app/types/UberPostProcess.h>
#include <Il2CppModLoader/app/types/VerticalCameraSettingsZone_c.h>
#include <Il2CppModLoader/app/types/WormEmergingState.h>
#include <Il2CppModLoader/app/types/WormHiddenState.h>
#include <Il2CppModLoader/app/types/WormHidingState.h>
#include <Il2CppModLoader/app/types/WormMortarShootingState.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MortarWormEnemy_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MortarWormEnemy_c__Class** type_info = (::app::MortarWormEnemy_c__Class**)(modloader::win::memory::resolve_rva(0x04750C58));
    }
    namespace MortarWormEnemyDeath_Start_d_4 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MortarWormEnemyDeath_Start_d_4__Class** type_info = (::app::MortarWormEnemyDeath_Start_d_4__Class**)(modloader::win::memory::resolve_rva(0x0471E4E0));
    }
    namespace RespawningPlaceholder_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RespawningPlaceholder_c__Class** type_info = (::app::RespawningPlaceholder_c__Class**)(modloader::win::memory::resolve_rva(0x04798B30));
    }
    namespace MortarWormIdleState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MortarWormIdleState__Class** type_info = (::app::MortarWormIdleState__Class**)(modloader::win::memory::resolve_rva(0x047095C0));
    }
    namespace MortarWormChargingState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MortarWormChargingState__Class** type_info = (::app::MortarWormChargingState__Class**)(modloader::win::memory::resolve_rva(0x047883A8));
    }
    namespace WormEmergingState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WormEmergingState__Class** type_info = (::app::WormEmergingState__Class**)(modloader::win::memory::resolve_rva(0x0470CCF0));
    }
    namespace WormHiddenState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WormHiddenState__Class** type_info = (::app::WormHiddenState__Class**)(modloader::win::memory::resolve_rva(0x04759558));
    }
    namespace WormHidingState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WormHidingState__Class** type_info = (::app::WormHidingState__Class**)(modloader::win::memory::resolve_rva(0x04753728));
    }
    namespace WormMortarShootingState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WormMortarShootingState__Class** type_info = (::app::WormMortarShootingState__Class**)(modloader::win::memory::resolve_rva(0x0476FE40));
    }
    namespace IFieldOfViewInfluencer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IFieldOfViewInfluencer__Class** type_info = (::app::IFieldOfViewInfluencer__Class**)(modloader::win::memory::resolve_rva(0x047581D8));
    }
    namespace CameraPostProcessing {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CameraPostProcessing__Class** type_info = (::app::CameraPostProcessing__Class**)(modloader::win::memory::resolve_rva(0x0472E620));
    }
    namespace IPostProcessInfluencer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IPostProcessInfluencer__Class** type_info = (::app::IPostProcessInfluencer__Class**)(modloader::win::memory::resolve_rva(0x0476F710));
    }
    namespace UberPostProcess {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberPostProcess__Class** type_info = (::app::UberPostProcess__Class**)(modloader::win::memory::resolve_rva(0x04781B50));
    }
    namespace FaderBrightnessContrastSettings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FaderBrightnessContrastSettings__Class** type_info = (::app::FaderBrightnessContrastSettings__Class**)(modloader::win::memory::resolve_rva(0x047297A0));
    }
    namespace CameraAdditiveSettings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CameraAdditiveSettings__Class** type_info = (::app::CameraAdditiveSettings__Class**)(modloader::win::memory::resolve_rva(0x047816E8));
    }
    namespace SceneDefaultSettingsHelper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SceneDefaultSettingsHelper__Class** type_info = (::app::SceneDefaultSettingsHelper__Class**)(modloader::win::memory::resolve_rva(0x0476C8D0));
    }
    namespace CameraPuppetController {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CameraPuppetController__Class** type_info = (::app::CameraPuppetController__Class**)(modloader::win::memory::resolve_rva(0x04773108));
    }
    namespace FloatProviderZone__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FloatProviderZone__Array__Class** type_info = (::app::FloatProviderZone__Array__Class**)(modloader::win::memory::resolve_rva(0x047391C0));
    }
    namespace CameraShakeLogic {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CameraShakeLogic__Class** type_info = (::app::CameraShakeLogic__Class**)(modloader::win::memory::resolve_rva(0x0473BB38));
    }
    namespace CameraTarget {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CameraTarget__Class** type_info = (::app::CameraTarget__Class**)(modloader::win::memory::resolve_rva(0x047630E0));
    }
    namespace CameraOffsetController {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CameraOffsetController__Class** type_info = (::app::CameraOffsetController__Class**)(modloader::win::memory::resolve_rva(0x0474F1F0));
    }
    namespace CameraScrollLockConstraint {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CameraScrollLockConstraint__Class** type_info = (::app::CameraScrollLockConstraint__Class**)(modloader::win::memory::resolve_rva(0x0477D3D0));
    }
    namespace Ray__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Ray__Array__Class** type_info = (::app::Ray__Array__Class**)(modloader::win::memory::resolve_rva(0x04719160));
    }
    namespace DynamicCameraTargetting {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicCameraTargetting__Class** type_info = (::app::DynamicCameraTargetting__Class**)(modloader::win::memory::resolve_rva(0x04708260));
    }
    namespace InterestSettings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InterestSettings__Class** type_info = (::app::InterestSettings__Class**)(modloader::win::memory::resolve_rva(0x0474D1A0));
    }
    namespace EntitySettings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EntitySettings__Class** type_info = (::app::EntitySettings__Class**)(modloader::win::memory::resolve_rva(0x0472B7B0));
    }
    namespace IDebugMenuItem {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IDebugMenuItem__Class** type_info = (::app::IDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04770F78));
    }
    namespace AbilityBasedSetting {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AbilityBasedSetting__Class** type_info = (::app::AbilityBasedSetting__Class**)(modloader::win::memory::resolve_rva(0x0471AF90));
    }
    namespace CameraGoThroughScrollLocks {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CameraGoThroughScrollLocks__Class** type_info = (::app::CameraGoThroughScrollLocks__Class**)(modloader::win::memory::resolve_rva(0x04754D68));
    }
    namespace ControllerShakeLogic {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ControllerShakeLogic__Class** type_info = (::app::ControllerShakeLogic__Class**)(modloader::win::memory::resolve_rva(0x04778C58));
    }
    namespace IControllerShake {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IControllerShake__Class** type_info = (::app::IControllerShake__Class**)(modloader::win::memory::resolve_rva(0x04713A40));
    }
    namespace DefaultCameraProviderEntry_Type__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DefaultCameraProviderEntry_Type__Enum__Class** type_info = (::app::DefaultCameraProviderEntry_Type__Enum__Class**)(modloader::win::memory::resolve_rva(0x04790CC0));
    }
    namespace DynamicCameraWeightZone {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicCameraWeightZone__Class** type_info = (::app::DynamicCameraWeightZone__Class**)(modloader::win::memory::resolve_rva(0x04790590));
    }
    namespace GameplayCameraTargetsProvider {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GameplayCameraTargetsProvider__Class** type_info = (::app::GameplayCameraTargetsProvider__Class**)(modloader::win::memory::resolve_rva(0x0473E8B8));
    }
    namespace GameplayCameraTargetEntry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GameplayCameraTargetEntry__Class** type_info = (::app::GameplayCameraTargetEntry__Class**)(modloader::win::memory::resolve_rva(0x04760DA8));
    }
    namespace CameraCrossFadeManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CameraCrossFadeManager__Class** type_info = (::app::CameraCrossFadeManager__Class**)(modloader::win::memory::resolve_rva(0x04742730));
    }
    namespace CameraOffsetController_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CameraOffsetController_c__Class** type_info = (::app::CameraOffsetController_c__Class**)(modloader::win::memory::resolve_rva(0x0471C2C0));
    }
    namespace CameraSettingsZone {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CameraSettingsZone__Class** type_info = (::app::CameraSettingsZone__Class**)(modloader::win::memory::resolve_rva(0x0473AD60));
    }
    namespace CameraTarget_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CameraTarget_c__Class** type_info = (::app::CameraTarget_c__Class**)(modloader::win::memory::resolve_rva(0x0478F3E0));
    }
    namespace SceneSettingsTransitionZone {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SceneSettingsTransitionZone__Class** type_info = (::app::SceneSettingsTransitionZone__Class**)(modloader::win::memory::resolve_rva(0x04731B40));
    }
    namespace VerticalCameraSettingsZone_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::VerticalCameraSettingsZone_c__Class** type_info = (::app::VerticalCameraSettingsZone_c__Class**)(modloader::win::memory::resolve_rva(0x04710840));
    }
    namespace ChallengeShrineManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ChallengeShrineManager__Class** type_info = (::app::ChallengeShrineManager__Class**)(modloader::win::memory::resolve_rva(0x047614A8));
    }
    namespace SeinIdlePuppet {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinIdlePuppet__Class** type_info = (::app::SeinIdlePuppet__Class**)(modloader::win::memory::resolve_rva(0x04720B18));
    }
    namespace SeinRunPuppet {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinRunPuppet__Class** type_info = (::app::SeinRunPuppet__Class**)(modloader::win::memory::resolve_rva(0x0471CEE8));
    }
    namespace SeinFallPuppet {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinFallPuppet__Class** type_info = (::app::SeinFallPuppet__Class**)(modloader::win::memory::resolve_rva(0x047315F0));
    }
    namespace CheckpointRestrictZone_CheckpointRestrictType__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CheckpointRestrictZone_CheckpointRestrictType__Enum__Class** type_info = (::app::CheckpointRestrictZone_CheckpointRestrictType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04783510));
    }
    namespace CheckpointRestrictZone {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CheckpointRestrictZone__Class** type_info = (::app::CheckpointRestrictZone__Class**)(modloader::win::memory::resolve_rva(0x04734760));
    }
    namespace CharacterGravity_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CharacterGravity_c__Class** type_info = (::app::CharacterGravity_c__Class**)(modloader::win::memory::resolve_rva(0x04789200));
    }
    namespace CharacterLeftRightMovement_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CharacterLeftRightMovement_c__Class** type_info = (::app::CharacterLeftRightMovement_c__Class**)(modloader::win::memory::resolve_rva(0x04735548));
    }
    namespace CharacterState_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CharacterState_c__Class** type_info = (::app::CharacterState_c__Class**)(modloader::win::memory::resolve_rva(0x0472F1C8));
    }
    namespace DeathInformation {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DeathInformation__Class** type_info = (::app::DeathInformation__Class**)(modloader::win::memory::resolve_rva(0x04762B48));
    }
    namespace DeathWispsManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DeathWispsManager__Class** type_info = (::app::DeathWispsManager__Class**)(modloader::win::memory::resolve_rva(0x047437C0));
    }
    namespace SeinDeathsManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinDeathsManager__Class** type_info = (::app::SeinDeathsManager__Class**)(modloader::win::memory::resolve_rva(0x04737DE0));
    }
    namespace ForceGrabReleaseZone {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ForceGrabReleaseZone__Class** type_info = (::app::ForceGrabReleaseZone__Class**)(modloader::win::memory::resolve_rva(0x04715B30));
    }
    namespace PlayerAbilities_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerAbilities_c__Class** type_info = (::app::PlayerAbilities_c__Class**)(modloader::win::memory::resolve_rva(0x047559B0));
    }
    namespace CommandEnumComparer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CommandEnumComparer__Class** type_info = (::app::CommandEnumComparer__Class**)(modloader::win::memory::resolve_rva(0x04749FD0));
    }
    namespace AbilityTypeEnumComparer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AbilityTypeEnumComparer__Class** type_info = (::app::AbilityTypeEnumComparer__Class**)(modloader::win::memory::resolve_rva(0x04776070));
    }
    namespace PlayerInputButtonRebinder {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerInputButtonRebinder__Class** type_info = (::app::PlayerInputButtonRebinder__Class**)(modloader::win::memory::resolve_rva(0x04705C80));
    }
    namespace Input_Command__Enum__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Input_Command__Enum__Array__Class** type_info = (::app::Input_Command__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04715E28));
    }
    namespace SeinBashAttackPuppet {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinBashAttackPuppet__Class** type_info = (::app::SeinBashAttackPuppet__Class**)(modloader::win::memory::resolve_rva(0x0470DE20));
    }
    namespace SeinBashAttack_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinBashAttack_c__Class** type_info = (::app::SeinBashAttack_c__Class**)(modloader::win::memory::resolve_rva(0x04702B90));
    }
    namespace SeinCarry_DelayedPickupSound_d_41 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinCarry_DelayedPickupSound_d_41__Class** type_info = (::app::SeinCarry_DelayedPickupSound_d_41__Class**)(modloader::win::memory::resolve_rva(0x0476AC80));
    }
    namespace SeinChargeJumpPuppet {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinChargeJumpPuppet__Class** type_info = (::app::SeinChargeJumpPuppet__Class**)(modloader::win::memory::resolve_rva(0x0475B528));
    }
    namespace IGhostGenericSoundPlayer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IGhostGenericSoundPlayer__Class** type_info = (::app::IGhostGenericSoundPlayer__Class**)(modloader::win::memory::resolve_rva(0x0475ABE8));
    }
    namespace SeinChargeJumpLegacy_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinChargeJumpLegacy_c__Class** type_info = (::app::SeinChargeJumpLegacy_c__Class**)(modloader::win::memory::resolve_rva(0x04701428));
    }
    namespace SeinCinematic_c_DisplayClass45_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinCinematic_c_DisplayClass45_0__Class** type_info = (::app::SeinCinematic_c_DisplayClass45_0__Class**)(modloader::win::memory::resolve_rva(0x047243F0));
    }
    namespace SeinCinematic_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinCinematic_c__Class** type_info = (::app::SeinCinematic_c__Class**)(modloader::win::memory::resolve_rva(0x04794970));
    }
    namespace SeinClamberPuppet {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinClamberPuppet__Class** type_info = (::app::SeinClamberPuppet__Class**)(modloader::win::memory::resolve_rva(0x04726498));
    }
    namespace SeinDamageReciever_c_DisplayClass58_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinDamageReciever_c_DisplayClass58_0__Class** type_info = (::app::SeinDamageReciever_c_DisplayClass58_0__Class**)(modloader::win::memory::resolve_rva(0x0475FDB0));
    }
    namespace SeinDamageReciever_c_DisplayClass58_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinDamageReciever_c_DisplayClass58_1__Class** type_info = (::app::SeinDamageReciever_c_DisplayClass58_1__Class**)(modloader::win::memory::resolve_rva(0x0474D648));
    }
    namespace SeinDamageReciever_c_DisplayClass58_2 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinDamageReciever_c_DisplayClass58_2__Class** type_info = (::app::SeinDamageReciever_c_DisplayClass58_2__Class**)(modloader::win::memory::resolve_rva(0x04737640));
    }
    namespace SeinDamageReciever_FlashSprite_d_85 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinDamageReciever_FlashSprite_d_85__Class** type_info = (::app::SeinDamageReciever_FlashSprite_d_85__Class**)(modloader::win::memory::resolve_rva(0x047583F8));
    }
    namespace SeinDamageReciever_c_DisplayClass92_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinDamageReciever_c_DisplayClass92_0__Class** type_info = (::app::SeinDamageReciever_c_DisplayClass92_0__Class**)(modloader::win::memory::resolve_rva(0x04753B60));
    }
    namespace SeinDamageReciever_OnKillRoutine_d_97 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinDamageReciever_OnKillRoutine_d_97__Class** type_info = (::app::SeinDamageReciever_OnKillRoutine_d_97__Class**)(modloader::win::memory::resolve_rva(0x0474AA38));
    }
    namespace SeinDamageReciever_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinDamageReciever_c__Class** type_info = (::app::SeinDamageReciever_c__Class**)(modloader::win::memory::resolve_rva(0x047805D8));
    }
    namespace SeinDashAttack_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinDashAttack_c__Class** type_info = (::app::SeinDashAttack_c__Class**)(modloader::win::memory::resolve_rva(0x04783328));
    }
    namespace MonoBehaviour__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MonoBehaviour__Array__Class** type_info = (::app::MonoBehaviour__Array__Class**)(modloader::win::memory::resolve_rva(0x0470B8F0));
    }
    namespace SeinDashNewPuppet {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinDashNewPuppet__Class** type_info = (::app::SeinDashNewPuppet__Class**)(modloader::win::memory::resolve_rva(0x0472AD78));
    }
    namespace SeinDashNew_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinDashNew_c__Class** type_info = (::app::SeinDashNew_c__Class**)(modloader::win::memory::resolve_rva(0x0470DE48));
    }
    namespace SeinDeathCounter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinDeathCounter__Class** type_info = (::app::SeinDeathCounter__Class**)(modloader::win::memory::resolve_rva(0x0471C2C8));
    }
    namespace SeinDoubleJumpPuppet {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinDoubleJumpPuppet__Class** type_info = (::app::SeinDoubleJumpPuppet__Class**)(modloader::win::memory::resolve_rva(0x04725640));
    }
    namespace SeinDoubleJump_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinDoubleJump_c__Class** type_info = (::app::SeinDoubleJump_c__Class**)(modloader::win::memory::resolve_rva(0x0475DEF8));
    }
    namespace SeinDrillPuppet {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinDrillPuppet__Class** type_info = (::app::SeinDrillPuppet__Class**)(modloader::win::memory::resolve_rva(0x0478EFB0));
    }
    namespace SeinFeatherFlapPuppet {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinFeatherFlapPuppet__Class** type_info = (::app::SeinFeatherFlapPuppet__Class**)(modloader::win::memory::resolve_rva(0x04751330));
    }
    namespace SeinFirewhirlSpell_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinFirewhirlSpell_c__Class** type_info = (::app::SeinFirewhirlSpell_c__Class**)(modloader::win::memory::resolve_rva(0x0474EA40));
    }
    namespace SeinFootstepsPuppet {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinFootstepsPuppet__Class** type_info = (::app::SeinFootstepsPuppet__Class**)(modloader::win::memory::resolve_rva(0x04709918));
    }
    namespace SeinGlidePuppet {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinGlidePuppet__Class** type_info = (::app::SeinGlidePuppet__Class**)(modloader::win::memory::resolve_rva(0x0476D6C0));
    }
    namespace SeinGrabRopePuppet {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinGrabRopePuppet__Class** type_info = (::app::SeinGrabRopePuppet__Class**)(modloader::win::memory::resolve_rva(0x0474B858));
    }
    namespace SeinGrabSurfacePuppet {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinGrabSurfacePuppet__Class** type_info = (::app::SeinGrabSurfacePuppet__Class**)(modloader::win::memory::resolve_rva(0x04729248));
    }
    namespace SeinGrabWallPuppet {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinGrabWallPuppet__Class** type_info = (::app::SeinGrabWallPuppet__Class**)(modloader::win::memory::resolve_rva(0x0475BAD0));
    }
    namespace OriJumpPuppet {
        IL2CPP_MODLOADER_DLLEXPORT ::app::OriJumpPuppet__Class** type_info = (::app::OriJumpPuppet__Class**)(modloader::win::memory::resolve_rva(0x0476C610));
    }
    namespace SeinJump_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinJump_c__Class** type_info = (::app::SeinJump_c__Class**)(modloader::win::memory::resolve_rva(0x047945B0));
    }
    namespace SeinLeverPuppet {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinLeverPuppet__Class** type_info = (::app::SeinLeverPuppet__Class**)(modloader::win::memory::resolve_rva(0x04735F20));
    }
    namespace SeinSpiritSentrySpell_HandleSpawningSentries_d_16 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinSpiritSentrySpell_HandleSpawningSentries_d_16__Class** type_info = (::app::SeinSpiritSentrySpell_HandleSpawningSentries_d_16__Class**)(modloader::win::memory::resolve_rva(0x047526D0));
    }
    namespace SeinSpiritSpearSpellPuppet {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinSpiritSpearSpellPuppet__Class** type_info = (::app::SeinSpiritSpearSpellPuppet__Class**)(modloader::win::memory::resolve_rva(0x0473A6E0));
    }
    namespace SeinStomp_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinStomp_c__Class** type_info = (::app::SeinStomp_c__Class**)(modloader::win::memory::resolve_rva(0x0470E168));
    }
    namespace SeinTurretSpell_HandleSpawningSentries_d_40 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinTurretSpell_HandleSpawningSentries_d_40__Class** type_info = (::app::SeinTurretSpell_HandleSpawningSentries_d_40__Class**)(modloader::win::memory::resolve_rva(0x047681A0));
    }
    namespace SeinWallJumpPuppet {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinWallJumpPuppet__Class** type_info = (::app::SeinWallJumpPuppet__Class**)(modloader::win::memory::resolve_rva(0x04798BF0));
    }
    namespace SeinWallJump_HandleChangeDirectionWhileJumpingInwards_d_50 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinWallJump_HandleChangeDirectionWhileJumpingInwards_d_50__Class** type_info = (::app::SeinWallJump_HandleChangeDirectionWhileJumpingInwards_d_50__Class**)(modloader::win::memory::resolve_rva(0x047312F8));
    }
    namespace SeinWallJump_RoutineToReenableAirDeceleration_d_52 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinWallJump_RoutineToReenableAirDeceleration_d_52__Class** type_info = (::app::SeinWallJump_RoutineToReenableAirDeceleration_d_52__Class**)(modloader::win::memory::resolve_rva(0x04761810));
    }
} // namespace app::classes::types
