#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlElementAttributes {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlElementAttributes__Class** type_info;
        inline app::XmlElementAttributes__Class* get_class() {
            return il2cpp::get_class<app::XmlElementAttributes__Class>(type_info, "System.Xml.Serialization", "XmlElementAttributes");
        }
        inline app::XmlElementAttributes* create() {
            return il2cpp::create_object<app::XmlElementAttributes>(get_class());
        }
    } // namespace XmlElementAttributes
} // namespace app::classes::types
