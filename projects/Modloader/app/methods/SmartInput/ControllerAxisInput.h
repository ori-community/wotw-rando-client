#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ControllerAxisInput.h>
#include <Modloader/app/structs/XboxControllerInput_Axis__Enum.h>

namespace app::classes::SmartInput::ControllerAxisInput {
    IL2CPP_REGISTER_METHOD(0x006CB400, void, ctor, app::ControllerAxisInput* this_ptr, app::XboxControllerInput_Axis__Enum axis)
    IL2CPP_REGISTER_METHOD(0x006CB430, float, GetValue, app::ControllerAxisInput* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00529FF0, app::XboxControllerInput_Axis__Enum, get_Axis, app::ControllerAxisInput* this_ptr)
} // namespace app::classes::SmartInput::ControllerAxisInput
