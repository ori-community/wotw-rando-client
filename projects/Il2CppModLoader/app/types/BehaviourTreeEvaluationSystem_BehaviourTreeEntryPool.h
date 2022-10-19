#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool {
        inline app::BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool__Class** type_info = (app::BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool__Class**)(modloader::win::memory::resolve_rva(0x04783F48));
        inline app::BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool__Class* get_class() {
            return il2cpp::get_nested_class<app::BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool__Class>(type_info, "", "BehaviourTreeEvaluationSystem", "BehaviourTreeEntryPool");
        }
        inline app::BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool* create() {
            return il2cpp::create_object<app::BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool>(get_class());
        }
    } // namespace BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool
} // namespace app::classes::types
