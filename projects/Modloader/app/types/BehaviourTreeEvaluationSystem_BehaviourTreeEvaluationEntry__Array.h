#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry__Array__Class.h>
#include <Modloader/app/structs/BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry__Array.h>

namespace app::classes::types {
    namespace BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry__Array {
        namespace {
            inline app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry__Array__Class** type_info = &type_info_ref;
        inline app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry__Array__Class>(type_info, "", "BehaviourTreeEvaluationSystem+BehaviourTreeEvaluationEntry[]");
        }
        inline app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry__Array* create() {
            return il2cpp::create_object<app::BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry__Array>(get_class());
        }
    } // namespace BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry__Array
} // namespace app::classes::types
