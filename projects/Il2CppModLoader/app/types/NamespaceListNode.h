#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NamespaceListNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NamespaceListNode__Class** type_info;
        inline app::NamespaceListNode__Class* get_class() {
            return il2cpp::get_class<app::NamespaceListNode__Class>(type_info, "System.Xml.Schema", "NamespaceListNode");
        }
        inline app::NamespaceListNode* create() {
            return il2cpp::create_object<app::NamespaceListNode>(get_class());
        }
    } // namespace NamespaceListNode
} // namespace app::classes::types
