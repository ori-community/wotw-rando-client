#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/RotationLimitAngle.h>

namespace app::classes::RootMotion::FinalIK::RotationLimitAngle {
    IL2CPP_REGISTER_METHOD(0x02A21000, void, OpenUserManual, app::RotationLimitAngle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A210C0, void, OpenScriptReference, app::RotationLimitAngle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A21180, void, SupportGroup, app::RotationLimitAngle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A21240, void, ASThread, app::RotationLimitAngle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A21300, app::Quaternion, LimitRotation, app::RotationLimitAngle* this_ptr, app::Quaternion rotation)
    IL2CPP_REGISTER_METHOD(0x02A213C0, app::Quaternion, LimitSwing, app::RotationLimitAngle* this_ptr, app::Quaternion rotation)
    IL2CPP_REGISTER_METHOD(0x02A217F0, void, ctor, app::RotationLimitAngle* this_ptr)
} // namespace app::classes::RootMotion::FinalIK::RotationLimitAngle
