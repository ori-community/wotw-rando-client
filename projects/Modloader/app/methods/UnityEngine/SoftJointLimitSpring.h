#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SoftJointLimitSpring__Boxed.h>

namespace app::classes::UnityEngine::SoftJointLimitSpring {
    IL2CPP_REGISTER_METHOD(0x001EB400, float, get_spring, (app::SoftJointLimitSpring__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00114F30, void, set_spring, (app::SoftJointLimitSpring__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x001EB410, float, get_damper, (app::SoftJointLimitSpring__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001155C0, void, set_damper, (app::SoftJointLimitSpring__Boxed * this_ptr, float value))
} // namespace app::classes::UnityEngine::SoftJointLimitSpring
