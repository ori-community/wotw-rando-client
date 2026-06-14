#pragma once
#include <Modloader/app/structs/ActionNode.h>
#include <Modloader/app/structs/ActionNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActionNode {
        inline app::ActionNode__Class** type_info() {
            static app::ActionNode__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ActionNode__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ActionNode__Class* get_class() {
            return il2cpp::get_class<app::ActionNode__Class>(type_info(), "Moon.BehaviourSystem", "ActionNode");
        }
        inline app::ActionNode* create() {
            return il2cpp::create_object<app::ActionNode>(get_class());
        }
    } // namespace ActionNode
} // namespace app::classes::types
