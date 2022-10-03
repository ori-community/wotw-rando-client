#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XPathScanner_LexKind__Enum {
        namespace {
            app::XPathScanner_LexKind__Enum__Class* type_info_ref = nullptr;
        }
        app::XPathScanner_LexKind__Enum__Class** type_info = &type_info_ref;
        inline app::XPathScanner_LexKind__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XPathScanner_LexKind__Enum__Class>(type_info, "MS.Internal.Xml.XPath", "XPathScanner", "LexKind");
        }
        inline app::XPathScanner_LexKind__Enum* create() {
            return il2cpp::create_object<app::XPathScanner_LexKind__Enum>(get_class());
        }
    } // namespace XPathScanner_LexKind__Enum
} // namespace app::classes::types
