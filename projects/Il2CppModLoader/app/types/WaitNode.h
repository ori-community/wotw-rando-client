#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
