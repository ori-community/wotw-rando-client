#pragma once
#include <Modloader/app/structs/XPathNavigator__Array.h>
#include <Modloader/app/structs/XPathNavigator__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XPathNavigator__Array {
        inline app::XPathNavigator__Array__Class** type_info() {
            static app::XPathNavigator__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XPathNavigator__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XPathNavigator__Array__Class* get_class() {
            return il2cpp::get_class<app::XPathNavigator__Array__Class>(type_info(), "System.Xml.XPath", "XPathNavigator[]");
        }
        inline app::XPathNavigator__Array* create() {
            return il2cpp::create_object<app::XPathNavigator__Array>(get_class());
        }
    } // namespace XPathNavigator__Array
} // namespace app::classes::types
