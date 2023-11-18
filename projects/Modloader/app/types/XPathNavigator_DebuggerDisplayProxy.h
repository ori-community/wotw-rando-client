#pragma once
#include <Modloader/app/structs/XPathNavigator_DebuggerDisplayProxy.h>
#include <Modloader/app/structs/XPathNavigator_DebuggerDisplayProxy__Boxed.h>
#include <Modloader/app/structs/XPathNavigator_DebuggerDisplayProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XPathNavigator_DebuggerDisplayProxy {
        inline app::XPathNavigator_DebuggerDisplayProxy__Class** type_info() {
            static app::XPathNavigator_DebuggerDisplayProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XPathNavigator_DebuggerDisplayProxy__Class**)(modloader::win::memory::resolve_rva(0x04744B08));
            }
            return cache;
        }
        inline app::XPathNavigator_DebuggerDisplayProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::XPathNavigator_DebuggerDisplayProxy__Class>(type_info(), "System.Xml.XPath", "XPathNavigator", "DebuggerDisplayProxy");
        }
        inline app::XPathNavigator_DebuggerDisplayProxy* create() {
            return il2cpp::create_object<app::XPathNavigator_DebuggerDisplayProxy>(get_class());
        }
        inline app::XPathNavigator_DebuggerDisplayProxy__Boxed* box(app::XPathNavigator_DebuggerDisplayProxy value) {
            return il2cpp::box_value<app::XPathNavigator_DebuggerDisplayProxy__Boxed>(get_class(), value);
        }
    } // namespace XPathNavigator_DebuggerDisplayProxy
} // namespace app::classes::types
