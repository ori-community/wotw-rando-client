#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/EntityLocomotionTask.h>
#include <Modloader/app/structs/IState_2.h>
#include <Modloader/app/structs/IState_2__Array.h>
#include <Modloader/app/structs/ITrigger_1.h>
#include <Modloader/app/structs/List_1_fsm_IState_.h>
#include <Modloader/app/structs/MoonGuid.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/StateConfigurator_1.h>
#include <Modloader/app/structs/StateMachine_2.h>
#include <Modloader/app/structs/TransitionManager_1.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::fsm::StateMachine {
    IL2CPP_REGISTER_METHOD(0x00F6EA60, void, ctor_1, app::StateMachine_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F6F0A0, void, ctor_2, app::StateMachine_2* this_ptr, app::MoonGuid* guid)
    IL2CPP_REGISTER_METHOD(0x00863E90, float, get_CurrentStateTime, app::StateMachine_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00863EA0, void, set_CurrentStateTime, app::StateMachine_2* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::IState_2*, get_CurrentState, app::StateMachine_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_CurrentState, app::StateMachine_2* this_ptr, app::IState_2* value)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::IState_2*, get_PreviousState, app::StateMachine_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_PreviousState, app::StateMachine_2* this_ptr, app::IState_2* value)
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::List_1_fsm_IState_*, get_States, app::StateMachine_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F6F6C0, void, ChangeState_1, app::StateMachine_2* this_ptr, int32_t id)
    IL2CPP_REGISTER_METHOD(0x00F6F850, void, ChangeState_2, app::StateMachine_2* this_ptr, app::IState_2* state)
    IL2CPP_REGISTER_METHOD(0x00F6F9A0, void, UpdateState, app::StateMachine_2* this_ptr, float dt)
    IL2CPP_REGISTER_METHOD(0x00F6FA40, app::StateConfigurator_1*, Configure, app::StateMachine_2* this_ptr, app::IState_2* state)
    IL2CPP_REGISTER_METHOD(0x00F6FB90, app::TransitionManager_1*, FindTransitionManager, app::StateMachine_2* this_ptr, app::Type* trigger)
    IL2CPP_REGISTER_METHOD(0x00F6FED0, void, Trigger_1, app::StateMachine_2* this_ptr, app::ITrigger_1* trigger)
    IL2CPP_REGISTER_METHOD(0x00F6FFF0, void, AddEvent, app::StateMachine_2* this_ptr, app::IState_2* state, int32_t event_id, app::Action* action)
    IL2CPP_REGISTER_METHOD(0x00F70250, void, TriggerEvent, app::StateMachine_2* this_ptr, int32_t event_id)
    IL2CPP_REGISTER_METHOD(0x00F703F0, void, RegisterStates, app::StateMachine_2* this_ptr, app::IState_2__Array* states)
    IL2CPP_REGISTER_METHOD(0x00F704D0, void, Serialize, app::StateMachine_2* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x00F70660, int32_t, StateToIndex, app::StateMachine_2* this_ptr, app::IState_2* state)
    IL2CPP_REGISTER_METHOD(0x00F708C0, app::IState_2*, IndexToState, app::StateMachine_2* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x0157E090, app::Object*, GetCurrentState_1, app::StateMachine_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015E7910, void, Trigger_2, app::StateMachine_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF92E0, app::TransitionManager_1*, GetTransistionManager_1, app::StateMachine_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FF92E0, app::TransitionManager_1*, GetTransistionManager_2, app::StateMachine_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015E7910, void, Trigger_3, app::StateMachine_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015E7910, void, Trigger_4, app::StateMachine_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015E7910, void, Trigger_5, app::StateMachine_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015E7910, void, Trigger_6, app::StateMachine_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157E090, app::EntityLocomotionTask*, GetCurrentState_2, app::StateMachine_2* this_ptr)
} // namespace app::classes::fsm::StateMachine
