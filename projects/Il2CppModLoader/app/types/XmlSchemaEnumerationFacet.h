#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaEnumerationFacet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaEnumerationFacet__Class** type_info;
        inline app::XmlSchemaEnumerationFacet__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaEnumerationFacet__Class>(type_info, "System.Xml.Schema", "XmlSchemaEnumerationFacet");
        }
        inline app::XmlSchemaEnumerationFacet* create() {
            return il2cpp::create_object<app::XmlSchemaEnumerationFacet>(get_class());
        }
    } // namespace XmlSchemaEnumerationFacet
} // namespace app::classes::types
