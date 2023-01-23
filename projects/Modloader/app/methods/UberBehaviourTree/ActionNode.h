#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ActionNode_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Func_2_UberBehaviourTree_TickData_UberBehaviourTree_BehaviourTreeStatus_.h>
#include <Modloader/app/structs/BehaviourTreeStatus__Enum.h>
#include <Modloader/app/structs/TickData.h>

namespace app::classes::UberBehaviourTree::ActionNode {
    IL2CPP_REGISTER_METHOD(0x013DF6E0, void, ctor, (app::ActionNode_1 * this_ptr, app::String* name, app::Func_2_UberBehaviourTree_TickData_UberBehaviourTree_BehaviourTreeStatus_* fn))
    IL2CPP_REGISTER_METHOD(0x013DF6F0, app::BehaviourTreeStatus__Enum, Tick, (app::ActionNode_1 * this_ptr, app::TickData tick))
} // namespace app::classes::UberBehaviourTree::ActionNode
