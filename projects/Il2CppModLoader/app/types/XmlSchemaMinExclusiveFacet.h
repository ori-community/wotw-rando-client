#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaMinExclusiveFacet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaMinExclusiveFacet__Class** type_info;
        inline app::XmlSchemaMinExclusiveFacet__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaMinExclusiveFacet__Class>(type_info, "System.Xml.Schema", "XmlSchemaMinExclusiveFacet");
        }
        inline app::XmlSchemaMinExclusiveFacet* create() {
            return il2cpp::create_object<app::XmlSchemaMinExclusiveFacet>(get_class());
        }
    } // namespace XmlSchemaMinExclusiveFacet
} // namespace app::classes::types
