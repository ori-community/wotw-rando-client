#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PlayerPositionOverride {
    IL2CPP_REGISTER_METHOD(0x0043D9A0, app::SelectableCategory__Enum, get_Category, (app::PlayerPositionOverride * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01427530, void, Awake, (app::PlayerPositionOverride * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01427700, void, OnDisable, (app::PlayerPositionOverride * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014277B0, void, FixedUpdate, (app::PlayerPositionOverride * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01427C50, void, BeginOverride, (app::PlayerPositionOverride * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01427D80, void, EndOverride, (app::PlayerPositionOverride * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PlayerPositionOverride * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
}
