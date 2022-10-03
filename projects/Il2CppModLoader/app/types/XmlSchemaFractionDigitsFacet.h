#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaFractionDigitsFacet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaFractionDigitsFacet__Class** type_info;
        inline app::XmlSchemaFractionDigitsFacet__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaFractionDigitsFacet__Class>(type_info, "System.Xml.Schema", "XmlSchemaFractionDigitsFacet");
        }
        inline app::XmlSchemaFractionDigitsFacet* create() {
            return il2cpp::create_object<app::XmlSchemaFractionDigitsFacet>(get_class());
        }
    } // namespace XmlSchemaFractionDigitsFacet
} // namespace app::classes::types
