#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaSimpleContent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaSimpleContent__Class** type_info;
        inline app::XmlSchemaSimpleContent__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaSimpleContent__Class>(type_info, "System.Xml.Schema", "XmlSchemaSimpleContent");
        }
        inline app::XmlSchemaSimpleContent* create() {
            return il2cpp::create_object<app::XmlSchemaSimpleContent>(get_class());
        }
    } // namespace XmlSchemaSimpleContent
} // namespace app::classes::types
