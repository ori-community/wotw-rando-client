#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CharacterPlatformMovement_ScheduledSpeedCurve {
    IL2CPP_REGISTER_METHOD(0x01312050, bool, get_ApplyDirection, (app::CharacterPlatformMovement_ScheduledSpeedCurve * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01312090, bool, get_ApplyOnX, (app::CharacterPlatformMovement_ScheduledSpeedCurve * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013120D0, bool, get_ApplyOnY, (app::CharacterPlatformMovement_ScheduledSpeedCurve * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01312110, bool, get_Finished, (app::CharacterPlatformMovement_ScheduledSpeedCurve * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043C0F0, float, get_Time, (app::CharacterPlatformMovement_ScheduledSpeedCurve * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01312230, void, ctor_1, (app::CharacterPlatformMovement_ScheduledSpeedCurve * this_ptr, app::CharacterPlatformMovement_SpeedSpace__Enum space, bool additive, app::AnimationCurve* curve_x, app::AnimationCurve* curve_y, float curve_scale_x, float curve_scale_y, app::Func_1_Boolean_* can_continue))
    IL2CPP_REGISTER_METHOD(0x01312280, void, ctor_2, (app::CharacterPlatformMovement_ScheduledSpeedCurve * this_ptr, app::CharacterPlatformMovement_SpeedSpace__Enum space, bool additive, app::AnimationCurve* curve, app::Vector2 direction, float curve_scale, float time_scale, app::Func_1_Boolean_* can_continue))
    IL2CPP_REGISTER_METHOD(0x013122E0, void, Step, (app::CharacterPlatformMovement_ScheduledSpeedCurve * this_ptr, app::CharacterPlatformMovement* target, float delta_time))
} // namespace app::classes::CharacterPlatformMovement_ScheduledSpeedCurve
