#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SkeetoAirMoveBehaviour.h>
#include <Modloader/app/structs/SkeetoAirMoveBehaviour_State__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SkeetoAirMoveBehaviour {
    IL2CPP_REGISTER_METHOD(0x0074C3A0, app::Vector3, get_TargetPosition, app::SkeetoAirMoveBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0074C3C0, void, set_TargetPosition, app::SkeetoAirMoveBehaviour* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x0074C3E0, float, get_TraversalSpeed, app::SkeetoAirMoveBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0074C400, void, set_TraversalSpeed, app::SkeetoAirMoveBehaviour* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0074C420, bool, get_HasArrivedAtTarget, app::SkeetoAirMoveBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0074C450, app::Vector2, get_CurrentTargetDirection, app::SkeetoAirMoveBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0074C470, void, set_CurrentTargetDirection, app::SkeetoAirMoveBehaviour* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x0074C4A0, bool, get_IsTurning, app::SkeetoAirMoveBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0074C4B0, bool, IsAtPoint, app::SkeetoAirMoveBehaviour* this_ptr, app::Vector3 point)
    IL2CPP_REGISTER_METHOD(0x0074C5F0, void, OnInitializeTask, app::SkeetoAirMoveBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0074C730, void, OnEnterTask, app::SkeetoAirMoveBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0074C940, void, OnExitTask, app::SkeetoAirMoveBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0074C9D0, app::BehaviourStatus__Enum, OnExecuteTask, app::SkeetoAirMoveBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, app::SkeetoAirMoveBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, app::SkeetoAirMoveBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0074D1C0, void, PauseFlyTimeline, app::SkeetoAirMoveBehaviour* this_ptr, bool should_pause)
    IL2CPP_REGISTER_METHOD(0x0074D230, void, ChangeState, app::SkeetoAirMoveBehaviour* this_ptr, app::SkeetoAirMoveBehaviour_State__Enum state)
    IL2CPP_REGISTER_METHOD(0x0074D270, void, OnFlipEnter, app::SkeetoAirMoveBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0074D550, void, PlayTimeline, app::SkeetoAirMoveBehaviour* this_ptr, app::MoonTimeline* timeline, app::Action* on_stop)
    IL2CPP_REGISTER_METHOD(0x0074D690, void, ResetTimeline, app::SkeetoAirMoveBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0074D780, void, FlipTransform, app::SkeetoAirMoveBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0074D7D0, void, UpdateYDirAnimationParameter, app::SkeetoAirMoveBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0074D830, void, ctor, app::SkeetoAirMoveBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0074D8C0, void, _OnFlipEnter_b__45_0, app::SkeetoAirMoveBehaviour* this_ptr)
} // namespace app::classes::SkeetoAirMoveBehaviour
