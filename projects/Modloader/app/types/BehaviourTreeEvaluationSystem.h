#pragma once
#include <Modloader/app/structs/BehaviourTreeEvaluationSystem.h>
#include <Modloader/app/structs/BehaviourTreeEvaluationSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BehaviourTreeEvaluationSystem {
        inline app::BehaviourTreeEvaluationSystem__Class** type_info() {
            static app::BehaviourTreeEvaluationSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BehaviourTreeEvaluationSystem__Class**)(modloader::win::memory::resolve_rva(0x04758578));
            }
            return cache;
        }
        inline app::BehaviourTreeEvaluationSystem__Class* get_class() {
            return il2cpp::get_class<app::BehaviourTreeEvaluationSystem__Class>(type_info(), "", "BehaviourTreeEvaluationSystem");
        }
        inline app::BehaviourTreeEvaluationSystem* create() {
            return il2cpp::create_object<app::BehaviourTreeEvaluationSystem>(get_class());
        }
    } // namespace BehaviourTreeEvaluationSystem
} // namespace app::classes::types
