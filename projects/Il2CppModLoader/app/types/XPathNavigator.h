#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XPathNavigator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XPathNavigator__Class** type_info;
        inline app::XPathNavigator__Class* get_class() {
            return il2cpp::get_class<app::XPathNavigator__Class>(type_info, "System.Xml.XPath", "XPathNavigator");
        }
        inline app::XPathNavigator* create() {
            return il2cpp::create_object<app::XPathNavigator>(get_class());
        }
        inline app::XPathNavigator__Array* create_array(int size) {
            return il2cpp::array_new<app::XPathNavigator__Array>(get_class(), size);
        }
    } // namespace XPathNavigator
} // namespace app::classes::types
