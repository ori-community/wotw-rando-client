#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaSimpleTypeList {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaSimpleTypeList__Class** type_info;
        inline app::XmlSchemaSimpleTypeList__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaSimpleTypeList__Class>(type_info, "System.Xml.Schema", "XmlSchemaSimpleTypeList");
        }
        inline app::XmlSchemaSimpleTypeList* create() {
            return il2cpp::create_object<app::XmlSchemaSimpleTypeList>(get_class());
        }
    } // namespace XmlSchemaSimpleTypeList
} // namespace app::classes::types
