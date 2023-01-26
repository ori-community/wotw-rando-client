#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ControllerButtonInput.h>
#include <Modloader/app/structs/XboxControllerInput_Button__Enum.h>

namespace app::classes::SmartInput::ControllerButtonInput {
    IL2CPP_REGISTER_METHOD(0x006CB4D0, void, ctor, (app::ControllerButtonInput * this_ptr, app::XboxControllerInput_Button__Enum button))
    IL2CPP_REGISTER_METHOD(0x006CB500, bool, GetValue, (app::ControllerButtonInput * this_ptr))
} // namespace app::classes::SmartInput::ControllerButtonInput
