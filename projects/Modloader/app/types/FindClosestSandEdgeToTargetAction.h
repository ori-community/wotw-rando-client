#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FindClosestSandEdgeToTargetAction {
        namespace {
            inline app::FindClosestSandEdgeToTargetAction__Class* type_info_ref = nullptr;
        }
        inline app::FindClosestSandEdgeToTargetAction__Class** type_info = &type_info_ref;
        inline app::FindClosestSandEdgeToTargetAction__Class* get_class() {
            return il2cpp::get_class<app::FindClosestSandEdgeToTargetAction__Class>(type_info, "Moon", "FindClosestSandEdgeToTargetAction");
        }
        inline app::FindClosestSandEdgeToTargetAction* create() {
            return il2cpp::create_object<app::FindClosestSandEdgeToTargetAction>(get_class());
        }
    } // namespace FindClosestSandEdgeToTargetAction
} // namespace app::classes::types
