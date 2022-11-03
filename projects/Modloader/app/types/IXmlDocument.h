#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IXmlDocument {
        inline app::IXmlDocument__Class** type_info = (app::IXmlDocument__Class**)(modloader::win::memory::resolve_rva(0x0475A7A8));
        inline app::IXmlDocument__Class* get_class() {
            return il2cpp::get_class<app::IXmlDocument__Class>(type_info, "Newtonsoft.Json.Converters", "IXmlDocument");
        }
    } // namespace IXmlDocument
} // namespace app::classes::types
