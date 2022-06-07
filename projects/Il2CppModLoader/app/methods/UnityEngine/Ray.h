#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Ray {
    IL2CPP_REGISTER_METHOD(0x00217910, void, ctor, (app::Ray__Boxed * this_ptr, app::Vector3 origin, app::Vector3 direction))
    IL2CPP_REGISTER_METHOD(0x001EB5F0, app::Vector3, get_origin, (app::Ray__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EB610, void, set_origin, (app::Ray__Boxed * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x001EB680, app::Vector3, get_direction, (app::Ray__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002179F0, void, set_direction, (app::Ray__Boxed * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x00217AC0, app::Vector3, GetPoint, (app::Ray__Boxed * this_ptr, float distance))
    IL2CPP_REGISTER_METHOD(0x00217AF0, app::String *, ToString, (app::Ray__Boxed * this_ptr))
}
