#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaComplexContent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaComplexContent__Class** type_info;
        inline app::XmlSchemaComplexContent__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaComplexContent__Class>(type_info, "System.Xml.Schema", "XmlSchemaComplexContent");
        }
        inline app::XmlSchemaComplexContent* create() {
            return il2cpp::create_object<app::XmlSchemaComplexContent>(get_class());
        }
    } // namespace XmlSchemaComplexContent
} // namespace app::classes::types
