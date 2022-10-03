#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool__Class** type_info;
        inline app::BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool__Class* get_class() {
            return il2cpp::get_nested_class<app::BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool__Class>(type_info, "", "BehaviourTreeEvaluationSystem", "BehaviourTreeEntryPool");
        }
        inline app::BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool* create() {
            return il2cpp::create_object<app::BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool>(get_class());
        }
    } // namespace BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool
} // namespace app::classes::types
