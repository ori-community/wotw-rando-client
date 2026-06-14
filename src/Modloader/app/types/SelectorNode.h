#pragma once
#include <Modloader/app/structs/SelectorNode.h>
#include <Modloader/app/structs/SelectorNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SelectorNode {
        inline app::SelectorNode__Class** type_info() {
            static app::SelectorNode__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SelectorNode__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SelectorNode__Class* get_class() {
            return il2cpp::get_class<app::SelectorNode__Class>(type_info(), "Moon.BehaviourSystem", "SelectorNode");
        }
        inline app::SelectorNode* create() {
            return il2cpp::create_object<app::SelectorNode>(get_class());
        }
    } // namespace SelectorNode
} // namespace app::classes::types
