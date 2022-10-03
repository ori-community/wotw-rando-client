#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSerializationReader_CollectionFixup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSerializationReader_CollectionFixup__Class** type_info;
        inline app::XmlSerializationReader_CollectionFixup__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSerializationReader_CollectionFixup__Class>(type_info, "System.Xml.Serialization", "XmlSerializationReader", "CollectionFixup");
        }
        inline app::XmlSerializationReader_CollectionFixup* create() {
            return il2cpp::create_object<app::XmlSerializationReader_CollectionFixup>(get_class());
        }
    } // namespace XmlSerializationReader_CollectionFixup
} // namespace app::classes::types
