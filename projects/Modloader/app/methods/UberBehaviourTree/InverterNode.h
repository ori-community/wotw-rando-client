#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InverterNode.h>
#include <Modloader/app/structs/BehaviourTreeStatus__Enum.h>
#include <Modloader/app/structs/IBehaviourTreeNode.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TickData.h>

namespace app::classes::UberBehaviourTree::InverterNode {
    IL2CPP_REGISTER_METHOD(0x002FB940, void, ctor, (app::InverterNode * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x013E24C0, app::BehaviourTreeStatus__Enum, Tick, (app::InverterNode * this_ptr, app::TickData tick))
    IL2CPP_REGISTER_METHOD(0x013E2620, void, AddChild, (app::InverterNode * this_ptr, app::IBehaviourTreeNode* child))
} // namespace app::classes::UberBehaviourTree::InverterNode
