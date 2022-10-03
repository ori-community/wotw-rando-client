#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaSubstitutionGroup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaSubstitutionGroup__Class** type_info;
        inline app::XmlSchemaSubstitutionGroup__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaSubstitutionGroup__Class>(type_info, "System.Xml.Schema", "XmlSchemaSubstitutionGroup");
        }
        inline app::XmlSchemaSubstitutionGroup* create() {
            return il2cpp::create_object<app::XmlSchemaSubstitutionGroup>(get_class());
        }
    } // namespace XmlSchemaSubstitutionGroup
} // namespace app::classes::types
