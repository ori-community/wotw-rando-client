#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TaskNode {
        namespace {
            inline app::TaskNode__Class* type_info_ref = nullptr;
        }
        inline app::TaskNode__Class** type_info = &type_info_ref;
        inline app::TaskNode__Class* get_class() {
            return il2cpp::get_class<app::TaskNode__Class>(type_info, "Moon.BehaviourSystem", "TaskNode");
        }
        inline app::TaskNode* create() {
            return il2cpp::create_object<app::TaskNode>(get_class());
        }
    } // namespace TaskNode
} // namespace app::classes::types
