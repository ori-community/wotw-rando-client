#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BaseSpline_SplinePointType__Enum.h>
#include <Modloader/app/structs/BezierSpline.h>
#include <Modloader/app/structs/BezierSpline_BezierSplinePoint.h>
#include <Modloader/app/structs/BezierSpline_BezierSplineSegment.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::BezierSpline {
    IL2CPP_REGISTER_METHOD(
        0x00F9F600,
        void,
        AppendPoint,
        app::BezierSpline* this_ptr,
        app::Vector3 pos,
        app::BaseSpline_SplinePointType__Enum type,
        app::Vector3 cp1,
        app::Vector3 cp2
    )
    IL2CPP_REGISTER_METHOD(0x00F9F7B0, void, RemoveLastPoint, app::BezierSpline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F9F840, void, RemoveAllPoints, app::BezierSpline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F9F8F0, void, ReversePoints, app::BezierSpline* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00F9FA90,
        void,
        InsertPoint,
        app::BezierSpline* this_ptr,
        int32_t idx,
        app::Vector3 pos,
        app::BaseSpline_SplinePointType__Enum type,
        app::Vector3 cp1,
        app::Vector3 cp2
    )
    IL2CPP_REGISTER_METHOD(0x00F9FCA0, void, Rebuild, app::BezierSpline* this_ptr, bool calculate_length)
    IL2CPP_REGISTER_METHOD(
        0x00FA0440,
        void,
        BuildSegment,
        app::BezierSpline* this_ptr,
        app::BezierSpline_BezierSplineSegment* ss,
        app::BezierSpline_BezierSplinePoint* pp,
        app::BezierSpline_BezierSplinePoint* sp,
        app::BezierSpline_BezierSplinePoint* ep,
        app::BezierSpline_BezierSplinePoint* np
    )
    IL2CPP_REGISTER_METHOD(
        0x00FA0B40,
        void,
        PreparePoint,
        app::BezierSpline* this_ptr,
        app::BezierSpline_BezierSplinePoint* pp,
        app::BezierSpline_BezierSplinePoint* pt,
        app::BezierSpline_BezierSplinePoint* np
    )
    IL2CPP_REGISTER_METHOD(0x00FA0DB0, float, GetLength, app::BezierSpline* this_ptr, app::BezierSpline_BezierSplineSegment* ss)
    IL2CPP_REGISTER_METHOD(0x00FA1010, app::Vector3, GetPosition_1, app::BezierSpline* this_ptr, app::BezierSpline_BezierSplineSegment* ss, float t)
    IL2CPP_REGISTER_METHOD(0x00FA1340, app::Vector3, GetTangent_1, app::BezierSpline* this_ptr, app::BezierSpline_BezierSplineSegment* ss, float t)
    IL2CPP_REGISTER_METHOD(0x00FA1650, app::Vector3, GetNormal_1, app::BezierSpline* this_ptr, app::BezierSpline_BezierSplineSegment* ss, float t)
    IL2CPP_REGISTER_METHOD(0x00FA18D0, float, GetReparamRungeKutta, app::BezierSpline* this_ptr, app::BezierSpline_BezierSplineSegment* ss, float u)
    IL2CPP_REGISTER_METHOD(0x00FA1B40, float, GetReparam, app::BezierSpline* this_ptr, app::BezierSpline_BezierSplineSegment* ss, float u)
    IL2CPP_REGISTER_METHOD(0x00FA1E90, int32_t, GetPointCount, app::BezierSpline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FA1F20, app::Vector3, GetPoint, app::BezierSpline* this_ptr, int32_t n)
    IL2CPP_REGISTER_METHOD(0x00FA2000, int32_t, GetSegmentCount, app::BezierSpline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FA2010, float, GetSegmentLength, app::BezierSpline* this_ptr, int32_t segidx)
    IL2CPP_REGISTER_METHOD(0x00FA2060, float, GetSegmentStartLength, app::BezierSpline* this_ptr, int32_t segidx)
    IL2CPP_REGISTER_METHOD(0x00FA20B0, float, GetSegmentEndLength, app::BezierSpline* this_ptr, int32_t segidx)
    IL2CPP_REGISTER_METHOD(0x00FA2100, int32_t, FindSegment, app::BezierSpline* this_ptr, float offset)
    IL2CPP_REGISTER_METHOD(0x00FA21A0, app::Vector3, GetDrawPosition, app::BezierSpline* this_ptr, int32_t segidx, float t)
    IL2CPP_REGISTER_METHOD(0x00FA2210, app::Vector3, GetPosition_2, app::BezierSpline* this_ptr, int32_t segidx, float segpos)
    IL2CPP_REGISTER_METHOD(0x00FA22F0, app::Vector3, GetTangent_2, app::BezierSpline* this_ptr, int32_t segidx, float segpos)
    IL2CPP_REGISTER_METHOD(0x00FA23D0, app::Vector3, GetNormal_2, app::BezierSpline* this_ptr, int32_t segidx, float segpos)
    IL2CPP_REGISTER_METHOD(0x00FA24B0, app::Vector3, GetSpeed, app::BezierSpline* this_ptr, int32_t segidx, float segpos)
    IL2CPP_REGISTER_METHOD(0x00FA2560, app::Vector3, GetVelocity, app::BezierSpline* this_ptr, int32_t segidx, float segpos)
    IL2CPP_REGISTER_METHOD(0x00FA2610, void, ctor, app::BezierSpline* this_ptr)
} // namespace app::classes::BezierSpline
