#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SmallXmlParser {
        inline app::SmallXmlParser__Class** type_info = (app::SmallXmlParser__Class**)(modloader::win::memory::resolve_rva(0x04727CF8));
        inline app::SmallXmlParser__Class* get_class() {
            return il2cpp::get_class<app::SmallXmlParser__Class>(type_info, "Mono.Xml", "SmallXmlParser");
        }
        inline app::SmallXmlParser* create() {
            return il2cpp::create_object<app::SmallXmlParser>(get_class());
        }
    } // namespace SmallXmlParser
} // namespace app::classes::types
