#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaSubstitutionGroupV1Compat {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaSubstitutionGroupV1Compat__Class** type_info;
        inline app::XmlSchemaSubstitutionGroupV1Compat__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaSubstitutionGroupV1Compat__Class>(type_info, "System.Xml.Schema", "XmlSchemaSubstitutionGroupV1Compat");
        }
        inline app::XmlSchemaSubstitutionGroupV1Compat* create() {
            return il2cpp::create_object<app::XmlSchemaSubstitutionGroupV1Compat>(get_class());
        }
    } // namespace XmlSchemaSubstitutionGroupV1Compat
} // namespace app::classes::types
