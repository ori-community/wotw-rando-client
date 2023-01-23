#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CharacterJoint.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/SoftJointLimitSpring.h>
#include <Modloader/app/structs/SoftJointLimit.h>

namespace app::classes::UnityEngine::CharacterJoint {
    IL2CPP_REGISTER_METHOD(0x0309F1E0, void, set_swingAxis, (app::CharacterJoint * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x0309F240, void, set_swingLimitSpring, (app::CharacterJoint * this_ptr, app::SoftJointLimitSpring value))
    IL2CPP_REGISTER_METHOD(0x0309F2A0, void, set_lowTwistLimit, (app::CharacterJoint * this_ptr, app::SoftJointLimit value))
    IL2CPP_REGISTER_METHOD(0x0309F300, void, set_highTwistLimit, (app::CharacterJoint * this_ptr, app::SoftJointLimit value))
    IL2CPP_REGISTER_METHOD(0x0309F360, void, set_swing1Limit, (app::CharacterJoint * this_ptr, app::SoftJointLimit value))
    IL2CPP_REGISTER_METHOD(0x0309F3C0, void, set_swing2Limit, (app::CharacterJoint * this_ptr, app::SoftJointLimit value))
    IL2CPP_REGISTER_METHOD(0x0309F420, void, set_enableProjection, (app::CharacterJoint * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0309F480, void, set_swingAxis_Injected, (app::CharacterJoint * this_ptr, app::Vector3* value))
    IL2CPP_REGISTER_METHOD(0x0309F4E0, void, set_swingLimitSpring_Injected, (app::CharacterJoint * this_ptr, app::SoftJointLimitSpring* value))
    IL2CPP_REGISTER_METHOD(0x0309F540, void, set_lowTwistLimit_Injected, (app::CharacterJoint * this_ptr, app::SoftJointLimit* value))
    IL2CPP_REGISTER_METHOD(0x0309F5A0, void, set_highTwistLimit_Injected, (app::CharacterJoint * this_ptr, app::SoftJointLimit* value))
    IL2CPP_REGISTER_METHOD(0x0309F600, void, set_swing1Limit_Injected, (app::CharacterJoint * this_ptr, app::SoftJointLimit* value))
    IL2CPP_REGISTER_METHOD(0x0309F660, void, set_swing2Limit_Injected, (app::CharacterJoint * this_ptr, app::SoftJointLimit* value))
} // namespace app::classes::UnityEngine::CharacterJoint
