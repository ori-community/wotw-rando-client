#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::frameworks::Switch::ButtonInput {
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Button__Enum, get_Button, (app::ButtonInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00597BD0, void, ctor, (app::ButtonInput * this_ptr, app::Button__Enum button, bool any_pad))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, GetValue, (app::ButtonInput * this_ptr))
} // namespace app::classes::frameworks::Switch::ButtonInput
