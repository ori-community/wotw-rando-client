#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::BehaviourSystem::SequenceNode {
    IL2CPP_REGISTER_METHOD(0x0300FC10, app::BehaviourStatus__Enum, OnExecute, (app::SequenceNode_1 * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0300FEF0, void, OnReset, (app::SequenceNode_1 * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0300FF90, void, ctor, (app::SequenceNode_1 * this_ptr))
} // namespace app::classes::Moon::BehaviourSystem::SequenceNode
