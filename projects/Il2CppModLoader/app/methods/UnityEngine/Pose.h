#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Pose {
    IL2CPP_REGISTER_METHOD(0x001FE8F0, void, ctor, (app::Pose__Boxed * this_ptr, app::Vector3 position, app::Quaternion rotation))
    IL2CPP_REGISTER_METHOD(0x002170A0, app::String *, ToString, (app::Pose__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00217190, bool, Equals_1, (app::Pose__Boxed * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x00217280, bool, Equals_2, (app::Pose__Boxed * this_ptr, app::Pose other))
    IL2CPP_REGISTER_METHOD(0x002172C0, int32_t, GetHashCode, (app::Pose__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02968200, void, cctor, ())
}
