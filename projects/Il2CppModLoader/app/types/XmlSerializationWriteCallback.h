#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSerializationWriteCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSerializationWriteCallback__Class** type_info;
        inline app::XmlSerializationWriteCallback__Class* get_class() {
            return il2cpp::get_class<app::XmlSerializationWriteCallback__Class>(type_info, "System.Xml.Serialization", "XmlSerializationWriteCallback");
        }
        inline app::XmlSerializationWriteCallback* create() {
            return il2cpp::create_object<app::XmlSerializationWriteCallback>(get_class());
        }
    } // namespace XmlSerializationWriteCallback
} // namespace app::classes::types
