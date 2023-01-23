#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XPathItem__Class.h>
#include <Modloader/app/structs/XPathItem.h>
#include <Modloader/app/structs/XPathItem__Array.h>

namespace app::classes::types {
    namespace XPathItem {
        inline app::XPathItem__Class** type_info = (app::XPathItem__Class**)(modloader::win::memory::resolve_rva(0x04708618));
        inline app::XPathItem__Class* get_class() {
            return il2cpp::get_class<app::XPathItem__Class>(type_info, "System.Xml.XPath", "XPathItem");
        }
        inline app::XPathItem* create() {
            return il2cpp::create_object<app::XPathItem>(get_class());
        }
        inline app::XPathItem__Array* create_array(int size) {
            return il2cpp::array_new<app::XPathItem__Array>(get_class(), size);
        }
        inline app::XPathItem__Array* create_array(const std::vector<app::XPathItem*>& items) {
            return il2cpp::array_new<app::XPathItem__Array>(get_class(), items);
        }
    } // namespace XPathItem
} // namespace app::classes::types
