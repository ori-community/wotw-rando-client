#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XPathNavigatorKeyComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XPathNavigatorKeyComparer__Class** type_info;
        inline app::XPathNavigatorKeyComparer__Class* get_class() {
            return il2cpp::get_class<app::XPathNavigatorKeyComparer__Class>(type_info, "System.Xml.XPath", "XPathNavigatorKeyComparer");
        }
        inline app::XPathNavigatorKeyComparer* create() {
            return il2cpp::create_object<app::XPathNavigatorKeyComparer>(get_class());
        }
    } // namespace XPathNavigatorKeyComparer
} // namespace app::classes::types
