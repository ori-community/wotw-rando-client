#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ListOfCollidedObjects {
    IL2CPP_REGISTER_METHOD(0x00FA87C0, void, OnCollisionEnter, (app::ListOfCollidedObjects * this_ptr, app::Collision * collision))
    IL2CPP_REGISTER_METHOD(0x00FA88C0, void, OnCollisionExit, (app::ListOfCollidedObjects * this_ptr, app::Collision * collision))
    IL2CPP_REGISTER_METHOD(0x00FA89C0, void, OnTriggerEnter, (app::ListOfCollidedObjects * this_ptr, app::Collider * other))
    IL2CPP_REGISTER_METHOD(0x00FA8AC0, void, OnTriggerExit, (app::ListOfCollidedObjects * this_ptr, app::Collider * other))
    IL2CPP_REGISTER_METHOD(0x00FA8BE0, void, OnEnable, (app::ListOfCollidedObjects * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FA8C90, void, FixedUpdate, (app::ListOfCollidedObjects * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FA8E80, void, ctor, (app::ListOfCollidedObjects * this_ptr))
}
