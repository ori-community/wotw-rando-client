#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaObjectCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaObjectCollection__Class** type_info;
        inline app::XmlSchemaObjectCollection__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaObjectCollection__Class>(type_info, "System.Xml.Schema", "XmlSchemaObjectCollection");
        }
        inline app::XmlSchemaObjectCollection* create() {
            return il2cpp::create_object<app::XmlSchemaObjectCollection>(get_class());
        }
    } // namespace XmlSchemaObjectCollection
} // namespace app::classes::types
