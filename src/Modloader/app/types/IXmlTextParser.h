#pragma once
#include <Modloader/app/structs/IXmlTextParser.h>
#include <Modloader/app/structs/IXmlTextParser__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IXmlTextParser {
        inline app::IXmlTextParser__Class** type_info() {
            static app::IXmlTextParser__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IXmlTextParser__Class**)(modloader::win::memory::resolve_rva(0x04726A80));
            }
            return cache;
        }
        inline app::IXmlTextParser__Class* get_class() {
            return il2cpp::get_class<app::IXmlTextParser__Class>(type_info(), "System.Xml.Serialization", "IXmlTextParser");
        }
    } // namespace IXmlTextParser
} // namespace app::classes::types
