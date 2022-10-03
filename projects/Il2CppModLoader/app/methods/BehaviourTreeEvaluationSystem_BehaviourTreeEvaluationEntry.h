#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry {
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Entity*, get_Entity, (app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_FramesWithNoEvaluation, (app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F9D310, int32_t, get_AllowedSkipNum, (app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F9D3B0, bool, get_CanSkip, (app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F9D4B0, void, Reset, (app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry * this_ptr, app::Entity* entity))
    IL2CPP_REGISTER_METHOD(0x002FBAF0, void, Clear, (app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F9D4C0, void, Evaluate, (app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F9D600, void, ExecuteJustRunningLeaf, (app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F9D660, void, Skip, (app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry * this_ptr))
} // namespace app::classes::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry
