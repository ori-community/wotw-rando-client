#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry__Class** type_info;
        inline app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry__Class>(type_info, "", "BehaviourTreeEvaluationSystem", "BehaviourTreeEvaluationEntry");
        }
        inline app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry* create() {
            return il2cpp::create_object<app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry>(get_class());
        }
        inline app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry__Array>(get_class(), size);
        }
    } // namespace BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry
} // namespace app::classes::types
