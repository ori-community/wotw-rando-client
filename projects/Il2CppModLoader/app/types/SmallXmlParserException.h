#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SmallXmlParserException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SmallXmlParserException__Class** type_info;
        inline app::SmallXmlParserException__Class* get_class() {
            return il2cpp::get_class<app::SmallXmlParserException__Class>(type_info, "Mono.Xml", "SmallXmlParserException");
        }
        inline app::SmallXmlParserException* create() {
            return il2cpp::create_object<app::SmallXmlParserException>(get_class());
        }
    } // namespace SmallXmlParserException
} // namespace app::classes::types
