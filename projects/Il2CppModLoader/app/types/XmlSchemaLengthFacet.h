#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaLengthFacet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaLengthFacet__Class** type_info;
        inline app::XmlSchemaLengthFacet__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaLengthFacet__Class>(type_info, "System.Xml.Schema", "XmlSchemaLengthFacet");
        }
        inline app::XmlSchemaLengthFacet* create() {
            return il2cpp::create_object<app::XmlSchemaLengthFacet>(get_class());
        }
    } // namespace XmlSchemaLengthFacet
} // namespace app::classes::types
