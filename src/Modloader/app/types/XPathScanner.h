#pragma once
#include <Modloader/app/structs/XPathScanner.h>
#include <Modloader/app/structs/XPathScanner__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XPathScanner {
        inline app::XPathScanner__Class** type_info() {
            static app::XPathScanner__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XPathScanner__Class**)(modloader::win::memory::resolve_rva(0x04783AD0));
            }
            return cache;
        }
        inline app::XPathScanner__Class* get_class() {
            return il2cpp::get_class<app::XPathScanner__Class>(type_info(), "MS.Internal.Xml.XPath", "XPathScanner");
        }
        inline app::XPathScanner* create() {
            return il2cpp::create_object<app::XPathScanner>(get_class());
        }
    } // namespace XPathScanner
} // namespace app::classes::types
