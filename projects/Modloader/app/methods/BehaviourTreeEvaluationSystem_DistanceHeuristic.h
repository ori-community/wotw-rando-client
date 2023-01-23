#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BehaviourTreeEvaluationSystem_AllowedEvaluationSkips__Enum.h>
#include <Modloader/app/structs/BehaviourTreeEvaluationSystem_DistanceHeuristic.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::BehaviourTreeEvaluationSystem_DistanceHeuristic {
    IL2CPP_REGISTER_METHOD(0x00F9D6D0, app::BehaviourTreeEvaluationSystem_AllowedEvaluationSkips__Enum, EvaluateHeuristic, (app::BehaviourTreeEvaluationSystem_DistanceHeuristic * this_ptr, app::Vector2 player_position, app::Vector2 entity_position))
    IL2CPP_REGISTER_METHOD(0x00F9D920, void, CalculateSquaredDistances, (app::BehaviourTreeEvaluationSystem_DistanceHeuristic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F9D9F0, void, DrawGizmos, (app::BehaviourTreeEvaluationSystem_DistanceHeuristic * this_ptr, app::Vector3 center))
    IL2CPP_REGISTER_METHOD(0x00F9DB90, void, ctor, (app::BehaviourTreeEvaluationSystem_DistanceHeuristic * this_ptr))
} // namespace app::classes::BehaviourTreeEvaluationSystem_DistanceHeuristic
