#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaSimpleTypeUnion {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaSimpleTypeUnion__Class** type_info;
        inline app::XmlSchemaSimpleTypeUnion__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaSimpleTypeUnion__Class>(type_info, "System.Xml.Schema", "XmlSchemaSimpleTypeUnion");
        }
        inline app::XmlSchemaSimpleTypeUnion* create() {
            return il2cpp::create_object<app::XmlSchemaSimpleTypeUnion>(get_class());
        }
    } // namespace XmlSchemaSimpleTypeUnion
} // namespace app::classes::types
