#pragma once
#include <Modloader/app/structs/XPathScanner_LexKind__Enum.h>
#include <Modloader/app/structs/XPathScanner_LexKind__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XPathScanner_LexKind__Enum {
        inline app::XPathScanner_LexKind__Enum__Class** type_info() {
            static app::XPathScanner_LexKind__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XPathScanner_LexKind__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XPathScanner_LexKind__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XPathScanner_LexKind__Enum__Class>(type_info(), "MS.Internal.Xml.XPath", "XPathScanner", "LexKind");
        }
        inline app::XPathScanner_LexKind__Enum* create() {
            return il2cpp::create_object<app::XPathScanner_LexKind__Enum>(get_class());
        }
    } // namespace XPathScanner_LexKind__Enum
} // namespace app::classes::types
