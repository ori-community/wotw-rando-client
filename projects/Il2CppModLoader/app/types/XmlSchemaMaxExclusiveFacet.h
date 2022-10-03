#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaMaxExclusiveFacet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaMaxExclusiveFacet__Class** type_info;
        inline app::XmlSchemaMaxExclusiveFacet__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaMaxExclusiveFacet__Class>(type_info, "System.Xml.Schema", "XmlSchemaMaxExclusiveFacet");
        }
        inline app::XmlSchemaMaxExclusiveFacet* create() {
            return il2cpp::create_object<app::XmlSchemaMaxExclusiveFacet>(get_class());
        }
    } // namespace XmlSchemaMaxExclusiveFacet
} // namespace app::classes::types
