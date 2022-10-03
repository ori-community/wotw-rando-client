#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SoftCollider {
    IL2CPP_REGISTER_METHOD(0x00EE29E0, void, OnEnable, (app::SoftCollider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EE2AF0, void, OnTriggerEnter, (app::SoftCollider * this_ptr, app::Collider* other))
    IL2CPP_REGISTER_METHOD(0x00EE2C00, void, OnTriggerStay, (app::SoftCollider * this_ptr, app::Collider* other))
    IL2CPP_REGISTER_METHOD(0x00EE2D10, void, OnTriggerExit, (app::SoftCollider * this_ptr, app::Collider* other))
    IL2CPP_REGISTER_METHOD(0x00EE2DB0, bool, Collide, (app::SoftCollider * this_ptr, app::Collider* other))
    IL2CPP_REGISTER_METHOD(0x00EE33F0, void, ctor, (app::SoftCollider * this_ptr))
} // namespace app::classes::SoftCollider
