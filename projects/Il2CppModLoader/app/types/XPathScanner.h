#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XPathScanner {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XPathScanner__Class** type_info;
        inline app::XPathScanner__Class* get_class() {
            return il2cpp::get_class<app::XPathScanner__Class>(type_info, "MS.Internal.Xml.XPath", "XPathScanner");
        }
        inline app::XPathScanner* create() {
            return il2cpp::create_object<app::XPathScanner>(get_class());
        }
    } // namespace XPathScanner
} // namespace app::classes::types
