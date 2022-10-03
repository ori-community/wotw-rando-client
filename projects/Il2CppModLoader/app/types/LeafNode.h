#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeafNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LeafNode__Class** type_info;
        inline app::LeafNode__Class* get_class() {
            return il2cpp::get_class<app::LeafNode__Class>(type_info, "System.Xml.Schema", "LeafNode");
        }
        inline app::LeafNode* create() {
            return il2cpp::create_object<app::LeafNode>(get_class());
        }
    } // namespace LeafNode
} // namespace app::classes::types
