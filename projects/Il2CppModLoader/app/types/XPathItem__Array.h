#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XPathItem__Array {
        namespace {
            app::XPathItem__Array__Class* type_info_ref = nullptr;
        }
        app::XPathItem__Array__Class** type_info = &type_info_ref;
        inline app::XPathItem__Array__Class* get_class() {
            return il2cpp::get_class<app::XPathItem__Array__Class>(type_info, "System.Xml.XPath", "XPathItem[]");
        }
        inline app::XPathItem__Array* create() {
            return il2cpp::create_object<app::XPathItem__Array>(get_class());
        }
    } // namespace XPathItem__Array
} // namespace app::classes::types
