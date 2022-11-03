#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RootMotion::FinalIK::RotationLimitPolygonal {
    IL2CPP_REGISTER_METHOD(0x02A220F0, void, OpenUserManual, (app::RotationLimitPolygonal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A221B0, void, OpenScriptReference, (app::RotationLimitPolygonal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A22270, void, SupportGroup, (app::RotationLimitPolygonal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A22330, void, ASThread, (app::RotationLimitPolygonal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A223F0, void, SetLimitPoints, (app::RotationLimitPolygonal * this_ptr, app::RotationLimitPolygonal_LimitPoint__Array* points))
    IL2CPP_REGISTER_METHOD(0x02A224B0, app::Quaternion, LimitRotation, (app::RotationLimitPolygonal * this_ptr, app::Quaternion rotation))
    IL2CPP_REGISTER_METHOD(0x02A225A0, void, Start, (app::RotationLimitPolygonal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A228A0, void, ResetToDefault, (app::RotationLimitPolygonal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A23930, void, BuildReachCones, (app::RotationLimitPolygonal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A241B0, app::Vector3__Array*, SmoothPoints, (app::RotationLimitPolygonal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A249C0, float, GetScalar, (app::RotationLimitPolygonal * this_ptr, int32_t k))
    IL2CPP_REGISTER_METHOD(0x02A24A10, app::Vector3, PointToTangentPlane, (app::RotationLimitPolygonal * this_ptr, app::Vector3 p, float r))
    IL2CPP_REGISTER_METHOD(0x02A24BC0, app::Vector3, TangentPointToSphere, (app::RotationLimitPolygonal * this_ptr, app::Vector3 q, float r))
    IL2CPP_REGISTER_METHOD(0x02A24DB0, app::Quaternion, LimitSwing, (app::RotationLimitPolygonal * this_ptr, app::Quaternion rotation))
    IL2CPP_REGISTER_METHOD(0x02A252C0, int32_t, GetReachCone, (app::RotationLimitPolygonal * this_ptr, app::Vector3 L))
    IL2CPP_REGISTER_METHOD(0x02A255B0, void, ctor, (app::RotationLimitPolygonal * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::RotationLimitPolygonal
