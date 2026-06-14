#pragma once
#include <Modloader/app/structs/XPathNamespaceScope__Enum.h>
#include <Modloader/app/structs/XPathNamespaceScope__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XPathNamespaceScope__Enum {
        inline app::XPathNamespaceScope__Enum__Class** type_info() {
            static app::XPathNamespaceScope__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XPathNamespaceScope__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XPathNamespaceScope__Enum__Class* get_class() {
            return il2cpp::get_class<app::XPathNamespaceScope__Enum__Class>(type_info(), "System.Xml.XPath", "XPathNamespaceScope");
        }
        inline app::XPathNamespaceScope__Enum* create() {
            return il2cpp::create_object<app::XPathNamespaceScope__Enum>(get_class());
        }
    } // namespace XPathNamespaceScope__Enum
} // namespace app::classes::types
