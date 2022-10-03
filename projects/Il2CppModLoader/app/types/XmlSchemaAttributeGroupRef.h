#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaAttributeGroupRef {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaAttributeGroupRef__Class** type_info;
        inline app::XmlSchemaAttributeGroupRef__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaAttributeGroupRef__Class>(type_info, "System.Xml.Schema", "XmlSchemaAttributeGroupRef");
        }
        inline app::XmlSchemaAttributeGroupRef* create() {
            return il2cpp::create_object<app::XmlSchemaAttributeGroupRef>(get_class());
        }
    } // namespace XmlSchemaAttributeGroupRef
} // namespace app::classes::types
