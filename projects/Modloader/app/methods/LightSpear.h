#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::LightSpear {
    IL2CPP_REGISTER_METHOD(0x0114F810, void, Awake, (app::LightSpear * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0114F8A0, void, FixedUpdate, (app::LightSpear * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0114FAB0, void, OnTriggerEnter, (app::LightSpear * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x0114FF20, void, ctor, (app::LightSpear * this_ptr))
} // namespace app::classes::LightSpear
