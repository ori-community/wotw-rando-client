#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlArrayAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlArrayAttribute__Class** type_info;
        inline app::XmlArrayAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlArrayAttribute__Class>(type_info, "System.Xml.Serialization", "XmlArrayAttribute");
        }
        inline app::XmlArrayAttribute* create() {
            return il2cpp::create_object<app::XmlArrayAttribute>(get_class());
        }
    } // namespace XmlArrayAttribute
} // namespace app::classes::types
