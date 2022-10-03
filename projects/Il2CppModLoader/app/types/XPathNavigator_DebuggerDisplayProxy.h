#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XPathNavigator_DebuggerDisplayProxy {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XPathNavigator_DebuggerDisplayProxy__Class** type_info;
        inline app::XPathNavigator_DebuggerDisplayProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::XPathNavigator_DebuggerDisplayProxy__Class>(type_info, "System.Xml.XPath", "XPathNavigator", "DebuggerDisplayProxy");
        }
        inline app::XPathNavigator_DebuggerDisplayProxy* create() {
            return il2cpp::create_object<app::XPathNavigator_DebuggerDisplayProxy>(get_class());
        }
        inline app::XPathNavigator_DebuggerDisplayProxy__Boxed* box(app::XPathNavigator_DebuggerDisplayProxy value) {
            return il2cpp::box_value<app::XPathNavigator_DebuggerDisplayProxy__Boxed>(get_class(), value);
        }
    } // namespace XPathNavigator_DebuggerDisplayProxy
} // namespace app::classes::types
