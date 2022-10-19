#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SmallXmlParserException {
        inline app::SmallXmlParserException__Class** type_info = (app::SmallXmlParserException__Class**)(modloader::win::memory::resolve_rva(0x0470F008));
        inline app::SmallXmlParserException__Class* get_class() {
            return il2cpp::get_class<app::SmallXmlParserException__Class>(type_info, "Mono.Xml", "SmallXmlParserException");
        }
        inline app::SmallXmlParserException* create() {
            return il2cpp::create_object<app::SmallXmlParserException>(get_class());
        }
    } // namespace SmallXmlParserException
} // namespace app::classes::types
