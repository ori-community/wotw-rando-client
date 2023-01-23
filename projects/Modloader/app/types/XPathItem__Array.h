#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XPathItem__Array__Class.h>
#include <Modloader/app/structs/XPathItem__Array.h>

namespace app::classes::types {
    namespace XPathItem__Array {
        namespace {
            inline app::XPathItem__Array__Class* type_info_ref = nullptr;
        }
        inline app::XPathItem__Array__Class** type_info = &type_info_ref;
        inline app::XPathItem__Array__Class* get_class() {
            return il2cpp::get_class<app::XPathItem__Array__Class>(type_info, "System.Xml.XPath", "XPathItem[]");
        }
        inline app::XPathItem__Array* create() {
            return il2cpp::create_object<app::XPathItem__Array>(get_class());
        }
    } // namespace XPathItem__Array
} // namespace app::classes::types
