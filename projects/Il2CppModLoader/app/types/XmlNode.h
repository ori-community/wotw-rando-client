#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlNode__Class** type_info;
        inline app::XmlNode__Class* get_class() {
            return il2cpp::get_class<app::XmlNode__Class>(type_info, "System.Xml", "XmlNode");
        }
        inline app::XmlNode* create() {
            return il2cpp::create_object<app::XmlNode>(get_class());
        }
        inline app::XmlNode__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlNode__Array>(get_class(), size);
        }
        inline app::XmlNode__Array* create_array(const std::vector<app::XmlNode*>& items) {
            return il2cpp::array_new<app::XmlNode__Array>(get_class(), items);
        }
    } // namespace XmlNode
} // namespace app::classes::types
