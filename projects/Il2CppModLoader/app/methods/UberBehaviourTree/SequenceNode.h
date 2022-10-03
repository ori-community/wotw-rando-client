#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UberBehaviourTree::SequenceNode {
    IL2CPP_REGISTER_METHOD(0x013E3310, void, ctor, (app::SequenceNode_2 * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x013E3470, app::BehaviourTreeStatus__Enum, Tick, (app::SequenceNode_2 * this_ptr, app::TickData tick))
    IL2CPP_REGISTER_METHOD(0x013E3690, void, AddChild, (app::SequenceNode_2 * this_ptr, app::IBehaviourTreeNode* child))
} // namespace app::classes::UberBehaviourTree::SequenceNode
