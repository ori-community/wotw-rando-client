#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SwingSoundController {
    IL2CPP_REGISTER_METHOD(0x01833180, void, Awake, (app::SwingSoundController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018334A0, void, OnTriggerEnter, (app::SwingSoundController * this_ptr, app::Collider * collider))
    IL2CPP_REGISTER_METHOD(0x018335E0, void, OnTriggerStay, (app::SwingSoundController * this_ptr, app::Collider * collider))
    IL2CPP_REGISTER_METHOD(0x01833720, void, FixedUpdate, (app::SwingSoundController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SwingSoundController * this_ptr))
}
