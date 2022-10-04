#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IXmlElement {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IXmlElement__Class** type_info;
        inline app::IXmlElement__Class* get_class() {
            return il2cpp::get_class<app::IXmlElement__Class>(type_info, "Newtonsoft.Json.Converters", "IXmlElement");
        }
    } // namespace IXmlElement
} // namespace app::classes::types
