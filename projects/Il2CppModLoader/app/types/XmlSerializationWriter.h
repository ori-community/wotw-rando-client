#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSerializationWriter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSerializationWriter__Class** type_info;
        inline app::XmlSerializationWriter__Class* get_class() {
            return il2cpp::get_class<app::XmlSerializationWriter__Class>(type_info, "System.Xml.Serialization", "XmlSerializationWriter");
        }
        inline app::XmlSerializationWriter* create() {
            return il2cpp::create_object<app::XmlSerializationWriter>(get_class());
        }
    } // namespace XmlSerializationWriter
} // namespace app::classes::types
