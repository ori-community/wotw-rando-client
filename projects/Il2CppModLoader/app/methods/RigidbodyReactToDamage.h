#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RigidbodyReactToDamage {
    IL2CPP_REGISTER_METHOD(0x00505C70, void, Awake, (app::RigidbodyReactToDamage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01351160, void, OnRecieveDamage, (app::RigidbodyReactToDamage * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x013513C0, void, ctor, (app::RigidbodyReactToDamage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, (app::RigidbodyReactToDamage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, (app::RigidbodyReactToDamage * this_ptr))
} // namespace app::classes::RigidbodyReactToDamage
