#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BehaviourTreeEvaluationSystem_DistanceHeuristic {
        namespace {
            inline app::BehaviourTreeEvaluationSystem_DistanceHeuristic__Class* type_info_ref = nullptr;
        }
        inline app::BehaviourTreeEvaluationSystem_DistanceHeuristic__Class** type_info = &type_info_ref;
        inline app::BehaviourTreeEvaluationSystem_DistanceHeuristic__Class* get_class() {
            return il2cpp::get_nested_class<app::BehaviourTreeEvaluationSystem_DistanceHeuristic__Class>(type_info, "", "BehaviourTreeEvaluationSystem", "DistanceHeuristic");
        }
        inline app::BehaviourTreeEvaluationSystem_DistanceHeuristic* create() {
            return il2cpp::create_object<app::BehaviourTreeEvaluationSystem_DistanceHeuristic>(get_class());
        }
    } // namespace BehaviourTreeEvaluationSystem_DistanceHeuristic
} // namespace app::classes::types
