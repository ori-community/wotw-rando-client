#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourTreeStatus__Enum.h>
#include <Modloader/app/structs/IBehaviourTreeNode.h>
#include <Modloader/app/structs/MemSequenceNode.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TickData.h>

namespace app::classes::UberBehaviourTree::MemSequenceNode {
    IL2CPP_REGISTER_METHOD(0x013E26E0, void, ctor, app::MemSequenceNode* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x013E2840, app::BehaviourTreeStatus__Enum, Tick, app::MemSequenceNode* this_ptr, app::TickData tick)
    IL2CPP_REGISTER_METHOD(0x0073DA30, void, Reset, app::MemSequenceNode* this_ptr, app::TickData tick)
    IL2CPP_REGISTER_METHOD(0x013E29F0, void, AddChild, app::MemSequenceNode* this_ptr, app::IBehaviourTreeNode* child)
} // namespace app::classes::UberBehaviourTree::MemSequenceNode
