#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XPathParser {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XPathParser__Class** type_info;
        inline app::XPathParser__Class* get_class() {
            return il2cpp::get_class<app::XPathParser__Class>(type_info, "MS.Internal.Xml.XPath", "XPathParser");
        }
        inline app::XPathParser* create() {
            return il2cpp::create_object<app::XPathParser>(get_class());
        }
    } // namespace XPathParser
} // namespace app::classes::types
