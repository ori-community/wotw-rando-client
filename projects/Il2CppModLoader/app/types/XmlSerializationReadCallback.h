#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSerializationReadCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSerializationReadCallback__Class** type_info;
        inline app::XmlSerializationReadCallback__Class* get_class() {
            return il2cpp::get_class<app::XmlSerializationReadCallback__Class>(type_info, "System.Xml.Serialization", "XmlSerializationReadCallback");
        }
        inline app::XmlSerializationReadCallback* create() {
            return il2cpp::create_object<app::XmlSerializationReadCallback>(get_class());
        }
    } // namespace XmlSerializationReadCallback
} // namespace app::classes::types
