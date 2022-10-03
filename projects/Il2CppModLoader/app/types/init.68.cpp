#include <Il2CppModLoader/app/types/AbilityTypeEnumComparer.h>
#include <Il2CppModLoader/app/types/CameraCrossFadeManager.h>
#include <Il2CppModLoader/app/types/CameraOffsetController_c.h>
#include <Il2CppModLoader/app/types/CameraSettingsZone.h>
#include <Il2CppModLoader/app/types/CameraTarget_c.h>
#include <Il2CppModLoader/app/types/ChallengeShrineManager.h>
#include <Il2CppModLoader/app/types/CharacterFactory.h>
#include <Il2CppModLoader/app/types/CharacterGravity_c.h>
#include <Il2CppModLoader/app/types/CharacterLeftRightMovement_c.h>
#include <Il2CppModLoader/app/types/CharacterState_c.h>
#include <Il2CppModLoader/app/types/CheckpointRestrictZone.h>
#include <Il2CppModLoader/app/types/CheckpointRestrictZone_CheckpointRestrictType__Enum.h>
#include <Il2CppModLoader/app/types/CleverMenuItemSelectionManager_c.h>
#include <Il2CppModLoader/app/types/CleverMenuItemSelectionManager_c_DisplayClass92_0.h>
#include <Il2CppModLoader/app/types/CleverMenuItem_c.h>
#include <Il2CppModLoader/app/types/CommandEnumComparer.h>
#include <Il2CppModLoader/app/types/CompoundAxisInput.h>
#include <Il2CppModLoader/app/types/CompoundButtonInput.h>
#include <Il2CppModLoader/app/types/DeathInformation.h>
#include <Il2CppModLoader/app/types/DeathWispsManager.h>
#include <Il2CppModLoader/app/types/DefaultCameraProviderEntry_Type__Enum.h>
#include <Il2CppModLoader/app/types/DetachOnKill.h>
#include <Il2CppModLoader/app/types/DynamicCameraWeightZone.h>
#include <Il2CppModLoader/app/types/ForceGrabReleaseZone.h>
#include <Il2CppModLoader/app/types/GameObjectReference.h>
#include <Il2CppModLoader/app/types/GameplayCameraTargetEntry.h>
#include <Il2CppModLoader/app/types/GameplayCameraTargetsProvider.h>
#include <Il2CppModLoader/app/types/HasComponentGameObjectFilter_c_DisplayClass3_0.h>
#include <Il2CppModLoader/app/types/IAxisInput__Array.h>
#include <Il2CppModLoader/app/types/IButtonInput__Array.h>
#include <Il2CppModLoader/app/types/InputCacheManager.h>
#include <Il2CppModLoader/app/types/InputCacheManager_SetupTempData.h>
#include <Il2CppModLoader/app/types/InputCacheManager_SetupTempData_Node.h>
#include <Il2CppModLoader/app/types/Input_Command__Enum__Array.h>
#include <Il2CppModLoader/app/types/Input_InputButtonProcessor__Array.h>
#include <Il2CppModLoader/app/types/KeyCodeButtonInput.h>
#include <Il2CppModLoader/app/types/ListOfCollidedObjects_c.h>
#include <Il2CppModLoader/app/types/MonoBehaviour__Array.h>
#include <Il2CppModLoader/app/types/OriJumpPuppet.h>
#include <Il2CppModLoader/app/types/PlayerAbilities_c.h>
#include <Il2CppModLoader/app/types/PlayerInput.h>
#include <Il2CppModLoader/app/types/PlayerInputButtonRebinder.h>
#include <Il2CppModLoader/app/types/PlayerInputRebinding.h>
#include <Il2CppModLoader/app/types/PlayerInputRebinding_KeyBindingSettings_GetKeysIterator_d_74.h>
#include <Il2CppModLoader/app/types/PlayerInputRebinding_PlayerInputKey.h>
#include <Il2CppModLoader/app/types/RestrictAbilityController.h>
#include <Il2CppModLoader/app/types/SceneSettingsTransitionZone.h>
#include <Il2CppModLoader/app/types/SeinBashAttackPuppet.h>
#include <Il2CppModLoader/app/types/SeinBashAttack_c.h>
#include <Il2CppModLoader/app/types/SeinCarry_DelayedPickupSound_d_41.h>
#include <Il2CppModLoader/app/types/SeinCharacter_c.h>
#include <Il2CppModLoader/app/types/SeinChargeJumpLegacy_c.h>
#include <Il2CppModLoader/app/types/SeinChargeJumpPuppet.h>
#include <Il2CppModLoader/app/types/SeinCinematic_c.h>
#include <Il2CppModLoader/app/types/SeinCinematic_c_DisplayClass45_0.h>
#include <Il2CppModLoader/app/types/SeinClamberPuppet.h>
#include <Il2CppModLoader/app/types/SeinController_c.h>
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
#include <Il2CppModLoader/app/types/SeinLogicCycle_c.h>
#include <Il2CppModLoader/app/types/SeinRunPuppet.h>
#include <Il2CppModLoader/app/types/SeinSoulFlame_c.h>
#include <Il2CppModLoader/app/types/SeinSpiritSentrySpell_HandleSpawningSentries_d_16.h>
#include <Il2CppModLoader/app/types/SeinSpiritSpearSpellPuppet.h>
#include <Il2CppModLoader/app/types/SeinStomp_c.h>
#include <Il2CppModLoader/app/types/SeinTurretSpell_HandleSpawningSentries_d_40.h>
#include <Il2CppModLoader/app/types/SeinWallJumpPuppet.h>
#include <Il2CppModLoader/app/types/SeinWallJump_HandleChangeDirectionWhileJumpingInwards_d_50.h>
#include <Il2CppModLoader/app/types/SeinWallJump_RoutineToReenableAirDeceleration_d_52.h>
#include <Il2CppModLoader/app/types/SeinWallJump_c.h>
#include <Il2CppModLoader/app/types/SeinWallSlidePuppet.h>
#include <Il2CppModLoader/app/types/SpawnOnKill.h>
#include <Il2CppModLoader/app/types/VerticalCameraSettingsZone_c.h>
#include <Il2CppModLoader/app/types/XboxControllerInput_Button__Enum.h>
#include <Il2CppModLoader/app/types/XboxControllerInput_Button__Enum__Array.h>
#include <Il2CppModLoader/app/types/XboxOneController_AxisInput.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
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
    namespace SeinWallJump_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinWallJump_c__Class** type_info = (::app::SeinWallJump_c__Class**)(modloader::win::memory::resolve_rva(0x04759A70));
    }
    namespace SeinWallSlidePuppet {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinWallSlidePuppet__Class** type_info = (::app::SeinWallSlidePuppet__Class**)(modloader::win::memory::resolve_rva(0x0473EFE8));
    }
    namespace DetachOnKill {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DetachOnKill__Class** type_info = (::app::DetachOnKill__Class**)(modloader::win::memory::resolve_rva(0x04757E98));
    }
    namespace SpawnOnKill {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SpawnOnKill__Class** type_info = (::app::SpawnOnKill__Class**)(modloader::win::memory::resolve_rva(0x0476BC48));
    }
    namespace CharacterFactory {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CharacterFactory__Class** type_info = (::app::CharacterFactory__Class**)(modloader::win::memory::resolve_rva(0x047180F0));
    }
    namespace SeinCharacter_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinCharacter_c__Class** type_info = (::app::SeinCharacter_c__Class**)(modloader::win::memory::resolve_rva(0x047698E8));
    }
    namespace SeinLogicCycle_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinLogicCycle_c__Class** type_info = (::app::SeinLogicCycle_c__Class**)(modloader::win::memory::resolve_rva(0x04727C88));
    }
    namespace SeinSoulFlame_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinSoulFlame_c__Class** type_info = (::app::SeinSoulFlame_c__Class**)(modloader::win::memory::resolve_rva(0x04736118));
    }
    namespace PlayerInput {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerInput__Class** type_info = (::app::PlayerInput__Class**)(modloader::win::memory::resolve_rva(0x04750E20));
    }
    namespace CompoundAxisInput {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CompoundAxisInput__Class** type_info = (::app::CompoundAxisInput__Class**)(modloader::win::memory::resolve_rva(0x047580F0));
    }
    namespace InputCacheManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InputCacheManager__Class** type_info = (::app::InputCacheManager__Class**)(modloader::win::memory::resolve_rva(0x04703A50));
    }
    namespace InputCacheManager_SetupTempData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InputCacheManager_SetupTempData__Class** type_info = (::app::InputCacheManager_SetupTempData__Class**)(modloader::win::memory::resolve_rva(0x047237C8));
    }
    namespace InputCacheManager_SetupTempData_Node {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InputCacheManager_SetupTempData_Node__Class** type_info = (::app::InputCacheManager_SetupTempData_Node__Class**)(modloader::win::memory::resolve_rva(0x04784B30));
    }
    namespace XboxOneController_AxisInput {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XboxOneController_AxisInput__Class** type_info = (::app::XboxOneController_AxisInput__Class**)(modloader::win::memory::resolve_rva(0x0471B7C8));
    }
    namespace IAxisInput__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IAxisInput__Array__Class** type_info = (::app::IAxisInput__Array__Class**)(modloader::win::memory::resolve_rva(0x047160B8));
    }
    namespace CompoundButtonInput {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CompoundButtonInput__Class** type_info = (::app::CompoundButtonInput__Class**)(modloader::win::memory::resolve_rva(0x0470CFA8));
    }
    namespace IButtonInput__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IButtonInput__Array__Class** type_info = (::app::IButtonInput__Array__Class**)(modloader::win::memory::resolve_rva(0x0475C138));
    }
    namespace Input_InputButtonProcessor__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Input_InputButtonProcessor__Array__Class** type_info = (::app::Input_InputButtonProcessor__Array__Class**)(modloader::win::memory::resolve_rva(0x04747A58));
    }
    namespace KeyCodeButtonInput {
        IL2CPP_MODLOADER_DLLEXPORT ::app::KeyCodeButtonInput__Class** type_info = (::app::KeyCodeButtonInput__Class**)(modloader::win::memory::resolve_rva(0x04780B68));
    }
    namespace XboxControllerInput_Button__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XboxControllerInput_Button__Enum__Class** type_info = (::app::XboxControllerInput_Button__Enum__Class**)(modloader::win::memory::resolve_rva(0x0475F6D0));
    }
    namespace PlayerInputRebinding {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerInputRebinding__Class** type_info = (::app::PlayerInputRebinding__Class**)(modloader::win::memory::resolve_rva(0x04710308));
    }
    namespace XboxControllerInput_Button__Enum__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XboxControllerInput_Button__Enum__Array__Class** type_info = (::app::XboxControllerInput_Button__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04726DD0));
    }
    namespace PlayerInputRebinding_PlayerInputKey {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerInputRebinding_PlayerInputKey__Class** type_info = (::app::PlayerInputRebinding_PlayerInputKey__Class**)(modloader::win::memory::resolve_rva(0x04718818));
    }
    namespace PlayerInputRebinding_KeyBindingSettings_GetKeysIterator_d_74 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerInputRebinding_KeyBindingSettings_GetKeysIterator_d_74__Class** type_info = (::app::PlayerInputRebinding_KeyBindingSettings_GetKeysIterator_d_74__Class**)(modloader::win::memory::resolve_rva(0x047780A8));
    }
    namespace RestrictAbilityController {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RestrictAbilityController__Class** type_info = (::app::RestrictAbilityController__Class**)(modloader::win::memory::resolve_rva(0x04795708));
    }
    namespace SeinController_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinController_c__Class** type_info = (::app::SeinController_c__Class**)(modloader::win::memory::resolve_rva(0x04795C98));
    }
    namespace CleverMenuItem_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CleverMenuItem_c__Class** type_info = (::app::CleverMenuItem_c__Class**)(modloader::win::memory::resolve_rva(0x0471A690));
    }
    namespace CleverMenuItemSelectionManager_c_DisplayClass92_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CleverMenuItemSelectionManager_c_DisplayClass92_0__Class** type_info = (::app::CleverMenuItemSelectionManager_c_DisplayClass92_0__Class**)(modloader::win::memory::resolve_rva(0x0470B168));
    }
    namespace CleverMenuItemSelectionManager_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CleverMenuItemSelectionManager_c__Class** type_info = (::app::CleverMenuItemSelectionManager_c__Class**)(modloader::win::memory::resolve_rva(0x0472F640));
    }
    namespace HasComponentGameObjectFilter_c_DisplayClass3_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::HasComponentGameObjectFilter_c_DisplayClass3_0__Class** type_info = (::app::HasComponentGameObjectFilter_c_DisplayClass3_0__Class**)(modloader::win::memory::resolve_rva(0x0471F2C8));
    }
    namespace GameObjectReference {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GameObjectReference__Class** type_info = (::app::GameObjectReference__Class**)(modloader::win::memory::resolve_rva(0x047526C8));
    }
    namespace ListOfCollidedObjects_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ListOfCollidedObjects_c__Class** type_info = (::app::ListOfCollidedObjects_c__Class**)(modloader::win::memory::resolve_rva(0x04725108));
    }
} // namespace app::classes::types
