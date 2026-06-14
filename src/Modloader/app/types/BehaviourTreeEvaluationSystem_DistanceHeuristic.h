#pragma once
#include <Modloader/app/structs/BehaviourTreeEvaluationSystem_DistanceHeuristic.h>
#include <Modloader/app/structs/BehaviourTreeEvaluationSystem_DistanceHeuristic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BehaviourTreeEvaluationSystem_DistanceHeuristic {
        inline app::BehaviourTreeEvaluationSystem_DistanceHeuristic__Class** type_info() {
            static app::BehaviourTreeEvaluationSystem_DistanceHeuristic__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BehaviourTreeEvaluationSystem_DistanceHeuristic__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BehaviourTreeEvaluationSystem_DistanceHeuristic__Class* get_class() {
            return il2cpp::get_nested_class<app::BehaviourTreeEvaluationSystem_DistanceHeuristic__Class>(type_info(), "", "BehaviourTreeEvaluationSystem", "DistanceHeuristic");
        }
        inline app::BehaviourTreeEvaluationSystem_DistanceHeuristic* create() {
            return il2cpp::create_object<app::BehaviourTreeEvaluationSystem_DistanceHeuristic>(get_class());
        }
    } // namespace BehaviourTreeEvaluationSystem_DistanceHeuristic
} // namespace app::classes::types
