#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ReusableFunctions {
    IL2CPP_REGISTER_METHOD(0x0090FAA0, app::List_1_UnityEngine_Vector3_ *, GenerateVerticesFromPointList, (app::List_1_UnityEngine_Vector3_ * points, float thickness))
    IL2CPP_REGISTER_METHOD(0x0090FEF0, app::List_1_System_Int32_ *, GenerateTriangleLineStrip, (int32_t point_count))
    IL2CPP_REGISTER_METHOD(0x00910450, app::Vector3, NormalFromThreePoints, (app::Vector3 point_a, app::Vector3 point_b, app::Vector3 point_c))
}
