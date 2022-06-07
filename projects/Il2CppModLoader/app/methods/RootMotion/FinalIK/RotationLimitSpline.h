#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RootMotion::FinalIK::RotationLimitSpline {
    IL2CPP_REGISTER_METHOD(0x02A25F10, void, OpenUserManual, (app::RotationLimitSpline * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A25FD0, void, OpenScriptReference, (app::RotationLimitSpline * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A26090, void, SupportGroup, (app::RotationLimitSpline * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A26150, void, ASThread, (app::RotationLimitSpline * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A26210, void, SetSpline, (app::RotationLimitSpline * this_ptr, app::Keyframe__Array * keyframes))
    IL2CPP_REGISTER_METHOD(0x02A26280, app::Quaternion, LimitRotation, (app::RotationLimitSpline * this_ptr, app::Quaternion rotation))
    IL2CPP_REGISTER_METHOD(0x02A26340, app::Quaternion, LimitSwing, (app::RotationLimitSpline * this_ptr, app::Quaternion rotation))
    IL2CPP_REGISTER_METHOD(0x02A26CC0, void, ctor, (app::RotationLimitSpline * this_ptr))
}
