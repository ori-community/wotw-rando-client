#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_fsm_StateMachine_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/StateMachine_2.h>

namespace app::classes::System::Action_1_fsm_StateMachine_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_fsm_StateMachine_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::Action_1_fsm_StateMachine_ * this_ptr, app::StateMachine_2* obj))
} // namespace app::classes::System::Action_1_fsm_StateMachine_
