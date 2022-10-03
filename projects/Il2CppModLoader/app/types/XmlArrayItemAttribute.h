#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlArrayItemAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlArrayItemAttribute__Class** type_info;
        inline app::XmlArrayItemAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlArrayItemAttribute__Class>(type_info, "System.Xml.Serialization", "XmlArrayItemAttribute");
        }
        inline app::XmlArrayItemAttribute* create() {
            return il2cpp::create_object<app::XmlArrayItemAttribute>(get_class());
        }
    } // namespace XmlArrayItemAttribute
} // namespace app::classes::types
