#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BehaviourTreeEvaluationSystem {
        inline app::BehaviourTreeEvaluationSystem__Class** type_info = (app::BehaviourTreeEvaluationSystem__Class**)(modloader::win::memory::resolve_rva(0x04758578));
        inline app::BehaviourTreeEvaluationSystem__Class* get_class() {
            return il2cpp::get_class<app::BehaviourTreeEvaluationSystem__Class>(type_info, "", "BehaviourTreeEvaluationSystem");
        }
        inline app::BehaviourTreeEvaluationSystem* create() {
            return il2cpp::create_object<app::BehaviourTreeEvaluationSystem>(get_class());
        }
    } // namespace BehaviourTreeEvaluationSystem
} // namespace app::classes::types
