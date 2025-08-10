#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BaseSpline_SplinePointType__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/VelocityBezierSpline.h>
#include <Modloader/app/structs/VelocityBezierSpline_VelocityBezierSplinePoint.h>
#include <Modloader/app/structs/VelocityBezierSpline_VelocityBezierSplineSegment.h>

namespace app::classes::VelocityBezierSpline {
    IL2CPP_REGISTER_METHOD(0x013BCE90, void, ReversePoints, app::VelocityBezierSpline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013BD030, void, FlipXPoints, app::VelocityBezierSpline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013BD150, void, FlipYPoints, app::VelocityBezierSpline* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x013BD270,
        void,
        InsertPoint,
        app::VelocityBezierSpline* this_ptr,
        int32_t idx,
        app::Vector3 pos,
        app::BaseSpline_SplinePointType__Enum type,
        app::Vector3 cp1,
        app::Vector3 cp2,
        app::Vector3 v,
        app::Vector3 p_v,
        app::Vector3 n_v
    )
    IL2CPP_REGISTER_METHOD(0x013BD4C0, void, Rebuild, app::VelocityBezierSpline* this_ptr, bool calculate_length)
    IL2CPP_REGISTER_METHOD(
        0x013BDB80,
        void,
        BuildSegment,
        app::VelocityBezierSpline* this_ptr,
        app::VelocityBezierSpline_VelocityBezierSplineSegment* ss,
        app::VelocityBezierSpline_VelocityBezierSplinePoint* pp,
        app::VelocityBezierSpline_VelocityBezierSplinePoint* sp,
        app::VelocityBezierSpline_VelocityBezierSplinePoint* ep,
        app::VelocityBezierSpline_VelocityBezierSplinePoint* np
    )
    IL2CPP_REGISTER_METHOD(
        0x013BE3A0,
        void,
        PreparePoint,
        app::VelocityBezierSpline* this_ptr,
        app::VelocityBezierSpline_VelocityBezierSplinePoint* pp,
        app::VelocityBezierSpline_VelocityBezierSplinePoint* pt,
        app::VelocityBezierSpline_VelocityBezierSplinePoint* np
    )
    IL2CPP_REGISTER_METHOD(0x013BE7B0, float, GetLength, app::VelocityBezierSpline* this_ptr, app::VelocityBezierSpline_VelocityBezierSplineSegment* ss)
    IL2CPP_REGISTER_METHOD(
        0x013BEA10,
        app::Vector3,
        GetPosition_1,
        app::VelocityBezierSpline* this_ptr,
        app::VelocityBezierSpline_VelocityBezierSplineSegment* ss,
        float t
    )
    IL2CPP_REGISTER_METHOD(
        0x013BED40,
        app::Vector3,
        GetTangent_1,
        app::VelocityBezierSpline* this_ptr,
        app::VelocityBezierSpline_VelocityBezierSplineSegment* ss,
        float t
    )
    IL2CPP_REGISTER_METHOD(
        0x013BF050,
        app::Vector3,
        GetNormal_1,
        app::VelocityBezierSpline* this_ptr,
        app::VelocityBezierSpline_VelocityBezierSplineSegment* ss,
        float t
    )
    IL2CPP_REGISTER_METHOD(
        0x013BF0B0,
        app::Vector3,
        GetSpeed_1,
        app::VelocityBezierSpline* this_ptr,
        app::VelocityBezierSpline_VelocityBezierSplineSegment* ss,
        float t
    )
    IL2CPP_REGISTER_METHOD(
        0x013BF3E0,
        float,
        GetParameter,
        app::VelocityBezierSpline* this_ptr,
        app::VelocityBezierSpline_VelocityBezierSplineSegment* ss,
        float t,
        float start_value,
        float end_value
    )
    IL2CPP_REGISTER_METHOD(
        0x013BF4F0,
        float,
        GetReparamRungeKutta,
        app::VelocityBezierSpline* this_ptr,
        app::VelocityBezierSpline_VelocityBezierSplineSegment* ss,
        float u
    )
    IL2CPP_REGISTER_METHOD(
        0x013BF760,
        float,
        GetReparam,
        app::VelocityBezierSpline* this_ptr,
        app::VelocityBezierSpline_VelocityBezierSplineSegment* ss,
        float u
    )
    IL2CPP_REGISTER_METHOD(0x013BFAB0, int32_t, GetPointCount, app::VelocityBezierSpline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013BFB40, app::Vector3, GetPoint, app::VelocityBezierSpline* this_ptr, int32_t n)
    IL2CPP_REGISTER_METHOD(0x00FA2000, int32_t, GetSegmentCount, app::VelocityBezierSpline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FA2010, float, GetSegmentLength, app::VelocityBezierSpline* this_ptr, int32_t segidx)
    IL2CPP_REGISTER_METHOD(0x013BFC20, float, GetSegmentOffset, app::VelocityBezierSpline* this_ptr, int32_t segidx)
    IL2CPP_REGISTER_METHOD(0x00FA2060, float, GetSegmentStartLength, app::VelocityBezierSpline* this_ptr, int32_t segidx)
    IL2CPP_REGISTER_METHOD(0x00FA20B0, float, GetSegmentEndLength, app::VelocityBezierSpline* this_ptr, int32_t segidx)
    IL2CPP_REGISTER_METHOD(0x00FA2100, int32_t, FindSegment, app::VelocityBezierSpline* this_ptr, float offset)
    IL2CPP_REGISTER_METHOD(0x013BFC80, app::Vector3, GetDrawPosition, app::VelocityBezierSpline* this_ptr, int32_t segidx, float t)
    IL2CPP_REGISTER_METHOD(0x013BFE00, app::Vector3, GetPosition_2, app::VelocityBezierSpline* this_ptr, int32_t segidx, float segpos)
    IL2CPP_REGISTER_METHOD(0x013BFFA0, app::Vector3, GetTangent_2, app::VelocityBezierSpline* this_ptr, int32_t segidx, float segpos)
    IL2CPP_REGISTER_METHOD(0x013C0150, app::Vector3, GetNormal_2, app::VelocityBezierSpline* this_ptr, int32_t segidx, float segpos)
    IL2CPP_REGISTER_METHOD(0x013C0370, app::Vector3, GetSpeed_2, app::VelocityBezierSpline* this_ptr, int32_t segidx, float segpos)
    IL2CPP_REGISTER_METHOD(0x013C0520, app::Vector3, GetVelocity, app::VelocityBezierSpline* this_ptr, int32_t segidx, float segpos)
    IL2CPP_REGISTER_METHOD(0x013C0690, app::String*, GetAction, app::VelocityBezierSpline* this_ptr, int32_t segidx, float segpos)
    IL2CPP_REGISTER_METHOD(0x013C0750, app::String*, PopAction, app::VelocityBezierSpline* this_ptr, int32_t segidx, float segpos)
    IL2CPP_REGISTER_METHOD(0x013C0830, void, ctor, app::VelocityBezierSpline* this_ptr)
} // namespace app::classes::VelocityBezierSpline
