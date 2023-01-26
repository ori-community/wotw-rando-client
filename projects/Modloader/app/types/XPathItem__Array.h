#pragma once
#include <Modloader/app/structs/XPathItem__Array.h>
#include <Modloader/app/structs/XPathItem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XPathItem__Array {
        inline app::XPathItem__Array__Class** type_info() {
            static app::XPathItem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XPathItem__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XPathItem__Array__Class* get_class() {
            return il2cpp::get_class<app::XPathItem__Array__Class>(type_info(), "System.Xml.XPath", "XPathItem[]");
        }
        inline app::XPathItem__Array* create() {
            return il2cpp::create_object<app::XPathItem__Array>(get_class());
        }
    } // namespace XPathItem__Array
} // namespace app::classes::types
