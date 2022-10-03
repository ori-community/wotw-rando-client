#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaObjectTable_ValuesCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaObjectTable_ValuesCollection__Class** type_info;
        inline app::XmlSchemaObjectTable_ValuesCollection__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSchemaObjectTable_ValuesCollection__Class>(type_info, "System.Xml.Schema", "XmlSchemaObjectTable", "ValuesCollection");
        }
        inline app::XmlSchemaObjectTable_ValuesCollection* create() {
            return il2cpp::create_object<app::XmlSchemaObjectTable_ValuesCollection>(get_class());
        }
    } // namespace XmlSchemaObjectTable_ValuesCollection
} // namespace app::classes::types
