#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::J2i::Net::XInputWrapper::XInputState {
    IL2CPP_REGISTER_METHOD(0x0024B690, void, Copy, (app::XInputState__Boxed * this_ptr, app::XInputState source))
    IL2CPP_REGISTER_METHOD(0x0024B6F0, bool, Equals, (app::XInputState__Boxed * this_ptr, app::Object * obj))
}
