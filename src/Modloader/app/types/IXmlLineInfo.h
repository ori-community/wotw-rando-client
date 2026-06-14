#pragma once
#include <Modloader/app/structs/IXmlLineInfo.h>
#include <Modloader/app/structs/IXmlLineInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IXmlLineInfo {
        inline app::IXmlLineInfo__Class** type_info() {
            static app::IXmlLineInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IXmlLineInfo__Class**)(modloader::win::memory::resolve_rva(0x0476E5C0));
            }
            return cache;
        }
        inline app::IXmlLineInfo__Class* get_class() {
            return il2cpp::get_class<app::IXmlLineInfo__Class>(type_info(), "System.Xml", "IXmlLineInfo");
        }
    } // namespace IXmlLineInfo
} // namespace app::classes::types
