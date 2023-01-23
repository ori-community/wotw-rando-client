#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IXmlTextParser__Class.h>

namespace app::classes::types {
    namespace IXmlTextParser {
        inline app::IXmlTextParser__Class** type_info = (app::IXmlTextParser__Class**)(modloader::win::memory::resolve_rva(0x04726A80));
        inline app::IXmlTextParser__Class* get_class() {
            return il2cpp::get_class<app::IXmlTextParser__Class>(type_info, "System.Xml.Serialization", "IXmlTextParser");
        }
    } // namespace IXmlTextParser
} // namespace app::classes::types
