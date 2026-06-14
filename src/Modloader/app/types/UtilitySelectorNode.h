#pragma once
#include <Modloader/app/structs/UtilitySelectorNode.h>
#include <Modloader/app/structs/UtilitySelectorNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UtilitySelectorNode {
        inline app::UtilitySelectorNode__Class** type_info() {
            static app::UtilitySelectorNode__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UtilitySelectorNode__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UtilitySelectorNode__Class* get_class() {
            return il2cpp::get_class<app::UtilitySelectorNode__Class>(type_info(), "Moon.BehaviourSystem", "UtilitySelectorNode");
        }
        inline app::UtilitySelectorNode* create() {
            return il2cpp::create_object<app::UtilitySelectorNode>(get_class());
        }
    } // namespace UtilitySelectorNode
} // namespace app::classes::types
