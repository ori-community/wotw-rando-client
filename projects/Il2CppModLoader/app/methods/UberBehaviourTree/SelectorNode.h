#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UberBehaviourTree::SelectorNode {
    IL2CPP_REGISTER_METHOD(0x013E2EF0, void, ctor, (app::SelectorNode_1 * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x013E3050, app::BehaviourTreeStatus__Enum, Tick, (app::SelectorNode_1 * this_ptr, app::TickData tick))
    IL2CPP_REGISTER_METHOD(0x013E3270, void, AddChild, (app::SelectorNode_1 * this_ptr, app::IBehaviourTreeNode* child))
} // namespace app::classes::UberBehaviourTree::SelectorNode
