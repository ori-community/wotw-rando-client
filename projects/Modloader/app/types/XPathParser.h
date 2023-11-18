#pragma once
#include <Modloader/app/structs/XPathParser.h>
#include <Modloader/app/structs/XPathParser__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XPathParser {
        inline app::XPathParser__Class** type_info() {
            static app::XPathParser__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XPathParser__Class**)(modloader::win::memory::resolve_rva(0x04736CC0));
            }
            return cache;
        }
        inline app::XPathParser__Class* get_class() {
            return il2cpp::get_class<app::XPathParser__Class>(type_info(), "MS.Internal.Xml.XPath", "XPathParser");
        }
        inline app::XPathParser* create() {
            return il2cpp::create_object<app::XPathParser>(get_class());
        }
    } // namespace XPathParser
} // namespace app::classes::types
