#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::XboxOneController_ButtonInput {
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::XboxOneController_Button__Enum, get_Button, (app::XboxOneController_ButtonInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00597BD0, void, ctor, (app::XboxOneController_ButtonInput * this_ptr, app::XboxOneController_Button__Enum button, bool any_pad))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, GetValue, (app::XboxOneController_ButtonInput * this_ptr))
} // namespace app::classes::XboxOneController_ButtonInput
