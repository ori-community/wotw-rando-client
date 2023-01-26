#pragma once
#include <Modloader/app/structs/TaskNode.h>
#include <Modloader/app/structs/TaskNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TaskNode {
        inline app::TaskNode__Class** type_info() {
            static app::TaskNode__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TaskNode__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TaskNode__Class* get_class() {
            return il2cpp::get_class<app::TaskNode__Class>(type_info(), "Moon.BehaviourSystem", "TaskNode");
        }
        inline app::TaskNode* create() {
            return il2cpp::create_object<app::TaskNode>(get_class());
        }
    } // namespace TaskNode
} // namespace app::classes::types
