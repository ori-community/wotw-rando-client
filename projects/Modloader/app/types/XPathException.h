#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XPathException {
        inline app::XPathException__Class** type_info = (app::XPathException__Class**)(modloader::win::memory::resolve_rva(0x04758110));
        inline app::XPathException__Class* get_class() {
            return il2cpp::get_class<app::XPathException__Class>(type_info, "System.Xml.XPath", "XPathException");
        }
        inline app::XPathException* create() {
            return il2cpp::create_object<app::XPathException>(get_class());
        }
    } // namespace XPathException
} // namespace app::classes::types
