#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BehaviourTreeEvaluationSystem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BehaviourTreeEvaluationSystem__Class** type_info;
        inline app::BehaviourTreeEvaluationSystem__Class* get_class() {
            return il2cpp::get_class<app::BehaviourTreeEvaluationSystem__Class>(type_info, "", "BehaviourTreeEvaluationSystem");
        }
        inline app::BehaviourTreeEvaluationSystem* create() {
            return il2cpp::create_object<app::BehaviourTreeEvaluationSystem>(get_class());
        }
    } // namespace BehaviourTreeEvaluationSystem
} // namespace app::classes::types
