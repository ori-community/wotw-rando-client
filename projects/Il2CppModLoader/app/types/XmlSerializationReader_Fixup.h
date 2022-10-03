#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSerializationReader_Fixup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSerializationReader_Fixup__Class** type_info;
        inline app::XmlSerializationReader_Fixup__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSerializationReader_Fixup__Class>(type_info, "System.Xml.Serialization", "XmlSerializationReader", "Fixup");
        }
        inline app::XmlSerializationReader_Fixup* create() {
            return il2cpp::create_object<app::XmlSerializationReader_Fixup>(get_class());
        }
    } // namespace XmlSerializationReader_Fixup
} // namespace app::classes::types
