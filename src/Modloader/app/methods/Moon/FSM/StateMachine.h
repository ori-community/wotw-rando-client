#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IInterruptState.h>
#include <Modloader/app/structs/IInterruptable.h>
#include <Modloader/app/structs/IState.h>
#include <Modloader/app/structs/Stack_1_Moon_FSM_IInterruptState_.h>
#include <Modloader/app/structs/StateMachine.h>

namespace app::classes::Moon::FSM::StateMachine {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::IState*, get_CurrentState, app::StateMachine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_CurrentState, app::StateMachine* this_ptr, app::IState* value)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Stack_1_Moon_FSM_IInterruptState_*, get_InterruptStates, app::StateMachine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_InterruptStates, app::StateMachine* this_ptr, app::Stack_1_Moon_FSM_IInterruptState_* value)
    IL2CPP_REGISTER_METHOD(0x02558770, void, ctor, app::StateMachine* this_ptr, app::IState* initial_state)
    IL2CPP_REGISTER_METHOD(0x02558900, void, Update, app::StateMachine* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x02558B10, void, ProcessState, app::StateMachine* this_ptr, app::IState* state)
    IL2CPP_REGISTER_METHOD(0x02558C10, void, ProcessInterrupt, app::StateMachine* this_ptr, app::IInterruptState* interrupt_state)
    IL2CPP_REGISTER_METHOD(0x02558E10, void, ProcessInterruptableState, app::StateMachine* this_ptr, app::IInterruptable* interruptable_state)
    IL2CPP_REGISTER_METHOD(0x02558F70, void, SwitchState, app::StateMachine* this_ptr, app::IState* next_state)
} // namespace app::classes::Moon::FSM::StateMachine
