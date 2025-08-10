#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/IAction.h>
#include <Modloader/app/structs/ICondition.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IState_2.h>
#include <Modloader/app/structs/StateConfigurator_1.h>
#include <Modloader/app/structs/StateMachine_2.h>

namespace app::classes::fsm::StateConfigurator {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, app::StateConfigurator_1* this_ptr, app::StateMachine_2* state_machine, app::IState_2* state)
    IL2CPP_REGISTER_METHOD(0x00F6EA20, app::StateConfigurator_1*, AddEvent, app::StateConfigurator_1* this_ptr, int32_t event_id, app::Action* action)
    IL2CPP_REGISTER_METHOD(
        0x02FF9060,
        app::StateConfigurator_1*,
        AddTransition_1,
        app::StateConfigurator_1* this_ptr,
        app::IState_2* to,
        app::ICondition* condition,
        app::IAction* action,
        app::IContext* context
    )
    IL2CPP_REGISTER_METHOD(
        0x02FF91A0,
        app::StateConfigurator_1*,
        AddTransition_2,
        app::StateConfigurator_1* this_ptr,
        app::IState_2* to,
        app::Func_1_Boolean_* condition,
        app::Action* action,
        app::IContext* context
    )
    IL2CPP_REGISTER_METHOD(
        0x02FF91A0,
        app::StateConfigurator_1*,
        AddTransition_3,
        app::StateConfigurator_1* this_ptr,
        app::IState_2* to,
        app::Func_1_Boolean_* condition,
        app::Action* action,
        app::IContext* context
    )
    IL2CPP_REGISTER_METHOD(
        0x02FF9060,
        app::StateConfigurator_1*,
        AddTransition_4,
        app::StateConfigurator_1* this_ptr,
        app::IState_2* to,
        app::ICondition* condition,
        app::IAction* action,
        app::IContext* context
    )
    IL2CPP_REGISTER_METHOD(
        0x02FF91A0,
        app::StateConfigurator_1*,
        AddTransition_5,
        app::StateConfigurator_1* this_ptr,
        app::IState_2* to,
        app::Func_1_Boolean_* condition,
        app::Action* action,
        app::IContext* context
    )
    IL2CPP_REGISTER_METHOD(
        0x02FF9060,
        app::StateConfigurator_1*,
        AddTransition_6,
        app::StateConfigurator_1* this_ptr,
        app::IState_2* to,
        app::ICondition* condition,
        app::IAction* action,
        app::IContext* context
    )
    IL2CPP_REGISTER_METHOD(
        0x02FF91A0,
        app::StateConfigurator_1*,
        AddTransition_7,
        app::StateConfigurator_1* this_ptr,
        app::IState_2* to,
        app::Func_1_Boolean_* condition,
        app::Action* action,
        app::IContext* context
    )
    IL2CPP_REGISTER_METHOD(
        0x02FF9060,
        app::StateConfigurator_1*,
        AddTransition_8,
        app::StateConfigurator_1* this_ptr,
        app::IState_2* to,
        app::ICondition* condition,
        app::IAction* action,
        app::IContext* context
    )
    IL2CPP_REGISTER_METHOD(
        0x02FF9060,
        app::StateConfigurator_1*,
        AddTransition_9,
        app::StateConfigurator_1* this_ptr,
        app::IState_2* to,
        app::ICondition* condition,
        app::IAction* action,
        app::IContext* context
    )
    IL2CPP_REGISTER_METHOD(
        0x02FF9060,
        app::StateConfigurator_1*,
        AddTransition_10,
        app::StateConfigurator_1* this_ptr,
        app::IState_2* to,
        app::ICondition* condition,
        app::IAction* action,
        app::IContext* context
    )
    IL2CPP_REGISTER_METHOD(
        0x02FF91A0,
        app::StateConfigurator_1*,
        AddTransition_11,
        app::StateConfigurator_1* this_ptr,
        app::IState_2* to,
        app::Func_1_Boolean_* condition,
        app::Action* action,
        app::IContext* context
    )
    IL2CPP_REGISTER_METHOD(
        0x02FF9060,
        app::StateConfigurator_1*,
        AddTransition_12,
        app::StateConfigurator_1* this_ptr,
        app::IState_2* to,
        app::ICondition* condition,
        app::IAction* action,
        app::IContext* context
    )
    IL2CPP_REGISTER_METHOD(
        0x02FF9060,
        app::StateConfigurator_1*,
        AddTransition_13,
        app::StateConfigurator_1* this_ptr,
        app::IState_2* to,
        app::ICondition* condition,
        app::IAction* action,
        app::IContext* context
    )
    IL2CPP_REGISTER_METHOD(
        0x02FF9060,
        app::StateConfigurator_1*,
        AddTransition_14,
        app::StateConfigurator_1* this_ptr,
        app::IState_2* to,
        app::ICondition* condition,
        app::IAction* action,
        app::IContext* context
    )
    IL2CPP_REGISTER_METHOD(
        0x02FF91A0,
        app::StateConfigurator_1*,
        AddTransition_15,
        app::StateConfigurator_1* this_ptr,
        app::IState_2* to,
        app::Func_1_Boolean_* condition,
        app::Action* action,
        app::IContext* context
    )
    IL2CPP_REGISTER_METHOD(
        0x02FF91A0,
        app::StateConfigurator_1*,
        AddTransition_16,
        app::StateConfigurator_1* this_ptr,
        app::IState_2* to,
        app::Func_1_Boolean_* condition,
        app::Action* action,
        app::IContext* context
    )
    IL2CPP_REGISTER_METHOD(
        0x02FF9060,
        app::StateConfigurator_1*,
        AddTransition_17,
        app::StateConfigurator_1* this_ptr,
        app::IState_2* to,
        app::ICondition* condition,
        app::IAction* action,
        app::IContext* context
    )
} // namespace app::classes::fsm::StateConfigurator
