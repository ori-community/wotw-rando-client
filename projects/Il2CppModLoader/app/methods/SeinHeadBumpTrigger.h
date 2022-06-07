#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SeinHeadBumpTrigger {
    IL2CPP_REGISTER_METHOD(0x00FFB710, void, OnTriggerEnter, (app::SeinHeadBumpTrigger * this_ptr, app::Collider * collider))
    IL2CPP_REGISTER_METHOD(0x00FFB850, void, OnCollisionEnter, (app::SeinHeadBumpTrigger * this_ptr, app::Collision * other))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SeinHeadBumpTrigger * this_ptr))
}
