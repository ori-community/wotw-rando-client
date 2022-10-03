#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlAnyElementAttributes {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlAnyElementAttributes__Class** type_info;
        inline app::XmlAnyElementAttributes__Class* get_class() {
            return il2cpp::get_class<app::XmlAnyElementAttributes__Class>(type_info, "System.Xml.Serialization", "XmlAnyElementAttributes");
        }
        inline app::XmlAnyElementAttributes* create() {
            return il2cpp::create_object<app::XmlAnyElementAttributes>(get_class());
        }
    } // namespace XmlAnyElementAttributes
} // namespace app::classes::types
