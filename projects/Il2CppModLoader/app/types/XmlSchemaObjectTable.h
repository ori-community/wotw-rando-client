#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaObjectTable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaObjectTable__Class** type_info;
        inline app::XmlSchemaObjectTable__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaObjectTable__Class>(type_info, "System.Xml.Schema", "XmlSchemaObjectTable");
        }
        inline app::XmlSchemaObjectTable* create() {
            return il2cpp::create_object<app::XmlSchemaObjectTable>(get_class());
        }
    } // namespace XmlSchemaObjectTable
} // namespace app::classes::types
