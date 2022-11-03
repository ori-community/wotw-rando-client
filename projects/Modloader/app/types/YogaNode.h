#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace YogaNode {
        namespace {
            inline app::YogaNode__Class* type_info_ref = nullptr;
        }
        inline app::YogaNode__Class** type_info = &type_info_ref;
        inline app::YogaNode__Class* get_class() {
            return il2cpp::get_class<app::YogaNode__Class>(type_info, "UnityEngine.Yoga", "YogaNode");
        }
        inline app::YogaNode* create() {
            return il2cpp::create_object<app::YogaNode>(get_class());
        }
        inline app::YogaNode__Array* create_array(int size) {
            return il2cpp::array_new<app::YogaNode__Array>(get_class(), size);
        }
        inline app::YogaNode__Array* create_array(const std::vector<app::YogaNode*>& items) {
            return il2cpp::array_new<app::YogaNode__Array>(get_class(), items);
        }
    } // namespace YogaNode
} // namespace app::classes::types
