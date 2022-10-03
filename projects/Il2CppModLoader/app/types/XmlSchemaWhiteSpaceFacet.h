#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaWhiteSpaceFacet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaWhiteSpaceFacet__Class** type_info;
        inline app::XmlSchemaWhiteSpaceFacet__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaWhiteSpaceFacet__Class>(type_info, "System.Xml.Schema", "XmlSchemaWhiteSpaceFacet");
        }
        inline app::XmlSchemaWhiteSpaceFacet* create() {
            return il2cpp::create_object<app::XmlSchemaWhiteSpaceFacet>(get_class());
        }
    } // namespace XmlSchemaWhiteSpaceFacet
} // namespace app::classes::types
