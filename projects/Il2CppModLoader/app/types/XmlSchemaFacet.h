#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaFacet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaFacet__Class** type_info;
        inline app::XmlSchemaFacet__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaFacet__Class>(type_info, "System.Xml.Schema", "XmlSchemaFacet");
        }
        inline app::XmlSchemaFacet* create() {
            return il2cpp::create_object<app::XmlSchemaFacet>(get_class());
        }
    } // namespace XmlSchemaFacet
} // namespace app::classes::types
