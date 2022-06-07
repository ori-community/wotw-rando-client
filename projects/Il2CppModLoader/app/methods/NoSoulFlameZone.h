#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::NoSoulFlameZone {
    IL2CPP_REGISTER_METHOD(0x0060A400, void, OnEnable, (app::NoSoulFlameZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060A4C0, void, OnDisable, (app::NoSoulFlameZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060A580, void, Awake, (app::NoSoulFlameZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C3FE0, app::Rect, get_BoundingRect, (app::NoSoulFlameZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060A8A0, void, set_BoundingRect, (app::NoSoulFlameZone * this_ptr, app::Rect value))
    IL2CPP_REGISTER_METHOD(0x0043D9A0, app::SelectableCategory__Enum, get_Category, (app::NoSoulFlameZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::NoSoulFlameZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060A8B0, void, cctor, ())
}
