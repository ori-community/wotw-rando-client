#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XPathNamespaceScope__Enum {
        namespace {
            inline app::XPathNamespaceScope__Enum__Class* type_info_ref = nullptr;
        }
        inline app::XPathNamespaceScope__Enum__Class** type_info = &type_info_ref;
        inline app::XPathNamespaceScope__Enum__Class* get_class() {
            return il2cpp::get_class<app::XPathNamespaceScope__Enum__Class>(type_info, "System.Xml.XPath", "XPathNamespaceScope");
        }
        inline app::XPathNamespaceScope__Enum* create() {
            return il2cpp::create_object<app::XPathNamespaceScope__Enum>(get_class());
        }
    } // namespace XPathNamespaceScope__Enum
} // namespace app::classes::types
