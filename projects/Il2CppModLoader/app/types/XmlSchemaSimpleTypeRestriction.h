#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaSimpleTypeRestriction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaSimpleTypeRestriction__Class** type_info;
        inline app::XmlSchemaSimpleTypeRestriction__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaSimpleTypeRestriction__Class>(type_info, "System.Xml.Schema", "XmlSchemaSimpleTypeRestriction");
        }
        inline app::XmlSchemaSimpleTypeRestriction* create() {
            return il2cpp::create_object<app::XmlSchemaSimpleTypeRestriction>(get_class());
        }
    } // namespace XmlSchemaSimpleTypeRestriction
} // namespace app::classes::types
