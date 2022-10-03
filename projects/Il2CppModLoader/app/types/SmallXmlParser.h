#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SmallXmlParser {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SmallXmlParser__Class** type_info;
        inline app::SmallXmlParser__Class* get_class() {
            return il2cpp::get_class<app::SmallXmlParser__Class>(type_info, "Mono.Xml", "SmallXmlParser");
        }
        inline app::SmallXmlParser* create() {
            return il2cpp::create_object<app::SmallXmlParser>(get_class());
        }
    } // namespace SmallXmlParser
} // namespace app::classes::types
