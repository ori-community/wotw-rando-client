#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/IAction.h>
#include <Modloader/app/structs/ICondition.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IState_2.h>
#include <Modloader/app/structs/List_1_fsm_Transition_.h>
#include <Modloader/app/structs/StateMachine_2.h>
#include <Modloader/app/structs/TransitionManager_1.h>

namespace app::classes::fsm::TransitionManager {
    IL2CPP_REGISTER_METHOD(
        0x00F70AD0,
        app::TransitionManager_1*,
        AddTransition_1,
        app::TransitionManager_1* this_ptr,
        app::IState_2* from,
        app::IState_2* to,
        app::ICondition* condition,
        app::IAction* action,
        app::IContext* context
    )
    IL2CPP_REGISTER_METHOD(
        0x00F70E00,
        app::TransitionManager_1*,
        AddTransition_2,
        app::TransitionManager_1* this_ptr,
        app::IState_2* from,
        app::IState_2* to,
        app::Func_1_Boolean_* condition,
        app::Action* action,
        app::IContext* context
    )
    IL2CPP_REGISTER_METHOD(0x00F71050, bool, Process, app::TransitionManager_1* this_ptr, app::StateMachine_2* state_machine)
    IL2CPP_REGISTER_METHOD(
        0x00F71270,
        bool,
        ProcessTransitionList,
        app::TransitionManager_1* this_ptr,
        app::StateMachine_2* state_machine,
        app::List_1_fsm_Transition_* condition_and_state_pair_list
    )
    IL2CPP_REGISTER_METHOD(0x00F713C0, void, ctor, app::TransitionManager_1* this_ptr)
} // namespace app::classes::fsm::TransitionManager
