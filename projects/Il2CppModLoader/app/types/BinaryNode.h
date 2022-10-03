#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BinaryNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BinaryNode__Class** type_info;
        inline app::BinaryNode__Class* get_class() {
            return il2cpp::get_class<app::BinaryNode__Class>(type_info, "System.Data", "BinaryNode");
        }
        inline app::BinaryNode* create() {
            return il2cpp::create_object<app::BinaryNode>(get_class());
        }
    } // namespace BinaryNode
} // namespace app::classes::types
