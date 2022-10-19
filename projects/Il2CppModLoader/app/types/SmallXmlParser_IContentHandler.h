#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SmallXmlParser_IContentHandler {
        inline app::SmallXmlParser_IContentHandler__Class** type_info = (app::SmallXmlParser_IContentHandler__Class**)(modloader::win::memory::resolve_rva(0x04765040));
        inline app::SmallXmlParser_IContentHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::SmallXmlParser_IContentHandler__Class>(type_info, "Mono.Xml", "SmallXmlParser", "IContentHandler");
        }
    } // namespace SmallXmlParser_IContentHandler
} // namespace app::classes::types
