#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinSpriteRotationController.h>
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/SeinCrouch.h>
#include <Modloader/app/structs/SeinStomp.h>
#include <Modloader/app/structs/SeinBashAttack.h>
#include <Modloader/app/structs/Archive.h>

namespace app::classes::SeinSpriteRotationController {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (app::SeinSpriteRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::CharacterPlatformMovement*, get_PlatformMovement, (app::SeinSpriteRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A79BE0, app::SeinCrouch*, get_Crouch, (app::SeinSpriteRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A79C20, app::SeinStomp*, get_Stomp, (app::SeinSpriteRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A79C60, app::SeinBashAttack*, get_BashAttack, (app::SeinSpriteRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A79CA0, bool, get_IsStomping, (app::SeinSpriteRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A79DD0, void, BeginTiltLeftRightInAir, (app::SeinSpriteRotationController * this_ptr, float duration))
    IL2CPP_REGISTER_METHOD(0x00A79DF0, void, ResetTiltAir, (app::SeinSpriteRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A79F80, void, BeginTiltUpDownInAir, (app::SeinSpriteRotationController * this_ptr, float duration))
    IL2CPP_REGISTER_METHOD(0x00A79F90, void, UpdateUnderwaterRotation, (app::SeinSpriteRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A7A040, void, UpdateCinematicRotation, (app::SeinSpriteRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A7A1E0, void, UpdateRegularRotation, (app::SeinSpriteRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A7B490, void, UpdateCharacterState, (app::SeinSpriteRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A7BBB0, void, UpdateDashingRotation, (app::SeinSpriteRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A7BCC0, void, UpdateSpiritSlashRotation, (app::SeinSpriteRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A7BDD0, void, UpdateRotation, (app::SeinSpriteRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A7BFC0, void, Serialize, (app::SeinSpriteRotationController * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDrawGizmos, (app::SeinSpriteRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C9550, void, ctor, (app::SeinSpriteRotationController * this_ptr))
} // namespace app::classes::SeinSpriteRotationController
