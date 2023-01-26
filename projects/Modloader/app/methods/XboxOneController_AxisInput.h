#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XboxOneController_AxisInput.h>
#include <Modloader/app/structs/XboxOneController_Axis__Enum.h>

namespace app::classes::XboxOneController_AxisInput {
    IL2CPP_REGISTER_METHOD(0x00597BC0, void, ctor, (app::XboxOneController_AxisInput * this_ptr, app::XboxOneController_Axis__Enum axis, bool any_pad))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::XboxOneController_Axis__Enum, get_Axis, (app::XboxOneController_AxisInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043BB80, float, GetValue, (app::XboxOneController_AxisInput * this_ptr))
} // namespace app::classes::XboxOneController_AxisInput
