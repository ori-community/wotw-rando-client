#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::InteractionGraph::StateConfigurator {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, (app::StateConfigurator * this_ptr, app::StateMachine_1 * state_machine, app::IState_1 * state))
    IL2CPP_REGISTER_METHOD(0x01991FC0, app::StateConfigurator *, AddEvent, (app::StateConfigurator * this_ptr, int32_t event_id, app::Action * action))
    IL2CPP_REGISTER_METHOD(0x018EFB80, app::StateConfigurator *, AddTransition_1, (app::StateConfigurator * this_ptr, app::IState_1 * to, app::ICondition * condition, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x018EFCB0, app::StateConfigurator *, AddTransition_2, (app::StateConfigurator * this_ptr, app::IState_1 * to, app::Func_1_Boolean_ * condition, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x018EFB80, app::StateConfigurator *, AddTransition_3, (app::StateConfigurator * this_ptr, app::IState_1 * to, app::ICondition * condition, app::IContext * context))
    IL2CPP_REGISTER_METHODINFO(0x0475F098, StateConfigurator_AddTransition_2__MethodInfo)
}
