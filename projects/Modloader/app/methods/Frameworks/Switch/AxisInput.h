#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AxisInput.h>
#include <Modloader/app/structs/Axis__Enum_1.h>

namespace app::classes::frameworks::Switch::AxisInput {
    IL2CPP_REGISTER_METHOD(0x00597BC0, void, ctor, app::AxisInput* this_ptr, app::Axis__Enum_1 axis, bool any_pad)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Axis__Enum_1, get_Axis, app::AxisInput* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0043BB80, float, GetValue, app::AxisInput* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0043BB80, float, GetAxis, app::Axis__Enum_1 axis)
} // namespace app::classes::frameworks::Switch::AxisInput
