#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BehaviourTree_1.h>

namespace app::classes::UberBehaviourTree::BehaviourTree {
    IL2CPP_REGISTER_METHOD(0x002FB970, uint32_t, get_TickId, (app::BehaviourTree_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013E0390, void, Tick, (app::BehaviourTree_1 * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x013E04A0, void, ctor, (app::BehaviourTree_1 * this_ptr))
} // namespace app::classes::UberBehaviourTree::BehaviourTree
