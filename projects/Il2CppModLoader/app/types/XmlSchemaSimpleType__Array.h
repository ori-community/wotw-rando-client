#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaSimpleType__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaSimpleType__Array__Class** type_info;
        inline app::XmlSchemaSimpleType__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaSimpleType__Array__Class>(type_info, "System.Xml.Schema", "XmlSchemaSimpleType[]");
        }
        inline app::XmlSchemaSimpleType__Array* create() {
            return il2cpp::create_object<app::XmlSchemaSimpleType__Array>(get_class());
        }
    } // namespace XmlSchemaSimpleType__Array
} // namespace app::classes::types
