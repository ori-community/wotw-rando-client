#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/FrogLocomotionIdleBehaviour.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::FrogLocomotionIdleBehaviour {
    IL2CPP_REGISTER_METHOD(0x01649A20, void, OnEnterTask, app::FrogLocomotionIdleBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::BehaviourStatus__Enum, OnExecuteTask, app::FrogLocomotionIdleBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01649BD0, void, OnExitTask, app::FrogLocomotionIdleBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, app::FrogLocomotionIdleBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, app::FrogLocomotionIdleBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01649CA0, void, PlayTimeline, app::FrogLocomotionIdleBehaviour* this_ptr, app::MoonTimeline* timeline, app::Action* on_stop)
    IL2CPP_REGISTER_METHOD(0x01649DC0, void, OnIdleEnd, app::FrogLocomotionIdleBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0164A0D0, void, OnEyeCandyEnd, app::FrogLocomotionIdleBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0164A2A0, void, ctor, app::FrogLocomotionIdleBehaviour* this_ptr)
} // namespace app::classes::FrogLocomotionIdleBehaviour
