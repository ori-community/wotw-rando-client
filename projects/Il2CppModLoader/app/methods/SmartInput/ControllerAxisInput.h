#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SmartInput::ControllerAxisInput {
    IL2CPP_REGISTER_METHOD(0x006CB400, void, ctor, (app::ControllerAxisInput * this_ptr, app::XboxControllerInput_Axis__Enum axis))
    IL2CPP_REGISTER_METHOD(0x006CB430, float, GetValue, (app::ControllerAxisInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, app::XboxControllerInput_Axis__Enum, get_Axis, (app::ControllerAxisInput * this_ptr))
}
