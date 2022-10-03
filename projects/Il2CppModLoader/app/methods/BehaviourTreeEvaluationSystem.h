#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::BehaviourTreeEvaluationSystem {
    IL2CPP_REGISTER_METHOD(0x00998570, app::UpdateType__Enum, get_UpdateType, (app::BehaviourTreeEvaluationSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F9B4D0, void, Awake, (app::BehaviourTreeEvaluationSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F9B610, void, OnDestroy, (app::BehaviourTreeEvaluationSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009EDCD0, bool, IsHeuristicBased, (app::BehaviourTreeEvaluationSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0063C780, bool, IsAllAtAInterval, (app::BehaviourTreeEvaluationSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F9B6B0, void, RequestEvaluation, (app::BehaviourTreeEvaluationSystem * this_ptr, app::Entity* entity))
    IL2CPP_REGISTER_METHOD(0x00F9BA70, void, ClearRequestsForEntity, (app::BehaviourTreeEvaluationSystem * this_ptr, app::Entity* entity))
    IL2CPP_REGISTER_METHOD(0x00F9BB90, void, EvaluateTree, (app::BehaviourTreeEvaluationSystem * this_ptr, app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry* entry, int32_t id))
    IL2CPP_REGISTER_METHOD(0x00F9BC00, void, RemoveEnty, (app::BehaviourTreeEvaluationSystem * this_ptr, app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry* entry, int32_t id))
    IL2CPP_REGISTER_METHOD(0x00F9BDB0, int32_t, GetId, (app::BehaviourTreeEvaluationSystem * this_ptr, app::Entity* entity))
    IL2CPP_REGISTER_METHOD(0x00F9BDE0, app::BehaviourTreeEvaluationSystem_AllowedEvaluationSkips__Enum, CalculateAllowedSkips, (app::BehaviourTreeEvaluationSystem * this_ptr, app::Entity* entity))
    IL2CPP_REGISTER_METHOD(0x00F9BFB0, void, OnUpdate, (app::BehaviourTreeEvaluationSystem * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x00F9C120, void, AllAtAIntervalUpdate, (app::BehaviourTreeEvaluationSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F9C270, void, HeuristicBasedUpdate, (app::BehaviourTreeEvaluationSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F9BB90, void, AllEveryFrameOnRegister, (app::BehaviourTreeEvaluationSystem * this_ptr, app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry* entry, int32_t id))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, AllAtAIntervalOnRegister, (app::BehaviourTreeEvaluationSystem * this_ptr, app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry* entry, int32_t id))
    IL2CPP_REGISTER_METHOD(0x00F9C4B0, void, HeuristicBasedOnRegister, (app::BehaviourTreeEvaluationSystem * this_ptr, app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry* entry, int32_t id))
    IL2CPP_REGISTER_METHOD(0x00F9C5C0, void, OnDrawGizmosSelected, (app::BehaviourTreeEvaluationSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F9CA50, void, ctor, (app::BehaviourTreeEvaluationSystem * this_ptr))
} // namespace app::classes::BehaviourTreeEvaluationSystem
