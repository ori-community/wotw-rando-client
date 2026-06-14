#pragma once
#include <Modloader/app/structs/IXmlDocument.h>
#include <Modloader/app/structs/IXmlDocument__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IXmlDocument {
        inline app::IXmlDocument__Class** type_info() {
            static app::IXmlDocument__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IXmlDocument__Class**)(modloader::win::memory::resolve_rva(0x0475A7A8));
            }
            return cache;
        }
        inline app::IXmlDocument__Class* get_class() {
            return il2cpp::get_class<app::IXmlDocument__Class>(type_info(), "Newtonsoft.Json.Converters", "IXmlDocument");
        }
    } // namespace IXmlDocument
} // namespace app::classes::types
