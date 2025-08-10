#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_VelocityBezierSpline_VelocityBezierSplinePoint_.h>
#include <Modloader/app/structs/VelocityBezierSpline_VelocityBezierSplinePoint.h>

namespace app::classes::System::Collections::Generic::List_1_VelocityBezierSpline_VelocityBezierSplinePoint_ {
    IL2CPP_REGISTER_METHOD(0x025EAC80, void, Reverse, app::List_1_VelocityBezierSpline_VelocityBezierSplinePoint_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025EFC50,
        app::VelocityBezierSpline_VelocityBezierSplinePoint*,
        get_Item,
        app::List_1_VelocityBezierSpline_VelocityBezierSplinePoint_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_VelocityBezierSpline_VelocityBezierSplinePoint_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02F1EA40,
        void,
        Insert,
        app::List_1_VelocityBezierSpline_VelocityBezierSplinePoint_* this_ptr,
        int32_t index,
        app::VelocityBezierSpline_VelocityBezierSplinePoint* item
    )
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_VelocityBezierSpline_VelocityBezierSplinePoint_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025F12F0,
        bool,
        Remove,
        app::List_1_VelocityBezierSpline_VelocityBezierSplinePoint_* this_ptr,
        app::VelocityBezierSpline_VelocityBezierSplinePoint* item
    )
} // namespace app::classes::System::Collections::Generic::List_1_VelocityBezierSpline_VelocityBezierSplinePoint_
