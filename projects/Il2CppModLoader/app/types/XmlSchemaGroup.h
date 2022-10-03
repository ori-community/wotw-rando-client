#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaGroup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaGroup__Class** type_info;
        inline app::XmlSchemaGroup__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaGroup__Class>(type_info, "System.Xml.Schema", "XmlSchemaGroup");
        }
        inline app::XmlSchemaGroup* create() {
            return il2cpp::create_object<app::XmlSchemaGroup>(get_class());
        }
    } // namespace XmlSchemaGroup
} // namespace app::classes::types
