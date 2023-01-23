#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TransitionManager.h>
#include <Modloader/app/structs/IState_1.h>
#include <Modloader/app/structs/ICondition.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/StateMachine_1.h>
#include <Modloader/app/structs/List_1_Moon_InteractionGraph_Transition_.h>

namespace app::classes::Moon::InteractionGraph::TransitionManager {
    IL2CPP_REGISTER_METHOD(0x01994540, app::TransitionManager*, AddTransition_1, (app::TransitionManager * this_ptr, app::IState_1* from, app::IState_1* to, app::ICondition* condition, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01994860, app::TransitionManager*, AddTransition_2, (app::TransitionManager * this_ptr, app::IState_1* from, app::IState_1* to, app::Func_1_Boolean_* condition, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x019949E0, bool, Process, (app::TransitionManager * this_ptr, app::StateMachine_1* state_machine))
    IL2CPP_REGISTER_METHOD(0x01994BE0, bool, ProcessTransitionList, (app::TransitionManager * this_ptr, app::StateMachine_1* state_machine, app::List_1_Moon_InteractionGraph_Transition_* condition_and_state_pair_list))
    IL2CPP_REGISTER_METHOD(0x01994D00, void, ctor, (app::TransitionManager * this_ptr))
} // namespace app::classes::Moon::InteractionGraph::TransitionManager
