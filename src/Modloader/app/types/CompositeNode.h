#pragma once
#include <Modloader/app/structs/CompositeNode.h>
#include <Modloader/app/structs/CompositeNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CompositeNode {
        inline app::CompositeNode__Class** type_info() {
            static app::CompositeNode__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CompositeNode__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CompositeNode__Class* get_class() {
            return il2cpp::get_class<app::CompositeNode__Class>(type_info(), "Moon.BehaviourSystem", "CompositeNode");
        }
        inline app::CompositeNode* create() {
            return il2cpp::create_object<app::CompositeNode>(get_class());
        }
    } // namespace CompositeNode
} // namespace app::classes::types
