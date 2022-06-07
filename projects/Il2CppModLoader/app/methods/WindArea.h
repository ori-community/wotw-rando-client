#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::WindArea {
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::Transform *, get_Transform, (app::WindArea * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Transform, (app::WindArea * this_ptr, app::Transform * value))
    IL2CPP_REGISTER_METHOD(0x00574DD0, void, Awake, (app::WindArea * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00574F00, void, OnDestroy, (app::WindArea * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00574FA0, void, OnTriggerEnter, (app::WindArea * this_ptr, app::Collider * collider))
    IL2CPP_REGISTER_METHOD(0x00574FA0, void, OnTriggerStay, (app::WindArea * this_ptr, app::Collider * collider))
    IL2CPP_REGISTER_METHOD(0x00574FB0, void, OnOverlap, (app::WindArea * this_ptr, app::Collider * collider))
    IL2CPP_REGISTER_METHOD(0x00575060, void, FixedUpdate, (app::WindArea * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00575070, app::Vector3, get_WindSpeed, (app::WindArea * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00575230, float, get_WindHorizontalAcceleration, (app::WindArea * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00575340, float, get_WindVerticalAcceleration, (app::WindArea * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00575450, bool, get_IsOverlapping, (app::WindArea * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00575460, void, set_IsOverlapping, (app::WindArea * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00575470, bool, get_IsSuspended, (app::WindArea * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00575480, void, set_IsSuspended, (app::WindArea * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FF3C0, app::SuspendableMask__Enum, get_Mask, (app::WindArea * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00575490, void, set_Mask, (app::WindArea * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00575540, void, ctor, (app::WindArea * this_ptr))
}
