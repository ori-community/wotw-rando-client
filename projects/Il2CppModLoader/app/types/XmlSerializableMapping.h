#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSerializableMapping {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSerializableMapping__Class** type_info;
        inline app::XmlSerializableMapping__Class* get_class() {
            return il2cpp::get_class<app::XmlSerializableMapping__Class>(type_info, "System.Xml.Serialization", "XmlSerializableMapping");
        }
        inline app::XmlSerializableMapping* create() {
            return il2cpp::create_object<app::XmlSerializableMapping>(get_class());
        }
    } // namespace XmlSerializableMapping
} // namespace app::classes::types
