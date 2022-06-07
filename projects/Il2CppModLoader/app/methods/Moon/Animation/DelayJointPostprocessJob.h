#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Animation::DelayJointPostprocessJob {
    IL2CPP_REGISTER_METHOD(0x001B4CD0, void, ProcessAnimation, (app::DelayJointPostprocessJob__Boxed * this_ptr, app::AnimationStream stream))
    IL2CPP_REGISTER_METHOD(0x00002890, void, ProcessRootMotion, (app::DelayJointPostprocessJob__Boxed * this_ptr, app::AnimationStream stream))
    IL2CPP_REGISTER_METHOD(0x001B4D10, app::Quaternion, SmoothDamp, (app::DelayJointPostprocessJob__Boxed * this_ptr, app::Quaternion rot, app::Quaternion target, app::Quaternion * derivative, float time, float delta_time))
}
