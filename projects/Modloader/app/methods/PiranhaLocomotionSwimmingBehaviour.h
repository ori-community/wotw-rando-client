#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/PiranhaLocomotionSwimmingBehaviour.h>
#include <Modloader/app/structs/PiranhaLocomotionSwimmingBehaviour_SpeedSetting.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/PiranhaLocomotionSwimmingBehaviour_State__Enum.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::PiranhaLocomotionSwimmingBehaviour {
    IL2CPP_REGISTER_METHOD(0x01160790, app::Vector3, get_TargetPosition, (app::PiranhaLocomotionSwimmingBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011607B0, void, set_TargetPosition, (app::PiranhaLocomotionSwimmingBehaviour * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x0074C3E0, float, get_TraversalSpeed, (app::PiranhaLocomotionSwimmingBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011607D0, void, set_TraversalSpeed, (app::PiranhaLocomotionSwimmingBehaviour * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x011608C0, bool, get_HasArrivedAtTarget, (app::PiranhaLocomotionSwimmingBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01160A20, bool, IsAtPoint, (app::PiranhaLocomotionSwimmingBehaviour * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x01160B80, app::PiranhaLocomotionSwimmingBehaviour_SpeedSetting*, GetSpeedSettingForTier, (app::PiranhaLocomotionSwimmingBehaviour * this_ptr, float speed_tier))
    IL2CPP_REGISTER_METHOD(0x01160DC0, void, OnInitializeTask, (app::PiranhaLocomotionSwimmingBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01160EF0, void, OnResetTask, (app::PiranhaLocomotionSwimmingBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01160F00, void, OnEnterTask, (app::PiranhaLocomotionSwimmingBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01161160, app::BehaviourStatus__Enum, OnExecuteTask, (app::PiranhaLocomotionSwimmingBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitTask, (app::PiranhaLocomotionSwimmingBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (app::PiranhaLocomotionSwimmingBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01161D00, void, ChangeState, (app::PiranhaLocomotionSwimmingBehaviour * this_ptr, app::PiranhaLocomotionSwimmingBehaviour_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x01161D50, void, OnVerticalFlipEnter, (app::PiranhaLocomotionSwimmingBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01161FB0, void, OnHorizontalFlipEnter, (app::PiranhaLocomotionSwimmingBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011621D0, void, ChangeStateToSwimming, (app::PiranhaLocomotionSwimmingBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047042F0, PiranhaLocomotionSwimmingBehaviour_ChangeStateToSwimming__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01162200, void, PlayTimeline, (app::PiranhaLocomotionSwimmingBehaviour * this_ptr, app::MoonTimeline* timeline, app::Action* on_stop))
    IL2CPP_REGISTER_METHOD(0x01162340, void, ResetTimeline, (app::PiranhaLocomotionSwimmingBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01162430, void, AccelerateTowards, (app::PiranhaLocomotionSwimmingBehaviour * this_ptr, app::Vector2 target_velocity, app::PiranhaLocomotionSwimmingBehaviour_SpeedSetting* setting))
    IL2CPP_REGISTER_METHOD(0x011626A0, void, ResetCurrentDirection, (app::PiranhaLocomotionSwimmingBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01162830, void, OnDrawGizmos, (app::PiranhaLocomotionSwimmingBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01162F80, void, ctor, (app::PiranhaLocomotionSwimmingBehaviour * this_ptr))
} // namespace app::classes::PiranhaLocomotionSwimmingBehaviour
