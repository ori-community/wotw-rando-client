#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SkeetoLocomotionIdleBehaviour.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SkeetoLocomotionIdleBehaviour_State__Enum.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::SkeetoLocomotionIdleBehaviour {
    IL2CPP_REGISTER_METHOD(0x00758D90, bool, get_IsTurning, (app::SkeetoLocomotionIdleBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00758DA0, void, OnInitializeTask, (app::SkeetoLocomotionIdleBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00758E80, void, OnEnterTask, (app::SkeetoLocomotionIdleBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00759060, app::BehaviourStatus__Enum, OnExecuteTask, (app::SkeetoLocomotionIdleBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x007592D0, void, OnExitTask, (app::SkeetoLocomotionIdleBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (app::SkeetoLocomotionIdleBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (app::SkeetoLocomotionIdleBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007592F0, bool, ShouldChangeDirection, (app::SkeetoLocomotionIdleBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007593A0, app::Vector2, ProcessVelocity, (app::SkeetoLocomotionIdleBehaviour * this_ptr, app::Vector2 current_velocity))
    IL2CPP_REGISTER_METHOD(0x007596B0, void, ChangeState, (app::SkeetoLocomotionIdleBehaviour * this_ptr, app::SkeetoLocomotionIdleBehaviour_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x00759700, void, OnFlipEnter, (app::SkeetoLocomotionIdleBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007599E0, void, PlayTimeline, (app::SkeetoLocomotionIdleBehaviour * this_ptr, app::MoonTimeline* timeline, app::Action* on_stop))
    IL2CPP_REGISTER_METHOD(0x00759B20, void, ResetTimeline, (app::SkeetoLocomotionIdleBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00759C10, void, FlipTransform, (app::SkeetoLocomotionIdleBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00759C60, void, Unset, (app::SkeetoLocomotionIdleBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00759F20, void, UpdateYDirAnimationParameter, (app::SkeetoLocomotionIdleBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00759F80, void, ctor, (app::SkeetoLocomotionIdleBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00759FB0, void, _OnFlipEnter_b__26_0, (app::SkeetoLocomotionIdleBehaviour * this_ptr))
} // namespace app::classes::SkeetoLocomotionIdleBehaviour
