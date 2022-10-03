#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlIgnoreAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlIgnoreAttribute__Class** type_info;
        inline app::XmlIgnoreAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlIgnoreAttribute__Class>(type_info, "System.Xml.Serialization", "XmlIgnoreAttribute");
        }
        inline app::XmlIgnoreAttribute* create() {
            return il2cpp::create_object<app::XmlIgnoreAttribute>(get_class());
        }
    } // namespace XmlIgnoreAttribute
} // namespace app::classes::types
