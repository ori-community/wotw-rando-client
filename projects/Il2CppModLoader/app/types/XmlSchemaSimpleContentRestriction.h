#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaSimpleContentRestriction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaSimpleContentRestriction__Class** type_info;
        inline app::XmlSchemaSimpleContentRestriction__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaSimpleContentRestriction__Class>(type_info, "System.Xml.Schema", "XmlSchemaSimpleContentRestriction");
        }
        inline app::XmlSchemaSimpleContentRestriction* create() {
            return il2cpp::create_object<app::XmlSchemaSimpleContentRestriction>(get_class());
        }
    } // namespace XmlSchemaSimpleContentRestriction
} // namespace app::classes::types
