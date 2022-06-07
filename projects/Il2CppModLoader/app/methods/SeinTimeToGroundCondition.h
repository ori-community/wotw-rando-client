#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SeinTimeToGroundCondition {
    IL2CPP_REGISTER_METHOD(0x00A9E010, bool, Validate, (app::SeinTimeToGroundCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00A9E0D0, bool, IsValid, (app::SeinTimeToGroundCondition_Characters__Enum character_to_check, float anticipation_time))
    IL2CPP_REGISTER_METHOD(0x00A9E2A0, bool, IsAnticipatingLanding, (app::CharacterPlatformMovement * platform_movement, float anticipation_time))
    IL2CPP_REGISTER_METHOD(0x00A9E5F0, bool, CheckOri, (float anticipation_time))
    IL2CPP_REGISTER_METHOD(0x00A9E8A0, bool, CheckKu, (float anticipation_time))
    IL2CPP_REGISTER_METHOD(0x00444DD0, void, ctor, (app::SeinTimeToGroundCondition * this_ptr))
}
