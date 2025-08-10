#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourTreeStatus__Enum.h>
#include <Modloader/app/structs/IBehaviourState.h>
#include <Modloader/app/structs/StateNode.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TickData.h>

namespace app::classes::UberBehaviourTree::StateNode {
    IL2CPP_REGISTER_METHOD(0x013DF6E0, void, ctor, app::StateNode* this_ptr, app::String* name, app::IBehaviourState* state)
    IL2CPP_REGISTER_METHOD(0x013E3730, app::BehaviourTreeStatus__Enum, Tick, app::StateNode* this_ptr, app::TickData tick)
} // namespace app::classes::UberBehaviourTree::StateNode
