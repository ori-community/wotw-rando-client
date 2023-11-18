#pragma once
#include <Modloader/app/structs/BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry__Array.h>
#include <Modloader/app/structs/BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry__Array {
        inline app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry__Array__Class** type_info() {
            static app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry__Array__Class>(type_info(), "", "BehaviourTreeEvaluationSystem+BehaviourTreeEvaluationEntry[]");
        }
        inline app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry__Array* create() {
            return il2cpp::create_object<app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry__Array>(get_class());
        }
    } // namespace BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry__Array
} // namespace app::classes::types
