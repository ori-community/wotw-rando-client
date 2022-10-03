#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlLinkedNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlLinkedNode__Class** type_info;
        inline app::XmlLinkedNode__Class* get_class() {
            return il2cpp::get_class<app::XmlLinkedNode__Class>(type_info, "System.Xml", "XmlLinkedNode");
        }
        inline app::XmlLinkedNode* create() {
            return il2cpp::create_object<app::XmlLinkedNode>(get_class());
        }
    } // namespace XmlLinkedNode
} // namespace app::classes::types
