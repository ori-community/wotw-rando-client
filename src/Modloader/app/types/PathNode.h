#pragma once
#include <Modloader/app/structs/PathNode.h>
#include <Modloader/app/structs/PathNode__Array.h>
#include <Modloader/app/structs/PathNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PathNode {
        inline app::PathNode__Class** type_info() {
            static app::PathNode__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PathNode__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PathNode__Class* get_class() {
            return il2cpp::get_class<app::PathNode__Class>(type_info(), "", "PathNode");
        }
        inline app::PathNode* create() {
            return il2cpp::create_object<app::PathNode>(get_class());
        }
        inline app::PathNode__Array* create_array(int size) {
            return il2cpp::array_new<app::PathNode__Array>(get_class(), size);
        }
        inline app::PathNode__Array* create_array(const std::vector<app::PathNode*>& items) {
            return il2cpp::array_new<app::PathNode__Array>(get_class(), items);
        }
    } // namespace PathNode
} // namespace app::classes::types
