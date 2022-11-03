#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DebugUtilityNode {
        namespace {
            inline app::DebugUtilityNode__Class* type_info_ref = nullptr;
        }
        inline app::DebugUtilityNode__Class** type_info = &type_info_ref;
        inline app::DebugUtilityNode__Class* get_class() {
            return il2cpp::get_class<app::DebugUtilityNode__Class>(type_info, "Moon.BehaviourSystem", "DebugUtilityNode");
        }
        inline app::DebugUtilityNode* create() {
            return il2cpp::create_object<app::DebugUtilityNode>(get_class());
        }
    } // namespace DebugUtilityNode
} // namespace app::classes::types
