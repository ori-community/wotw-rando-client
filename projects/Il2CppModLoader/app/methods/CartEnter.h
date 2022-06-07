#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CartEnter {
    IL2CPP_REGISTER_METHOD(0x00B37300, void, OnTriggerEnter, (app::CartEnter * this_ptr, app::Collider * col))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CartEnter * this_ptr))
}
