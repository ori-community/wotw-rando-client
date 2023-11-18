#pragma once
#include <Modloader/app/structs/XPathException.h>
#include <Modloader/app/structs/XPathException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XPathException {
        inline app::XPathException__Class** type_info() {
            static app::XPathException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XPathException__Class**)(modloader::win::memory::resolve_rva(0x04758110));
            }
            return cache;
        }
        inline app::XPathException__Class* get_class() {
            return il2cpp::get_class<app::XPathException__Class>(type_info(), "System.Xml.XPath", "XPathException");
        }
        inline app::XPathException* create() {
            return il2cpp::create_object<app::XPathException>(get_class());
        }
    } // namespace XPathException
} // namespace app::classes::types
