#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Timeline::JointRotationAnimatorEntity {
    IL2CPP_REGISTER_METHOD(0x00771980, void, OnStartPlayback, (app::JointRotationAnimatorEntity * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00771A80, void, OnTimelineSample, (app::JointRotationAnimatorEntity * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00771CB0, void, ctor, (app::JointRotationAnimatorEntity * this_ptr))
} // namespace app::classes::Moon::Timeline::JointRotationAnimatorEntity
