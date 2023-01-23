#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/LocomotionIdleTimelineBehaviour.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::LocomotionIdleTimelineBehaviour {
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::BehaviourStatus__Enum, OnExecuteTask, (app::LocomotionIdleTimelineBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00FC7A10, void, OnEnterTask, (app::LocomotionIdleTimelineBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00FC7AE0, void, OnExitTask, (app::LocomotionIdleTimelineBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (app::LocomotionIdleTimelineBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (app::LocomotionIdleTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, (app::LocomotionIdleTimelineBehaviour * this_ptr))
} // namespace app::classes::LocomotionIdleTimelineBehaviour
