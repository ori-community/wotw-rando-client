#pragma once
#include <Modloader/app/structs/IXmlElement.h>
#include <Modloader/app/structs/IXmlElement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IXmlElement {
        inline app::IXmlElement__Class** type_info() {
            static app::IXmlElement__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IXmlElement__Class**)(modloader::win::memory::resolve_rva(0x0471E948));
            }
            return cache;
        }
        inline app::IXmlElement__Class* get_class() {
            return il2cpp::get_class<app::IXmlElement__Class>(type_info(), "Newtonsoft.Json.Converters", "IXmlElement");
        }
    } // namespace IXmlElement
} // namespace app::classes::types
