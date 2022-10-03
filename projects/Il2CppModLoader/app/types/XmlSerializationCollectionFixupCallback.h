#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSerializationCollectionFixupCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSerializationCollectionFixupCallback__Class** type_info;
        inline app::XmlSerializationCollectionFixupCallback__Class* get_class() {
            return il2cpp::get_class<app::XmlSerializationCollectionFixupCallback__Class>(type_info, "System.Xml.Serialization", "XmlSerializationCollectionFixupCallback");
        }
        inline app::XmlSerializationCollectionFixupCallback* create() {
            return il2cpp::create_object<app::XmlSerializationCollectionFixupCallback>(get_class());
        }
    } // namespace XmlSerializationCollectionFixupCallback
} // namespace app::classes::types
