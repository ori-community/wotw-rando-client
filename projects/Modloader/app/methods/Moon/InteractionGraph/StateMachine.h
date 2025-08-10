#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/IState_1.h>
#include <Modloader/app/structs/IState_1__Array.h>
#include <Modloader/app/structs/ITrigger.h>
#include <Modloader/app/structs/List_1_Moon_InteractionGraph_IState_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/StateConfigurator.h>
#include <Modloader/app/structs/StateMachine_1.h>
#include <Modloader/app/structs/TransitionManager.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Moon::InteractionGraph::StateMachine {
    IL2CPP_REGISTER_METHOD(0x004C87B0, float, get_CurrentStateTime, app::StateMachine_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C87C0, void, set_CurrentStateTime, app::StateMachine_1* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::IState_1*, get_CurrentState, app::StateMachine_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_CurrentState, app::StateMachine_1* this_ptr, app::IState_1* value)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::IState_1*, get_PreviousState, app::StateMachine_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_PreviousState, app::StateMachine_1* this_ptr, app::IState_1* value)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::List_1_Moon_InteractionGraph_IState_*, get_States, app::StateMachine_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01992000, void, ChangeState_1, app::StateMachine_1* this_ptr, int32_t id)
    IL2CPP_REGISTER_METHOD(0x01992190, void, ChangeState_2, app::StateMachine_1* this_ptr, app::IState_1* state)
    IL2CPP_REGISTER_METHOD(0x01992510, void, UpdateState, app::StateMachine_1* this_ptr, float dt)
    IL2CPP_REGISTER_METHOD(0x019925B0, app::StateConfigurator*, Configure, app::StateMachine_1* this_ptr, app::IState_1* state)
    IL2CPP_REGISTER_METHOD(0x01992700, app::TransitionManager*, FindTransitionManager, app::StateMachine_1* this_ptr, app::Type* trigger)
    IL2CPP_REGISTER_METHOD(0x01992A40, void, Trigger_1, app::StateMachine_1* this_ptr, app::ITrigger* trigger)
    IL2CPP_REGISTER_METHOD(0x01992B60, void, AddEvent, app::StateMachine_1* this_ptr, app::IState_1* state, int32_t event_id, app::Action* action)
    IL2CPP_REGISTER_METHOD(0x01992DC0, void, TriggerEvent, app::StateMachine_1* this_ptr, int32_t event_id)
    IL2CPP_REGISTER_METHOD(0x01992F60, void, RegisterStates, app::StateMachine_1* this_ptr, app::IState_1__Array* states)
    IL2CPP_REGISTER_METHOD(0x01993040, int32_t, StateToIndex, app::StateMachine_1* this_ptr, app::IState_1* state)
    IL2CPP_REGISTER_METHOD(0x019932A0, app::IState_1*, IndexToState, app::StateMachine_1* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01993350, void, ctor, app::StateMachine_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015F1C80, app::Object*, GetCurrentState, app::StateMachine_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01550340, void, Trigger_2, app::StateMachine_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018EFF10, app::TransitionManager*, GetTransistionManager_1, app::StateMachine_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018EFF10, app::TransitionManager*, GetTransistionManager_2, app::StateMachine_1* this_ptr)
} // namespace app::classes::Moon::InteractionGraph::StateMachine
