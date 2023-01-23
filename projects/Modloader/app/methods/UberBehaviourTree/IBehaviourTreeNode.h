#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BehaviourTreeStatus__Enum.h>
#include <Modloader/app/structs/IBehaviourTreeNode.h>
#include <Modloader/app/structs/TickData.h>

namespace app::classes::UberBehaviourTree::IBehaviourTreeNode {
    IL2CPP_REGISTER_METHOD(0x013E2420, app::BehaviourTreeStatus__Enum, Execute, (app::IBehaviourTreeNode * this_ptr, app::TickData tick))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Reset, (app::IBehaviourTreeNode * this_ptr, app::TickData tick))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::IBehaviourTreeNode * this_ptr))
} // namespace app::classes::UberBehaviourTree::IBehaviourTreeNode
