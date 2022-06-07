#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LocomotionIdleBehaviour {
    IL2CPP_REGISTER_METHOD(0x00FC7270, void, OnEnterTask, (app::LocomotionIdleBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::BehaviourStatus__Enum, OnExecuteTask, (app::LocomotionIdleBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00FC7360, void, OnExitTask, (app::LocomotionIdleBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (app::LocomotionIdleBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (app::LocomotionIdleBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC7430, void, SwapIdle, (app::LocomotionIdleBehaviour * this_ptr, app::MoonTimeline * timeline))
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, (app::LocomotionIdleBehaviour * this_ptr))
}
