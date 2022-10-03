#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaAttributeGroup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaAttributeGroup__Class** type_info;
        inline app::XmlSchemaAttributeGroup__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaAttributeGroup__Class>(type_info, "System.Xml.Schema", "XmlSchemaAttributeGroup");
        }
        inline app::XmlSchemaAttributeGroup* create() {
            return il2cpp::create_object<app::XmlSchemaAttributeGroup>(get_class());
        }
    } // namespace XmlSchemaAttributeGroup
} // namespace app::classes::types
