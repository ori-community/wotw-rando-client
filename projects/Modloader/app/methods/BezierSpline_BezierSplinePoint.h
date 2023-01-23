#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BezierSpline_BezierSplinePoint.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/BaseSpline_SplinePointType__Enum.h>

namespace app::classes::BezierSpline_BezierSplinePoint {
    IL2CPP_REGISTER_METHOD(0x00D293C0, void, ctor, (app::BezierSpline_BezierSplinePoint * this_ptr, app::Vector3 p, app::Vector3 c1, app::Vector3 c2, app::BaseSpline_SplinePointType__Enum t))
}
