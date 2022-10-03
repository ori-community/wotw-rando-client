#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlNamespaceDeclarationsAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlNamespaceDeclarationsAttribute__Class** type_info;
        inline app::XmlNamespaceDeclarationsAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlNamespaceDeclarationsAttribute__Class>(type_info, "System.Xml.Serialization", "XmlNamespaceDeclarationsAttribute");
        }
        inline app::XmlNamespaceDeclarationsAttribute* create() {
            return il2cpp::create_object<app::XmlNamespaceDeclarationsAttribute>(get_class());
        }
    } // namespace XmlNamespaceDeclarationsAttribute
} // namespace app::classes::types
