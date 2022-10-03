#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::LocomotionIdleBehaviourWithShift {
    IL2CPP_REGISTER_METHOD(0x00FC7560, void, OnEnterTask, (app::LocomotionIdleBehaviourWithShift * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::BehaviourStatus__Enum, OnExecuteTask, (app::LocomotionIdleBehaviourWithShift * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00FC76C0, void, OnExitTask, (app::LocomotionIdleBehaviourWithShift * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (app::LocomotionIdleBehaviourWithShift * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (app::LocomotionIdleBehaviourWithShift * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC7790, void, ctor, (app::LocomotionIdleBehaviourWithShift * this_ptr))
} // namespace app::classes::LocomotionIdleBehaviourWithShift
