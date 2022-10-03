#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlReflectionImporter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlReflectionImporter__Class** type_info;
        inline app::XmlReflectionImporter__Class* get_class() {
            return il2cpp::get_class<app::XmlReflectionImporter__Class>(type_info, "System.Xml.Serialization", "XmlReflectionImporter");
        }
        inline app::XmlReflectionImporter* create() {
            return il2cpp::create_object<app::XmlReflectionImporter>(get_class());
        }
    } // namespace XmlReflectionImporter
} // namespace app::classes::types
