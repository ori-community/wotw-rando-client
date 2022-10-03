#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaComplexType {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaComplexType__Class** type_info;
        inline app::XmlSchemaComplexType__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaComplexType__Class>(type_info, "System.Xml.Schema", "XmlSchemaComplexType");
        }
        inline app::XmlSchemaComplexType* create() {
            return il2cpp::create_object<app::XmlSchemaComplexType>(get_class());
        }
    } // namespace XmlSchemaComplexType
} // namespace app::classes::types
