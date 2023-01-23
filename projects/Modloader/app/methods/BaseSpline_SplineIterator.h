#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BaseSpline_SplineIterator.h>
#include <Modloader/app/structs/BaseSpline.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::BaseSpline_SplineIterator {
    IL2CPP_REGISTER_METHOD(0x00F89440, void, ctor, (app::BaseSpline_SplineIterator * this_ptr, app::BaseSpline* spline, bool reverse, int32_t startidx, int32_t endidx))
    IL2CPP_REGISTER_METHOD(0x00F895E0, void, Reset_1, (app::BaseSpline_SplineIterator * this_ptr, app::BaseSpline* spline, bool reverse, int32_t startidx, int32_t endidx))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, SetTransform, (app::BaseSpline_SplineIterator * this_ptr, app::Transform* _transform))
    IL2CPP_REGISTER_METHOD(0x00F89730, void, SetMatrix_1, (app::BaseSpline_SplineIterator * this_ptr, app::Matrix4x4 _matrix))
    IL2CPP_REGISTER_METHOD(0x00F89760, void, SetMatrix_2, (app::BaseSpline_SplineIterator * this_ptr, app::Transform* _transform))
    IL2CPP_REGISTER_METHOD(0x00F897B0, app::Vector3, GetPosition_1, (app::BaseSpline_SplineIterator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F89A60, app::Vector3, GetPosition_2, (app::BaseSpline_SplineIterator * this_ptr, app::Matrix4x4* m))
    IL2CPP_REGISTER_METHOD(0x00F89BB0, app::Vector3, GetPosition_3, (app::BaseSpline_SplineIterator * this_ptr, app::Matrix4x4* m, float offset_percent))
    IL2CPP_REGISTER_METHOD(0x00F89D80, app::Vector3, StartPos, (app::BaseSpline_SplineIterator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8A020, app::Vector3, EndPos, (app::BaseSpline_SplineIterator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8A2F0, app::Vector3, GetTangent, (app::BaseSpline_SplineIterator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8A770, app::Vector3, GetNormal, (app::BaseSpline_SplineIterator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8A9E0, app::Matrix4x4, GetTransformMatrix, (app::BaseSpline_SplineIterator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8AB00, app::Vector3, TransformPoint, (app::BaseSpline_SplineIterator * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x00F8AD50, app::Vector3, InvTransformPoint, (app::BaseSpline_SplineIterator * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x00F8B050, app::Vector3, GetSpeed, (app::BaseSpline_SplineIterator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8B0B0, app::Vector3, GetVelocity, (app::BaseSpline_SplineIterator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8B110, app::Color, GetColor, (app::BaseSpline_SplineIterator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8B160, app::Color, GetHighlight, (app::BaseSpline_SplineIterator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A64080, bool, IsOnceOut, (app::BaseSpline_SplineIterator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8B1B0, void, Reset_2, (app::BaseSpline_SplineIterator * this_ptr, bool reverse))
    IL2CPP_REGISTER_METHOD(0x00F8B240, void, SetOffset, (app::BaseSpline_SplineIterator * this_ptr, float offset))
    IL2CPP_REGISTER_METHOD(0x00F8B2D0, float, GetOffset, (app::BaseSpline_SplineIterator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8B310, float, GetFullOffset, (app::BaseSpline_SplineIterator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8B370, void, SetOffsetPercent, (app::BaseSpline_SplineIterator * this_ptr, float offset))
    IL2CPP_REGISTER_METHOD(0x00F8B410, float, GetCurrentSegmentOffsetK, (app::BaseSpline_SplineIterator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8B460, float, GetOffsetPercent, (app::BaseSpline_SplineIterator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8B500, void, Iterate, (app::BaseSpline_SplineIterator * this_ptr, float length))
    IL2CPP_REGISTER_METHOD(0x00F8B770, void, SetToStart, (app::BaseSpline_SplineIterator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8B780, void, SetToEnd, (app::BaseSpline_SplineIterator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00998570, int32_t, Loops, (app::BaseSpline_SplineIterator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, GetSegment, (app::BaseSpline_SplineIterator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8B7C0, app::String*, GetAction, (app::BaseSpline_SplineIterator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8B810, app::String*, PopAction, (app::BaseSpline_SplineIterator * this_ptr))
} // namespace app::classes::BaseSpline_SplineIterator
