#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ShieldCollision {
    IL2CPP_REGISTER_METHOD(0x005B4E80, void, OnTriggerEnter, (app::ShieldCollision * this_ptr, app::Collider* col))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ShieldCollision * this_ptr))
} // namespace app::classes::ShieldCollision
