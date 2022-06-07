#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool {
    IL2CPP_REGISTER_METHOD(0x00F9CF60, app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry *, GetEntry, (app::BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool * this_ptr, app::Entity * entity))
    IL2CPP_REGISTER_METHOD(0x00F9D0F0, void, ReturnToPool, (app::BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool * this_ptr, app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry * entry))
    IL2CPP_REGISTER_METHOD(0x00F9D1A0, void, ctor, (app::BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool * this_ptr))
}
