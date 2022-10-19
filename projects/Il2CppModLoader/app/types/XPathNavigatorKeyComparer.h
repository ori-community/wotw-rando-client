#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XPathNavigatorKeyComparer {
        inline app::XPathNavigatorKeyComparer__Class** type_info = (app::XPathNavigatorKeyComparer__Class**)(modloader::win::memory::resolve_rva(0x047160A0));
        inline app::XPathNavigatorKeyComparer__Class* get_class() {
            return il2cpp::get_class<app::XPathNavigatorKeyComparer__Class>(type_info, "System.Xml.XPath", "XPathNavigatorKeyComparer");
        }
        inline app::XPathNavigatorKeyComparer* create() {
            return il2cpp::create_object<app::XPathNavigatorKeyComparer>(get_class());
        }
    } // namespace XPathNavigatorKeyComparer
} // namespace app::classes::types
