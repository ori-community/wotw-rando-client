#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::OnCollisionTrigger {
    IL2CPP_REGISTER_METHOD(0x00610F80, void, OnCollisionEnter, (app::OnCollisionTrigger * this_ptr, app::Collision * collision))
    IL2CPP_REGISTER_METHOD(0x00611140, void, OnCollisionExit, (app::OnCollisionTrigger * this_ptr, app::Collision * collision))
    IL2CPP_REGISTER_METHOD(0x00611300, void, OnTriggerEnter, (app::OnCollisionTrigger * this_ptr, app::Collider * other))
    IL2CPP_REGISTER_METHOD(0x006114B0, void, OnTriggerExit, (app::OnCollisionTrigger * this_ptr, app::Collider * other))
    IL2CPP_REGISTER_METHOD(0x00611660, void, OnTriggerStay, (app::OnCollisionTrigger * this_ptr, app::Collider * other))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::OnCollisionTrigger * this_ptr))
}
