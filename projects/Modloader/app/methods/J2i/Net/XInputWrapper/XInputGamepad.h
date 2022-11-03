#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::J2i::Net::XInputWrapper::XInputGamepad {
    IL2CPP_REGISTER_METHOD(0x0024B610, bool, IsButtonPressed, (app::XInputGamepad__Boxed * this_ptr, int32_t button_flags))
    IL2CPP_REGISTER_METHOD(0x0024B620, void, Copy, (app::XInputGamepad__Boxed * this_ptr, app::XInputGamepad source))
    IL2CPP_REGISTER_METHOD(0x0024B680, bool, Equals, (app::XInputGamepad__Boxed * this_ptr, app::Object* obj))
} // namespace app::classes::J2i::Net::XInputWrapper::XInputGamepad
