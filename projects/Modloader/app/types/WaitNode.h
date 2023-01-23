#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WaitNode__Class.h>
#include <Modloader/app/structs/WaitNode.h>

namespace app::classes::types {
    namespace WaitNode {
        namespace {
            inline app::WaitNode__Class* type_info_ref = nullptr;
        }
        inline app::WaitNode__Class** type_info = &type_info_ref;
        inline app::WaitNode__Class* get_class() {
            return il2cpp::get_class<app::WaitNode__Class>(type_info, "Moon.BehaviourSystem", "WaitNode");
        }
        inline app::WaitNode* create() {
            return il2cpp::create_object<app::WaitNode>(get_class());
        }
    } // namespace WaitNode
} // namespace app::classes::types
