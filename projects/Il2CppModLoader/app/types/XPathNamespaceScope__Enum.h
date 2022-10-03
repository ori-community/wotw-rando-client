#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XPathNamespaceScope__Enum {
        namespace {
            app::XPathNamespaceScope__Enum__Class* type_info_ref = nullptr;
        }
        app::XPathNamespaceScope__Enum__Class** type_info = &type_info_ref;
        inline app::XPathNamespaceScope__Enum__Class* get_class() {
            return il2cpp::get_class<app::XPathNamespaceScope__Enum__Class>(type_info, "System.Xml.XPath", "XPathNamespaceScope");
        }
        inline app::XPathNamespaceScope__Enum* create() {
            return il2cpp::create_object<app::XPathNamespaceScope__Enum>(get_class());
        }
    } // namespace XPathNamespaceScope__Enum
} // namespace app::classes::types
