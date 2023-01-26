#pragma once
#include <Modloader/app/structs/SmallXmlParserException.h>
#include <Modloader/app/structs/SmallXmlParserException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SmallXmlParserException {
        inline app::SmallXmlParserException__Class** type_info() {
            static app::SmallXmlParserException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SmallXmlParserException__Class**)(modloader::win::memory::resolve_rva(0x0470F008));
            }
            return cache;
        }
        inline app::SmallXmlParserException__Class* get_class() {
            return il2cpp::get_class<app::SmallXmlParserException__Class>(type_info(), "Mono.Xml", "SmallXmlParserException");
        }
        inline app::SmallXmlParserException* create() {
            return il2cpp::create_object<app::SmallXmlParserException>(get_class());
        }
    } // namespace SmallXmlParserException
} // namespace app::classes::types
