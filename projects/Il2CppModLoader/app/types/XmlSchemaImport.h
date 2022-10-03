#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaImport {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaImport__Class** type_info;
        inline app::XmlSchemaImport__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaImport__Class>(type_info, "System.Xml.Schema", "XmlSchemaImport");
        }
        inline app::XmlSchemaImport* create() {
            return il2cpp::create_object<app::XmlSchemaImport>(get_class());
        }
    } // namespace XmlSchemaImport
} // namespace app::classes::types
