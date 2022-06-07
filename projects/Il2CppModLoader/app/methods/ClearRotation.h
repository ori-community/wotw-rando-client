#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ClearRotation {
    IL2CPP_REGISTER_METHOD(0x01326B20, app::Quaternion, get_EffectiveRotation, (app::ClearRotation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01326C20, void, set_EffectiveRotation, (app::ClearRotation * this_ptr, app::Quaternion value))
    IL2CPP_REGISTER_METHOD(0x010A2630, void, Awake, (app::ClearRotation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01326D10, void, Update, (app::ClearRotation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01326E00, void, LateUpdate, (app::ClearRotation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01326EF0, void, OnEnable, (app::ClearRotation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01326FE0, void, OnDisable, (app::ClearRotation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013270D0, void, ctor, (app::ClearRotation * this_ptr))
}
