#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::J2i::Net::XInputWrapper::XboxControllerStateChangedEventArgs {
    IL2CPP_REGISTER_METHOD(0x011927A0, void, set_CurrentInputState, (app::XboxControllerStateChangedEventArgs * this_ptr, app::XInputState value))
    IL2CPP_REGISTER_METHOD(0x02071D00, void, set_PreviousInputState, (app::XboxControllerStateChangedEventArgs * this_ptr, app::XInputState value))
    IL2CPP_REGISTER_METHOD(0x031BA170, void, ctor, (app::XboxControllerStateChangedEventArgs * this_ptr))
}
