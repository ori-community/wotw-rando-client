#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XPathDocument {
        namespace {
            inline app::XPathDocument__Class* type_info_ref = nullptr;
        }
        inline app::XPathDocument__Class** type_info = &type_info_ref;
        inline app::XPathDocument__Class* get_class() {
            return il2cpp::get_class<app::XPathDocument__Class>(type_info, "System.Xml.XPath", "XPathDocument");
        }
        inline app::XPathDocument* create() {
            return il2cpp::create_object<app::XPathDocument>(get_class());
        }
    } // namespace XPathDocument
} // namespace app::classes::types
