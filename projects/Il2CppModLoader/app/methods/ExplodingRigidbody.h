#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ExplodingRigidbody {
    IL2CPP_REGISTER_METHOD(0x00505C70, void, Awake, (app::ExplodingRigidbody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00987410, void, Start, (app::ExplodingRigidbody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009876D0, void, OnRecieveDamage, (app::ExplodingRigidbody * this_ptr, app::Damage * damage))
    IL2CPP_REGISTER_METHOD(0x00987C70, void, OnReceiveContext, (app::ExplodingRigidbody * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ExplodingRigidbody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject *, IDamageReciever_get_gameObject, (app::ExplodingRigidbody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform *, IDamageReciever_get_transform, (app::ExplodingRigidbody * this_ptr))
}
