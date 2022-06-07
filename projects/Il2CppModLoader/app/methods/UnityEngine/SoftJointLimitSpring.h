#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::SoftJointLimitSpring {
    IL2CPP_REGISTER_METHOD(0x001EB400, float, get_spring, (app::SoftJointLimitSpring__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00114F30, void, set_spring, (app::SoftJointLimitSpring__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x001EB410, float, get_damper, (app::SoftJointLimitSpring__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001155C0, void, set_damper, (app::SoftJointLimitSpring__Boxed * this_ptr, float value))
}
