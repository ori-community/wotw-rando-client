#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ControlItem_c.h>
#include <Modloader/app/structs/IButtonInput.h>

namespace app::classes::ControlItem___c {
    IL2CPP_REGISTER_METHOD(0x011E92E0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ControlItem_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011E9420, bool, _AssignFromCommandInputButton_b__8_0, (app::ControlItem_c * this_ptr, app::IButtonInput* k))
} // namespace app::classes::ControlItem___c
