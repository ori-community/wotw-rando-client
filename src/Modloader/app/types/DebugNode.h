#pragma once
#include <Modloader/app/structs/DebugNode.h>
#include <Modloader/app/structs/DebugNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugNode {
        inline app::DebugNode__Class** type_info() {
            static app::DebugNode__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DebugNode__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DebugNode__Class* get_class() {
            return il2cpp::get_class<app::DebugNode__Class>(type_info(), "Moon.BehaviourSystem", "DebugNode");
        }
        inline app::DebugNode* create() {
            return il2cpp::create_object<app::DebugNode>(get_class());
        }
    } // namespace DebugNode
} // namespace app::classes::types
