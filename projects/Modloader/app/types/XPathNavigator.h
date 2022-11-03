#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XPathNavigator {
        inline app::XPathNavigator__Class** type_info = (app::XPathNavigator__Class**)(modloader::win::memory::resolve_rva(0x04734C68));
        inline app::XPathNavigator__Class* get_class() {
            return il2cpp::get_class<app::XPathNavigator__Class>(type_info, "System.Xml.XPath", "XPathNavigator");
        }
        inline app::XPathNavigator* create() {
            return il2cpp::create_object<app::XPathNavigator>(get_class());
        }
        inline app::XPathNavigator__Array* create_array(int size) {
            return il2cpp::array_new<app::XPathNavigator__Array>(get_class(), size);
        }
        inline app::XPathNavigator__Array* create_array(const std::vector<app::XPathNavigator*>& items) {
            return il2cpp::array_new<app::XPathNavigator__Array>(get_class(), items);
        }
    } // namespace XPathNavigator
} // namespace app::classes::types
