#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UtilitySelectorNode {
        namespace {
            inline app::UtilitySelectorNode__Class* type_info_ref = nullptr;
        }
        inline app::UtilitySelectorNode__Class** type_info = &type_info_ref;
        inline app::UtilitySelectorNode__Class* get_class() {
            return il2cpp::get_class<app::UtilitySelectorNode__Class>(type_info, "Moon.BehaviourSystem", "UtilitySelectorNode");
        }
        inline app::UtilitySelectorNode* create() {
            return il2cpp::create_object<app::UtilitySelectorNode>(get_class());
        }
    } // namespace UtilitySelectorNode
} // namespace app::classes::types
