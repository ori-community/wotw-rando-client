#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlElementAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlElementAttribute__Class** type_info;
        inline app::XmlElementAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlElementAttribute__Class>(type_info, "System.Xml.Serialization", "XmlElementAttribute");
        }
        inline app::XmlElementAttribute* create() {
            return il2cpp::create_object<app::XmlElementAttribute>(get_class());
        }
    } // namespace XmlElementAttribute
} // namespace app::classes::types
