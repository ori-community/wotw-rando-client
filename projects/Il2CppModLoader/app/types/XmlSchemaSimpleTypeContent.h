#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaSimpleTypeContent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaSimpleTypeContent__Class** type_info;
        inline app::XmlSchemaSimpleTypeContent__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaSimpleTypeContent__Class>(type_info, "System.Xml.Schema", "XmlSchemaSimpleTypeContent");
        }
        inline app::XmlSchemaSimpleTypeContent* create() {
            return il2cpp::create_object<app::XmlSchemaSimpleTypeContent>(get_class());
        }
    } // namespace XmlSchemaSimpleTypeContent
} // namespace app::classes::types
