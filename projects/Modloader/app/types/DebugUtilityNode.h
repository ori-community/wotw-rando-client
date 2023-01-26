#pragma once
#include <Modloader/app/structs/DebugUtilityNode.h>
#include <Modloader/app/structs/DebugUtilityNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugUtilityNode {
        inline app::DebugUtilityNode__Class** type_info() {
            static app::DebugUtilityNode__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DebugUtilityNode__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DebugUtilityNode__Class* get_class() {
            return il2cpp::get_class<app::DebugUtilityNode__Class>(type_info(), "Moon.BehaviourSystem", "DebugUtilityNode");
        }
        inline app::DebugUtilityNode* create() {
            return il2cpp::create_object<app::DebugUtilityNode>(get_class());
        }
    } // namespace DebugUtilityNode
} // namespace app::classes::types
