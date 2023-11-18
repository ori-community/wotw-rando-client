#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PiranhaLocomotionIdleBehaviour.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/PiranhaLocomotionIdleBehaviour_State__Enum.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::PiranhaLocomotionIdleBehaviour {
    IL2CPP_REGISTER_METHOD(0x0115FA80, void, OnInitializeTask, (app::PiranhaLocomotionIdleBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0115FBC0, void, OnEnterTask, (app::PiranhaLocomotionIdleBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0115FD00, app::BehaviourStatus__Enum, OnExecuteTask, (app::PiranhaLocomotionIdleBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011601D0, void, OnExitTask, (app::PiranhaLocomotionIdleBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01160280, void, ChangeState, (app::PiranhaLocomotionIdleBehaviour * this_ptr, app::PiranhaLocomotionIdleBehaviour_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x011603B0, void, UpdateUpState, (app::PiranhaLocomotionIdleBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01160450, void, UpdateDownState, (app::PiranhaLocomotionIdleBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011604F0, void, AccelerateTowards, (app::PiranhaLocomotionIdleBehaviour * this_ptr, app::Vector2 target_velocity))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (app::PiranhaLocomotionIdleBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01160740, void, ctor, (app::PiranhaLocomotionIdleBehaviour * this_ptr))
} // namespace app::classes::PiranhaLocomotionIdleBehaviour
