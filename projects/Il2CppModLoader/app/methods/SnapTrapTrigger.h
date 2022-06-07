#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SnapTrapTrigger {
    IL2CPP_REGISTER_METHOD(0x00ED3B60, void, Awake, (app::SnapTrapTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ED3D50, void, FixedUpdate, (app::SnapTrapTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ED3F50, void, OnTriggerStay, (app::SnapTrapTrigger * this_ptr, app::Collider * other))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SnapTrapTrigger * this_ptr))
}
