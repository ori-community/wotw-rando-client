#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlReflectionImporter_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlReflectionImporter_c__Class** type_info;
        inline app::XmlReflectionImporter_c__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlReflectionImporter_c__Class>(type_info, "System.Xml.Serialization", "XmlReflectionImporter", "<>c");
        }
        inline app::XmlReflectionImporter_c* create() {
            return il2cpp::create_object<app::XmlReflectionImporter_c>(get_class());
        }
    } // namespace XmlReflectionImporter_c
} // namespace app::classes::types
