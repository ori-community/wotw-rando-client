#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::SnakeAnimator {
    IL2CPP_REGISTER_METHOD(0x03087460, void, BeginChain, (app::SnakeAnimator * this_ptr, app::SnakeAnimatorConfiguration configuration))
    IL2CPP_REGISTER_METHOD(0x030874C0, void, AddJoint, (app::SnakeAnimator * this_ptr, app::SnakeAnimatorJointConfiguration joint_configuration))
    IL2CPP_REGISTER_METHOD(0x03087520, void, Simulate, (app::SnakeAnimator * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x03087580, void, ResetSimulation, (app::SnakeAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030875D0, void, BeginChain_Injected, (app::SnakeAnimator * this_ptr, app::SnakeAnimatorConfiguration* configuration))
    IL2CPP_REGISTER_METHOD(0x03087630, void, AddJoint_Injected, (app::SnakeAnimator * this_ptr, app::SnakeAnimatorJointConfiguration* joint_configuration))
} // namespace app::classes::UnityEngine::SnakeAnimator
