#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlAttributeAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlAttributeAttribute__Class** type_info;
        inline app::XmlAttributeAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlAttributeAttribute__Class>(type_info, "System.Xml.Serialization", "XmlAttributeAttribute");
        }
        inline app::XmlAttributeAttribute* create() {
            return il2cpp::create_object<app::XmlAttributeAttribute>(get_class());
        }
    } // namespace XmlAttributeAttribute
} // namespace app::classes::types
