#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlEnumAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlEnumAttribute__Class** type_info;
        inline app::XmlEnumAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlEnumAttribute__Class>(type_info, "System.Xml.Serialization", "XmlEnumAttribute");
        }
        inline app::XmlEnumAttribute* create() {
            return il2cpp::create_object<app::XmlEnumAttribute>(get_class());
        }
    } // namespace XmlEnumAttribute
} // namespace app::classes::types
