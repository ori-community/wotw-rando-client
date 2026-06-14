#pragma once
#include <Modloader/app/structs/FindClosestSandEdgeToTargetAction.h>
#include <Modloader/app/structs/FindClosestSandEdgeToTargetAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FindClosestSandEdgeToTargetAction {
        inline app::FindClosestSandEdgeToTargetAction__Class** type_info() {
            static app::FindClosestSandEdgeToTargetAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FindClosestSandEdgeToTargetAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FindClosestSandEdgeToTargetAction__Class* get_class() {
            return il2cpp::get_class<app::FindClosestSandEdgeToTargetAction__Class>(type_info(), "Moon", "FindClosestSandEdgeToTargetAction");
        }
        inline app::FindClosestSandEdgeToTargetAction* create() {
            return il2cpp::create_object<app::FindClosestSandEdgeToTargetAction>(get_class());
        }
    } // namespace FindClosestSandEdgeToTargetAction
} // namespace app::classes::types
