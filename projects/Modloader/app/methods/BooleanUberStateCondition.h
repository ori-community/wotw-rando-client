#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BooleanUberStateCondition.h>

namespace app::classes::BooleanUberStateCondition {
    IL2CPP_REGISTER_METHOD(0x01B55AA0, void, ctor, app::BooleanUberStateCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B55BC0, bool, Validate_1, app::BooleanUberStateCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B55CC0, bool, Validate_2, app::BooleanUberStateCondition* this_ptr, bool external_value)
    IL2CPP_REGISTER_METHOD(0x01B55CE0, bool, get_DesiredValue, app::BooleanUberStateCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B55DB0, void, set_DesiredValue, app::BooleanUberStateCondition* this_ptr, bool value)
} // namespace app::classes::BooleanUberStateCondition
