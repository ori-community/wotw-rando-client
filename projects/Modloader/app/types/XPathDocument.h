#pragma once
#include <Modloader/app/structs/XPathDocument.h>
#include <Modloader/app/structs/XPathDocument__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XPathDocument {
        inline app::XPathDocument__Class** type_info() {
            static app::XPathDocument__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XPathDocument__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XPathDocument__Class* get_class() {
            return il2cpp::get_class<app::XPathDocument__Class>(type_info(), "System.Xml.XPath", "XPathDocument");
        }
        inline app::XPathDocument* create() {
            return il2cpp::create_object<app::XPathDocument>(get_class());
        }
    } // namespace XPathDocument
} // namespace app::classes::types
