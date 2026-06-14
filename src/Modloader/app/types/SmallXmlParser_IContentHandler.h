#pragma once
#include <Modloader/app/structs/SmallXmlParser_IContentHandler.h>
#include <Modloader/app/structs/SmallXmlParser_IContentHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SmallXmlParser_IContentHandler {
        inline app::SmallXmlParser_IContentHandler__Class** type_info() {
            static app::SmallXmlParser_IContentHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SmallXmlParser_IContentHandler__Class**)(modloader::win::memory::resolve_rva(0x04765040));
            }
            return cache;
        }
        inline app::SmallXmlParser_IContentHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::SmallXmlParser_IContentHandler__Class>(type_info(), "Mono.Xml", "SmallXmlParser", "IContentHandler");
        }
    } // namespace SmallXmlParser_IContentHandler
} // namespace app::classes::types
