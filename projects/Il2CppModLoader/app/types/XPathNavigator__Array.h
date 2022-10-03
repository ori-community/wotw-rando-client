#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XPathNavigator__Array {
        namespace {
            app::XPathNavigator__Array__Class* type_info_ref = nullptr;
        }
        app::XPathNavigator__Array__Class** type_info = &type_info_ref;
        inline app::XPathNavigator__Array__Class* get_class() {
            return il2cpp::get_class<app::XPathNavigator__Array__Class>(type_info, "System.Xml.XPath", "XPathNavigator[]");
        }
        inline app::XPathNavigator__Array* create() {
            return il2cpp::create_object<app::XPathNavigator__Array>(get_class());
        }
    } // namespace XPathNavigator__Array
} // namespace app::classes::types
