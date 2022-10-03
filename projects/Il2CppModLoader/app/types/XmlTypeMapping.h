#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlTypeMapping {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlTypeMapping__Class** type_info;
        inline app::XmlTypeMapping__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeMapping__Class>(type_info, "System.Xml.Serialization", "XmlTypeMapping");
        }
        inline app::XmlTypeMapping* create() {
            return il2cpp::create_object<app::XmlTypeMapping>(get_class());
        }
    } // namespace XmlTypeMapping
} // namespace app::classes::types
