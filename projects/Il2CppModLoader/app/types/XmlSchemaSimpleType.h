#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaSimpleType {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaSimpleType__Class** type_info;
        inline app::XmlSchemaSimpleType__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaSimpleType__Class>(type_info, "System.Xml.Schema", "XmlSchemaSimpleType");
        }
        inline app::XmlSchemaSimpleType* create() {
            return il2cpp::create_object<app::XmlSchemaSimpleType>(get_class());
        }
        inline app::XmlSchemaSimpleType__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlSchemaSimpleType__Array>(get_class(), size);
        }
    } // namespace XmlSchemaSimpleType
} // namespace app::classes::types
