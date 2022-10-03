#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MetaBallWaterZone {
    IL2CPP_REGISTER_METHOD(0x0159E290, void, FixedUpdate, (app::MetaBallWaterZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0159E8B0, void, OnEnter, (app::MetaBallWaterZone * this_ptr, app::Vector2 point, app::Vector2 velocity))
    IL2CPP_REGISTER_METHOD(0x0159ED40, void, OnExit, (app::MetaBallWaterZone * this_ptr, app::Vector2 point, app::Vector2 velocity))
    IL2CPP_REGISTER_METHOD(0x0159F1D0, app::Vector2, GetVelocityAtPoint, (app::MetaBallWaterZone * this_ptr, app::Vector2 point))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, Contains, (app::MetaBallWaterZone * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x0159F4A0, void, ctor, (app::MetaBallWaterZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0159F4F0, void, cctor, ())
} // namespace app::classes::MetaBallWaterZone
