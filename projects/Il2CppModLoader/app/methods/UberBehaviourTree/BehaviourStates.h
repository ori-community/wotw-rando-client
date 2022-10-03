#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UberBehaviourTree::BehaviourStates {
    IL2CPP_REGISTER_METHOD(0x013E0160, app::String*, get_CurrentStateName, (app::BehaviourStates * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00863E90, float, get_CurrentStateTime, (app::BehaviourStates * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::IBehaviourState*, get_CurrentState, (app::BehaviourStates * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013E0200, app::BehaviourTreeStatus__Enum, Update, (app::BehaviourStates * this_ptr, app::IBehaviourState* state, app::TickData tick))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::BehaviourStates * this_ptr))
} // namespace app::classes::UberBehaviourTree::BehaviourStates
