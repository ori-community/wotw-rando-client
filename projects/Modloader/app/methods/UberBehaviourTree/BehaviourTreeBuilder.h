#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UberBehaviourTree::BehaviourTreeBuilder {
    IL2CPP_REGISTER_METHOD(0x013E07F0, app::BehaviourTreeBuilder*, DoState, (app::BehaviourTreeBuilder * this_ptr, app::String* name, app::IBehaviourState* state))
    IL2CPP_REGISTER_METHODINFO(0x04719A68, BehaviourTreeBuilder_DoState__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x013E0A20, app::BehaviourTreeBuilder*, Do, (app::BehaviourTreeBuilder * this_ptr, app::String* name, app::Func_2_UberBehaviourTree_TickData_UberBehaviourTree_BehaviourTreeStatus_* fn))
    IL2CPP_REGISTER_METHODINFO(0x04789D18, BehaviourTreeBuilder_Do__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x013E0C50, app::BehaviourTreeBuilder*, Condition, (app::BehaviourTreeBuilder * this_ptr, app::String* name, app::Func_2_UberBehaviourTree_TickData_Boolean_* fn))
    IL2CPP_REGISTER_METHOD(0x013E0E90, app::BehaviourTreeBuilder*, Inverter, (app::BehaviourTreeBuilder * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x013E1060, app::BehaviourTreeBuilder*, Sequence, (app::BehaviourTreeBuilder * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x013E1360, app::BehaviourTreeBuilder*, MemSequence, (app::BehaviourTreeBuilder * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x013E1670, app::BehaviourTreeBuilder*, Parallel, (app::BehaviourTreeBuilder * this_ptr, app::String* name, int32_t num_required_to_fail, int32_t num_required_to_succeed))
    IL2CPP_REGISTER_METHOD(0x013E1990, app::BehaviourTreeBuilder*, Selector, (app::BehaviourTreeBuilder * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x013E1C90, app::BehaviourTreeBuilder*, Splice, (app::BehaviourTreeBuilder * this_ptr, app::IBehaviourTreeNode* sub_tree))
    IL2CPP_REGISTER_METHODINFO(0x0471C620, BehaviourTreeBuilder_Splice__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x013E1E00, app::IBehaviourTreeNode*, Build, (app::BehaviourTreeBuilder * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04731260, BehaviourTreeBuilder_Build__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x013E1EB0, app::BehaviourTreeBuilder*, End, (app::BehaviourTreeBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013E1F50, void, ctor, (app::BehaviourTreeBuilder * this_ptr))
} // namespace app::classes::UberBehaviourTree::BehaviourTreeBuilder
