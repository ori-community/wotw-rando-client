#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XboxControllerStateChangedEventArgs.h>
#include <Modloader/app/structs/XInputState.h>

namespace app::classes::J2i::Net::XInputWrapper::XboxControllerStateChangedEventArgs {
    IL2CPP_REGISTER_METHOD(0x011927A0, void, set_CurrentInputState, (app::XboxControllerStateChangedEventArgs * this_ptr, app::XInputState value))
    IL2CPP_REGISTER_METHOD(0x02071D00, void, set_PreviousInputState, (app::XboxControllerStateChangedEventArgs * this_ptr, app::XInputState value))
    IL2CPP_REGISTER_METHOD(0x031BA170, void, ctor, (app::XboxControllerStateChangedEventArgs * this_ptr))
} // namespace app::classes::J2i::Net::XInputWrapper::XboxControllerStateChangedEventArgs
