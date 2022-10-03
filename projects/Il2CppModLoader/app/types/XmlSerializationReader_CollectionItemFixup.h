#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSerializationReader_CollectionItemFixup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSerializationReader_CollectionItemFixup__Class** type_info;
        inline app::XmlSerializationReader_CollectionItemFixup__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSerializationReader_CollectionItemFixup__Class>(type_info, "System.Xml.Serialization", "XmlSerializationReader", "CollectionItemFixup");
        }
        inline app::XmlSerializationReader_CollectionItemFixup* create() {
            return il2cpp::create_object<app::XmlSerializationReader_CollectionItemFixup>(get_class());
        }
    } // namespace XmlSerializationReader_CollectionItemFixup
} // namespace app::classes::types
