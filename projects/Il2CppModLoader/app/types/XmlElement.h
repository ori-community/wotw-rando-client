#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlElement {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlElement__Class** type_info;
        inline app::XmlElement__Class* get_class() {
            return il2cpp::get_class<app::XmlElement__Class>(type_info, "System.Xml", "XmlElement");
        }
        inline app::XmlElement* create() {
            return il2cpp::create_object<app::XmlElement>(get_class());
        }
    } // namespace XmlElement
} // namespace app::classes::types
