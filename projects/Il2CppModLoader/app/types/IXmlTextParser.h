#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IXmlTextParser {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IXmlTextParser__Class** type_info;
        inline app::IXmlTextParser__Class* get_class() {
            return il2cpp::get_class<app::IXmlTextParser__Class>(type_info, "System.Xml.Serialization", "IXmlTextParser");
        }
        inline app::IXmlTextParser* create() {
            return il2cpp::create_object<app::IXmlTextParser>(get_class());
        }
    } // namespace IXmlTextParser
} // namespace app::classes::types
