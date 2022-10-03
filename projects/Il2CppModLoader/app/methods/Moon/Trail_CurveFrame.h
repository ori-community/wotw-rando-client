#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Trail_CurveFrame {
    IL2CPP_REGISTER_METHOD(0x001F9D70, void, ctor, (app::Trail_CurveFrame__Boxed * this_ptr, app::Vector3 position, app::Vector3 normal, app::Vector3 bitangent, app::Vector3 tangent))
    IL2CPP_REGISTER_METHOD(0x001F9DC0, app::Vector3, Transport, (app::Trail_CurveFrame__Boxed * this_ptr, app::Vector3 new_tangent, app::Vector3 new_position))
} // namespace app::classes::Moon::Trail_CurveFrame
