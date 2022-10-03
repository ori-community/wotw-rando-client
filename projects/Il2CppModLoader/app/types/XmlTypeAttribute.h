#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlTypeAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlTypeAttribute__Class** type_info;
        inline app::XmlTypeAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeAttribute__Class>(type_info, "System.Xml.Serialization", "XmlTypeAttribute");
        }
        inline app::XmlTypeAttribute* create() {
            return il2cpp::create_object<app::XmlTypeAttribute>(get_class());
        }
    } // namespace XmlTypeAttribute
} // namespace app::classes::types
