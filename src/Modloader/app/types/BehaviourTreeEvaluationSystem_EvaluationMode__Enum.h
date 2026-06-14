#pragma once
#include <Modloader/app/structs/BehaviourTreeEvaluationSystem_EvaluationMode__Enum.h>
#include <Modloader/app/structs/BehaviourTreeEvaluationSystem_EvaluationMode__Enum__Array.h>
#include <Modloader/app/structs/BehaviourTreeEvaluationSystem_EvaluationMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BehaviourTreeEvaluationSystem_EvaluationMode__Enum {
        inline app::BehaviourTreeEvaluationSystem_EvaluationMode__Enum__Class** type_info() {
            static app::BehaviourTreeEvaluationSystem_EvaluationMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BehaviourTreeEvaluationSystem_EvaluationMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BehaviourTreeEvaluationSystem_EvaluationMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BehaviourTreeEvaluationSystem_EvaluationMode__Enum__Class>(type_info(), "", "BehaviourTreeEvaluationSystem", "EvaluationMode");
        }
        inline app::BehaviourTreeEvaluationSystem_EvaluationMode__Enum* create() {
            return il2cpp::create_object<app::BehaviourTreeEvaluationSystem_EvaluationMode__Enum>(get_class());
        }
        inline app::BehaviourTreeEvaluationSystem_EvaluationMode__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::BehaviourTreeEvaluationSystem_EvaluationMode__Enum__Array>(get_class(), size);
        }
        inline app::BehaviourTreeEvaluationSystem_EvaluationMode__Enum__Array* create_array(const std::vector<app::BehaviourTreeEvaluationSystem_EvaluationMode__Enum*>& items) {
            return il2cpp::array_new<app::BehaviourTreeEvaluationSystem_EvaluationMode__Enum__Array>(get_class(), items);
        }
    } // namespace BehaviourTreeEvaluationSystem_EvaluationMode__Enum
} // namespace app::classes::types
