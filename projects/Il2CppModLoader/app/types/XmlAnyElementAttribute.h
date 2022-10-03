#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlAnyElementAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlAnyElementAttribute__Class** type_info;
        inline app::XmlAnyElementAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlAnyElementAttribute__Class>(type_info, "System.Xml.Serialization", "XmlAnyElementAttribute");
        }
        inline app::XmlAnyElementAttribute* create() {
            return il2cpp::create_object<app::XmlAnyElementAttribute>(get_class());
        }
    } // namespace XmlAnyElementAttribute
} // namespace app::classes::types
