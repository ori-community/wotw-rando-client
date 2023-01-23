#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/CatmullSpline.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::CatmullSpline {
    IL2CPP_REGISTER_METHOD(0x02551F70, app::List_1_UnityEngine_Vector3_*, GetCatmullRomSplinePoints_1, (app::CatmullSpline * this_ptr, app::Vector3 p0, app::Vector3 p1, app::Vector3 p2, app::Vector3 p3))
    IL2CPP_REGISTER_METHOD(0x02552000, app::List_1_UnityEngine_Vector3_*, GetCatmullRomSplinePoints_2, (app::CatmullSpline * this_ptr, app::Vector3 p0, app::Vector3 p1, app::Vector3 p2, app::Vector3 p3, int32_t subdivisions))
    IL2CPP_REGISTER_METHOD(0x025522B0, app::Vector3, GetCatmullRomPosition, (app::CatmullSpline * this_ptr, float t, app::Vector3 p0, app::Vector3 p1, app::Vector3 p2, app::Vector3 p3))
    IL2CPP_REGISTER_METHOD(0x025526A0, void, ctor, (app::CatmullSpline * this_ptr))
} // namespace app::classes::CatmullSpline
