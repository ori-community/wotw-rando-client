#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UberPostProcess_Bezier {
    IL2CPP_REGISTER_METHOD(0x00153370, void, ctor, (app::UberPostProcess_Bezier__Boxed * this_ptr, app::Vector3 start, app::Vector3 end, float tangent1, float tangent2))
    IL2CPP_REGISTER_METHOD(0x001533C0, float, BezierSimple, (app::UberPostProcess_Bezier__Boxed * this_ptr, float t_len))
} // namespace app::classes::UberPostProcess_Bezier
