#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::BezierSplineComponent {
    IL2CPP_REGISTER_METHOD(0x00D29400, void, OnDrawGizmosSelected, (app::BezierSplineComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D29440, void, OnDrawGizmos, (app::BezierSplineComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D29480, void, DrawGizmos, (app::BezierSplineComponent * this_ptr, app::Color color, float alpha, bool selected))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::BaseSpline_SplineIterator *, get_iterator, (app::BezierSplineComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D29E90, void, StartIterator, (app::BezierSplineComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D29FA0, void, KillIterator, (app::BezierSplineComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D29FB0, app::BaseSpline_SplineIterator *, Iterate, (app::BezierSplineComponent * this_ptr, float dt))
    IL2CPP_REGISTER_METHOD(0x00D2A100, app::Matrix4x4, GetTransformMatrix, (app::BezierSplineComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D2A1D0, app::Vector3, TransformPoint, (app::BezierSplineComponent * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x00D2A320, void, ctor, (app::BezierSplineComponent * this_ptr))
}
