#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BaseSpline_SplinePointType__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/VelocityBezierSpline_VelocityBezierSplinePoint.h>

namespace app::classes::VelocityBezierSpline_VelocityBezierSplinePoint {
    IL2CPP_REGISTER_METHOD(
        0x013C0990,
        void,
        ctor,
        app::VelocityBezierSpline_VelocityBezierSplinePoint* this_ptr,
        app::Vector3 p,
        app::Vector3 c1,
        app::Vector3 c2,
        app::BaseSpline_SplinePointType__Enum t,
        app::Vector3 v,
        app::Vector3 p_v,
        app::Vector3 n_v
    )
}
