#pragma once
#include <Modloader/app/structs/WaitNode.h>
#include <Modloader/app/structs/WaitNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaitNode {
        inline app::WaitNode__Class** type_info() {
            static app::WaitNode__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaitNode__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaitNode__Class* get_class() {
            return il2cpp::get_class<app::WaitNode__Class>(type_info(), "Moon.BehaviourSystem", "WaitNode");
        }
        inline app::WaitNode* create() {
            return il2cpp::create_object<app::WaitNode>(get_class());
        }
    } // namespace WaitNode
} // namespace app::classes::types
