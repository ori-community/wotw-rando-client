#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XPathException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XPathException__Class** type_info;
        inline app::XPathException__Class* get_class() {
            return il2cpp::get_class<app::XPathException__Class>(type_info, "System.Xml.XPath", "XPathException");
        }
        inline app::XPathException* create() {
            return il2cpp::create_object<app::XPathException>(get_class());
        }
    } // namespace XPathException
} // namespace app::classes::types
