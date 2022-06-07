#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UberBehaviourTree::MemSequenceNode {
    IL2CPP_REGISTER_METHOD(0x013E26E0, void, ctor, (app::MemSequenceNode * this_ptr, app::String * name))
    IL2CPP_REGISTER_METHOD(0x013E2840, app::BehaviourTreeStatus__Enum, Tick, (app::MemSequenceNode * this_ptr, app::TickData tick))
    IL2CPP_REGISTER_METHOD(0x0073DA30, void, Reset, (app::MemSequenceNode * this_ptr, app::TickData tick))
    IL2CPP_REGISTER_METHOD(0x013E29F0, void, AddChild, (app::MemSequenceNode * this_ptr, app::IBehaviourTreeNode * child))
}
