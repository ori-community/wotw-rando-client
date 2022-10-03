#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaTotalDigitsFacet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSchemaTotalDigitsFacet__Class** type_info;
        inline app::XmlSchemaTotalDigitsFacet__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaTotalDigitsFacet__Class>(type_info, "System.Xml.Schema", "XmlSchemaTotalDigitsFacet");
        }
        inline app::XmlSchemaTotalDigitsFacet* create() {
            return il2cpp::create_object<app::XmlSchemaTotalDigitsFacet>(get_class());
        }
    } // namespace XmlSchemaTotalDigitsFacet
} // namespace app::classes::types
