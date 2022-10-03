#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaMinInclusiveFacet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaMinInclusiveFacet__Class** type_info;
        inline app::XmlSchemaMinInclusiveFacet__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaMinInclusiveFacet__Class>(type_info, "System.Xml.Schema", "XmlSchemaMinInclusiveFacet");
        }
        inline app::XmlSchemaMinInclusiveFacet* create() {
            return il2cpp::create_object<app::XmlSchemaMinInclusiveFacet>(get_class());
        }
    } // namespace XmlSchemaMinInclusiveFacet
} // namespace app::classes::types
