#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::BehaviourSystem::ParallelNode {
    IL2CPP_REGISTER_METHOD(0x0300EB60, app::BehaviourStatus__Enum, OnExecute, (app::ParallelNode * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0300EF10, void, OnReset, (app::ParallelNode * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0300EFD0, void, ctor, (app::ParallelNode * this_ptr))
} // namespace app::classes::Moon::BehaviourSystem::ParallelNode
