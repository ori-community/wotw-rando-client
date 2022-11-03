#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CartBouncer {
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::Collider*, get_Collider, (app::CartBouncer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B33660, void, Awake, (app::CartBouncer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B336F0, void, OnTriggerEnter, (app::CartBouncer * this_ptr, app::Collider* other))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CartBouncer * this_ptr))
} // namespace app::classes::CartBouncer
