#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaCollection__Class** type_info;
        inline app::XmlSchemaCollection__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaCollection__Class>(type_info, "System.Xml.Schema", "XmlSchemaCollection");
        }
        inline app::XmlSchemaCollection* create() {
            return il2cpp::create_object<app::XmlSchemaCollection>(get_class());
        }
    } // namespace XmlSchemaCollection
} // namespace app::classes::types
