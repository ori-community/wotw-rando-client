#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RootMotion::FinalIK::RotationLimit {
    IL2CPP_REGISTER_METHOD(0x02A1F900, void, SetDefaultLocalRotation, (app::RotationLimit * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A1FA50, app::Quaternion, GetLimitedLocalRotation, (app::RotationLimit * this_ptr, app::Quaternion local_rotation, bool* changed))
    IL2CPP_REGISTER_METHOD(0x02A1FE80, bool, Apply, (app::RotationLimit * this_ptr, float weight))
    IL2CPP_REGISTER_METHOD(0x02A20200, void, Disable, (app::RotationLimit * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A202A0, app::Vector3, get_secondaryAxis, (app::RotationLimit * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A202C0, app::Vector3, get_crossAxis, (app::RotationLimit * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A20400, void, Awake, (app::RotationLimit * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A20640, void, LateUpdate, (app::RotationLimit * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02050110, void, LogWarning, (app::RotationLimit * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x02A20650, app::Quaternion, Limit1DOF, (app::Quaternion rotation, app::Vector3 axis))
    IL2CPP_REGISTER_METHOD(0x02A209A0, app::Quaternion, LimitTwist, (app::Quaternion rotation, app::Vector3 axis, app::Vector3 ortho_axis, float twist_limit))
    IL2CPP_REGISTER_METHOD(0x02A20E40, float, GetOrthogonalAngle, (app::Vector3 v1, app::Vector3 v2, app::Vector3 normal))
    IL2CPP_REGISTER_METHOD(0x02A20F40, void, ctor, (app::RotationLimit * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::RotationLimit
