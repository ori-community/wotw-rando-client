#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaMinLengthFacet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaMinLengthFacet__Class** type_info;
        inline app::XmlSchemaMinLengthFacet__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaMinLengthFacet__Class>(type_info, "System.Xml.Schema", "XmlSchemaMinLengthFacet");
        }
        inline app::XmlSchemaMinLengthFacet* create() {
            return il2cpp::create_object<app::XmlSchemaMinLengthFacet>(get_class());
        }
    } // namespace XmlSchemaMinLengthFacet
} // namespace app::classes::types
