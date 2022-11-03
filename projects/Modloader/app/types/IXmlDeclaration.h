#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IXmlDeclaration {
        inline app::IXmlDeclaration__Class** type_info = (app::IXmlDeclaration__Class**)(modloader::win::memory::resolve_rva(0x0477B988));
        inline app::IXmlDeclaration__Class* get_class() {
            return il2cpp::get_class<app::IXmlDeclaration__Class>(type_info, "Newtonsoft.Json.Converters", "IXmlDeclaration");
        }
    } // namespace IXmlDeclaration
} // namespace app::classes::types
