#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UberBehaviourTree::ParallelNode {
    IL2CPP_REGISTER_METHOD(0x013E2A90, void, ctor, (app::ParallelNode_1 * this_ptr, app::String* name, int32_t num_required_to_fail, int32_t num_required_to_succeed))
    IL2CPP_REGISTER_METHOD(0x013E2C00, app::BehaviourTreeStatus__Enum, Tick, (app::ParallelNode_1 * this_ptr, app::TickData tick))
    IL2CPP_REGISTER_METHOD(0x013E2E50, void, AddChild, (app::ParallelNode_1 * this_ptr, app::IBehaviourTreeNode* child))
} // namespace app::classes::UberBehaviourTree::ParallelNode
