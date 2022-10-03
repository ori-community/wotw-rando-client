#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlAttributeOverrides {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlAttributeOverrides__Class** type_info;
        inline app::XmlAttributeOverrides__Class* get_class() {
            return il2cpp::get_class<app::XmlAttributeOverrides__Class>(type_info, "System.Xml.Serialization", "XmlAttributeOverrides");
        }
        inline app::XmlAttributeOverrides* create() {
            return il2cpp::create_object<app::XmlAttributeOverrides>(get_class());
        }
    } // namespace XmlAttributeOverrides
} // namespace app::classes::types
