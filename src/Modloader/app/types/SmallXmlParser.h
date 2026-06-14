#pragma once
#include <Modloader/app/structs/SmallXmlParser.h>
#include <Modloader/app/structs/SmallXmlParser__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SmallXmlParser {
        inline app::SmallXmlParser__Class** type_info() {
            static app::SmallXmlParser__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SmallXmlParser__Class**)(modloader::win::memory::resolve_rva(0x04727CF8));
            }
            return cache;
        }
        inline app::SmallXmlParser__Class* get_class() {
            return il2cpp::get_class<app::SmallXmlParser__Class>(type_info(), "Mono.Xml", "SmallXmlParser");
        }
        inline app::SmallXmlParser* create() {
            return il2cpp::create_object<app::SmallXmlParser>(get_class());
        }
    } // namespace SmallXmlParser
} // namespace app::classes::types
