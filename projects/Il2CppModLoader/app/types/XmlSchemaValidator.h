#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaValidator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaValidator__Class** type_info;
        inline app::XmlSchemaValidator__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaValidator__Class>(type_info, "System.Xml.Schema", "XmlSchemaValidator");
        }
        inline app::XmlSchemaValidator* create() {
            return il2cpp::create_object<app::XmlSchemaValidator>(get_class());
        }
    } // namespace XmlSchemaValidator
} // namespace app::classes::types
