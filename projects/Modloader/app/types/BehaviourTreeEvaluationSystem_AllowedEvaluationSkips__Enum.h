#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BehaviourTreeEvaluationSystem_AllowedEvaluationSkips__Enum__Class.h>
#include <Modloader/app/structs/BehaviourTreeEvaluationSystem_AllowedEvaluationSkips__Enum.h>

namespace app::classes::types {
    namespace BehaviourTreeEvaluationSystem_AllowedEvaluationSkips__Enum {
        namespace {
            inline app::BehaviourTreeEvaluationSystem_AllowedEvaluationSkips__Enum__Class* type_info_ref = nullptr;
        }
        inline app::BehaviourTreeEvaluationSystem_AllowedEvaluationSkips__Enum__Class** type_info = &type_info_ref;
        inline app::BehaviourTreeEvaluationSystem_AllowedEvaluationSkips__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BehaviourTreeEvaluationSystem_AllowedEvaluationSkips__Enum__Class>(type_info, "", "BehaviourTreeEvaluationSystem", "AllowedEvaluationSkips");
        }
        inline app::BehaviourTreeEvaluationSystem_AllowedEvaluationSkips__Enum* create() {
            return il2cpp::create_object<app::BehaviourTreeEvaluationSystem_AllowedEvaluationSkips__Enum>(get_class());
        }
    } // namespace BehaviourTreeEvaluationSystem_AllowedEvaluationSkips__Enum
} // namespace app::classes::types
