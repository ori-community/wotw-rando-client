#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlAttributes {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlAttributes__Class** type_info;
        inline app::XmlAttributes__Class* get_class() {
            return il2cpp::get_class<app::XmlAttributes__Class>(type_info, "System.Xml.Serialization", "XmlAttributes");
        }
        inline app::XmlAttributes* create() {
            return il2cpp::create_object<app::XmlAttributes>(get_class());
        }
    } // namespace XmlAttributes
} // namespace app::classes::types
