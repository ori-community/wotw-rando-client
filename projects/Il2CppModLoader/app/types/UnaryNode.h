#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnaryNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnaryNode__Class** type_info;
        inline app::UnaryNode__Class* get_class() {
            return il2cpp::get_class<app::UnaryNode__Class>(type_info, "System.Data", "UnaryNode");
        }
        inline app::UnaryNode* create() {
            return il2cpp::create_object<app::UnaryNode>(get_class());
        }
    } // namespace UnaryNode
} // namespace app::classes::types
