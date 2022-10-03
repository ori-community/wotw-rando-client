#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BehaviourTreeEvaluationSystem_EvaluationMode__Enum {
        namespace {
            app::BehaviourTreeEvaluationSystem_EvaluationMode__Enum__Class* type_info_ref = nullptr;
        }
        app::BehaviourTreeEvaluationSystem_EvaluationMode__Enum__Class** type_info = &type_info_ref;
        inline app::BehaviourTreeEvaluationSystem_EvaluationMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BehaviourTreeEvaluationSystem_EvaluationMode__Enum__Class>(type_info, "", "BehaviourTreeEvaluationSystem", "EvaluationMode");
        }
        inline app::BehaviourTreeEvaluationSystem_EvaluationMode__Enum* create() {
            return il2cpp::create_object<app::BehaviourTreeEvaluationSystem_EvaluationMode__Enum>(get_class());
        }
        inline app::BehaviourTreeEvaluationSystem_EvaluationMode__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::BehaviourTreeEvaluationSystem_EvaluationMode__Enum__Array>(get_class(), size);
        }
    } // namespace BehaviourTreeEvaluationSystem_EvaluationMode__Enum
} // namespace app::classes::types
