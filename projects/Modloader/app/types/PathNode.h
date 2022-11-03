#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PathNode {
        namespace {
            inline app::PathNode__Class* type_info_ref = nullptr;
        }
        inline app::PathNode__Class** type_info = &type_info_ref;
        inline app::PathNode__Class* get_class() {
            return il2cpp::get_class<app::PathNode__Class>(type_info, "", "PathNode");
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
