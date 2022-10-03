#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSerializerFactory {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSerializerFactory__Class** type_info;
        inline app::XmlSerializerFactory__Class* get_class() {
            return il2cpp::get_class<app::XmlSerializerFactory__Class>(type_info, "System.Xml.Serialization", "XmlSerializerFactory");
        }
        inline app::XmlSerializerFactory* create() {
            return il2cpp::create_object<app::XmlSerializerFactory>(get_class());
        }
    } // namespace XmlSerializerFactory
} // namespace app::classes::types
