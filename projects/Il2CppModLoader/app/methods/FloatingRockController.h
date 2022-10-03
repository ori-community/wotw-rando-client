#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::FloatingRockController {
    IL2CPP_REGISTER_METHOD(0x01272C50, void, Awake, (app::FloatingRockController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01272DB0, void, OnEnable, (app::FloatingRockController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01272FE0, void, FixedUpdate, (app::FloatingRockController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::FloatingRockController * this_ptr))
} // namespace app::classes::FloatingRockController
