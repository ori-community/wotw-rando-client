#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlNamedNodeMap {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlNamedNodeMap__Class** type_info;
        inline app::XmlNamedNodeMap__Class* get_class() {
            return il2cpp::get_class<app::XmlNamedNodeMap__Class>(type_info, "System.Xml", "XmlNamedNodeMap");
        }
        inline app::XmlNamedNodeMap* create() {
            return il2cpp::create_object<app::XmlNamedNodeMap>(get_class());
        }
    } // namespace XmlNamedNodeMap
} // namespace app::classes::types
