#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UberBehaviourTree::ActionNode {
    IL2CPP_REGISTER_METHOD(0x013DF6E0, void, ctor, (app::ActionNode_1 * this_ptr, app::String* name, app::Func_2_UberBehaviourTree_TickData_UberBehaviourTree_BehaviourTreeStatus_* fn))
    IL2CPP_REGISTER_METHOD(0x013DF6F0, app::BehaviourTreeStatus__Enum, Tick, (app::ActionNode_1 * this_ptr, app::TickData tick))
} // namespace app::classes::UberBehaviourTree::ActionNode
