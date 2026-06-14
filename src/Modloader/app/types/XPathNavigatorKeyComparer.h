#pragma once
#include <Modloader/app/structs/XPathNavigatorKeyComparer.h>
#include <Modloader/app/structs/XPathNavigatorKeyComparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XPathNavigatorKeyComparer {
        inline app::XPathNavigatorKeyComparer__Class** type_info() {
            static app::XPathNavigatorKeyComparer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XPathNavigatorKeyComparer__Class**)(modloader::win::memory::resolve_rva(0x047160A0));
            }
            return cache;
        }
        inline app::XPathNavigatorKeyComparer__Class* get_class() {
            return il2cpp::get_class<app::XPathNavigatorKeyComparer__Class>(type_info(), "System.Xml.XPath", "XPathNavigatorKeyComparer");
        }
        inline app::XPathNavigatorKeyComparer* create() {
            return il2cpp::create_object<app::XPathNavigatorKeyComparer>(get_class());
        }
    } // namespace XPathNavigatorKeyComparer
} // namespace app::classes::types
