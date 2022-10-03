#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSerializationFixupCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSerializationFixupCallback__Class** type_info;
        inline app::XmlSerializationFixupCallback__Class* get_class() {
            return il2cpp::get_class<app::XmlSerializationFixupCallback__Class>(type_info, "System.Xml.Serialization", "XmlSerializationFixupCallback");
        }
        inline app::XmlSerializationFixupCallback* create() {
            return il2cpp::create_object<app::XmlSerializationFixupCallback>(get_class());
        }
    } // namespace XmlSerializationFixupCallback
} // namespace app::classes::types
