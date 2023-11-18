#pragma once
#include <Modloader/app/structs/IXmlDeclaration.h>
#include <Modloader/app/structs/IXmlDeclaration__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IXmlDeclaration {
        inline app::IXmlDeclaration__Class** type_info() {
            static app::IXmlDeclaration__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IXmlDeclaration__Class**)(modloader::win::memory::resolve_rva(0x0477B988));
            }
            return cache;
        }
        inline app::IXmlDeclaration__Class* get_class() {
            return il2cpp::get_class<app::IXmlDeclaration__Class>(type_info(), "Newtonsoft.Json.Converters", "IXmlDeclaration");
        }
    } // namespace IXmlDeclaration
} // namespace app::classes::types
