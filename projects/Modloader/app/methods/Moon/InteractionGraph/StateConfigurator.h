#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StateConfigurator.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/ICondition.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IState_1.h>
#include <Modloader/app/structs/StateMachine_1.h>

namespace app::classes::Moon::InteractionGraph::StateConfigurator {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, (app::StateConfigurator * this_ptr, app::StateMachine_1* state_machine, app::IState_1* state))
    IL2CPP_REGISTER_METHOD(0x01991FC0, app::StateConfigurator*, AddEvent, (app::StateConfigurator * this_ptr, int32_t event_id, app::Action* action))
    IL2CPP_REGISTER_METHOD(0x018EFB80, app::StateConfigurator*, AddTransition_1, (app::StateConfigurator * this_ptr, app::IState_1* to, app::ICondition* condition, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x018EFCB0, app::StateConfigurator*, AddTransition_2, (app::StateConfigurator * this_ptr, app::IState_1* to, app::Func_1_Boolean_* condition, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x018EFB80, app::StateConfigurator*, AddTransition_3, (app::StateConfigurator * this_ptr, app::IState_1* to, app::ICondition* condition, app::IContext* context))
} // namespace app::classes::Moon::InteractionGraph::StateConfigurator
