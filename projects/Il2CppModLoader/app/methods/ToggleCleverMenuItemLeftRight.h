#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ToggleCleverMenuItemLeftRight {
    IL2CPP_REGISTER_METHOD(0x00AFC490, void, Awake, (app::ToggleCleverMenuItemLeftRight * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AFC5F0, bool, get_ItemSelected, (app::ToggleCleverMenuItemLeftRight * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AFC6E0, void, FixedUpdate, (app::ToggleCleverMenuItemLeftRight * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ToggleCleverMenuItemLeftRight * this_ptr))
} // namespace app::classes::ToggleCleverMenuItemLeftRight
