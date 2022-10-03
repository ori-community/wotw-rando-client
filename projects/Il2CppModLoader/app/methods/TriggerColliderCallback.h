#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::TriggerColliderCallback {
    IL2CPP_REGISTER_METHOD(0x00B13DA0, void, OnTriggerEnter, (app::TriggerColliderCallback * this_ptr, app::Collider* c))
    IL2CPP_REGISTER_METHOD(0x00B13DC0, void, OnTriggerStay, (app::TriggerColliderCallback * this_ptr, app::Collider* c))
    IL2CPP_REGISTER_METHOD(0x00B13DE0, void, OnTriggerExit, (app::TriggerColliderCallback * this_ptr, app::Collider* c))
    IL2CPP_REGISTER_METHOD(0x00B13E00, void, ctor, (app::TriggerColliderCallback * this_ptr))
} // namespace app::classes::TriggerColliderCallback
