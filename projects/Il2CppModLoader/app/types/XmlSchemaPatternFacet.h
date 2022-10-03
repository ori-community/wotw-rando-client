#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaPatternFacet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaPatternFacet__Class** type_info;
        inline app::XmlSchemaPatternFacet__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaPatternFacet__Class>(type_info, "System.Xml.Schema", "XmlSchemaPatternFacet");
        }
        inline app::XmlSchemaPatternFacet* create() {
            return il2cpp::create_object<app::XmlSchemaPatternFacet>(get_class());
        }
    } // namespace XmlSchemaPatternFacet
} // namespace app::classes::types
