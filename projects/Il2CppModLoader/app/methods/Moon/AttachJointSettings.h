#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::AttachJointSettings {
    IL2CPP_REGISTER_METHOD(0x00CB4970, void, ApplySettings, (app::AttachJointSettings * this_ptr, app::ConfigurableJoint* joint))
    IL2CPP_REGISTER_METHOD(0x00CB50E0, void, Reconnect, (app::AttachJointSettings * this_ptr, app::ConfigurableJoint* joint))
    IL2CPP_REGISTER_METHOD(0x00CB53D0, void, ctor, (app::AttachJointSettings * this_ptr))
} // namespace app::classes::Moon::AttachJointSettings
