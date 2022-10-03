#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaMaxLengthFacet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaMaxLengthFacet__Class** type_info;
        inline app::XmlSchemaMaxLengthFacet__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaMaxLengthFacet__Class>(type_info, "System.Xml.Schema", "XmlSchemaMaxLengthFacet");
        }
        inline app::XmlSchemaMaxLengthFacet* create() {
            return il2cpp::create_object<app::XmlSchemaMaxLengthFacet>(get_class());
        }
    } // namespace XmlSchemaMaxLengthFacet
} // namespace app::classes::types
