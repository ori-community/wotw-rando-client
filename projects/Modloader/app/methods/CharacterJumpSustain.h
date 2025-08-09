#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/CharacterGravity.h>
#include <Modloader/app/structs/CharacterJumpSustain.h>
#include <Modloader/app/structs/PlatformMovement.h>

namespace app::classes::CharacterJumpSustain {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, app::CharacterJumpSustain* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01301620, app::CharacterGravity*, get_CharacterGravity, app::CharacterJumpSustain* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01051AC0, app::PlatformMovement*, get_PlatformMovement, app::CharacterJumpSustain* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D0850, void, OnEnable, app::CharacterJumpSustain* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01301640, void, Serialize, app::CharacterJumpSustain* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x013016D0, void, UpdateCharacterState, app::CharacterJumpSustain* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01301A60,
        void,
        SetAmountOfSpeedToLose,
        app::CharacterJumpSustain* this_ptr,
        float speed,
        float jump_stop_deceleration_multiplier,
        bool disable_sustain_for_this_jump
    )
    IL2CPP_REGISTER_METHOD(0x0102C720, void, DisableSustainForCurrentJump, app::CharacterJumpSustain* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01301A80, void, ctor, app::CharacterJumpSustain* this_ptr)
} // namespace app::classes::CharacterJumpSustain
