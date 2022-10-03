#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CharacterGravityToGround {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (app::CharacterGravityToGround * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013006A0, app::CharacterGravity*, get_CharacterGravity, (app::CharacterGravityToGround * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013006C0, app::PlatformMovement*, get_PlatformMovement, (app::CharacterGravityToGround * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013006E0, void, Start, (app::CharacterGravityToGround * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013007C0, void, UpdateCharacterState, (app::CharacterGravityToGround * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01301010, void, SetTargetAngle, (app::CharacterGravityToGround * this_ptr, float gravity_angle, bool force_change))
    IL2CPP_REGISTER_METHOD(0x01301110, void, UpdateAngle, (app::CharacterGravityToGround * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013013A0, void, ctor, (app::CharacterGravityToGround * this_ptr))
} // namespace app::classes::CharacterGravityToGround
