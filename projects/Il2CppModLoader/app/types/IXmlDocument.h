#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IXmlDocument {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IXmlDocument__Class** type_info;
        inline app::IXmlDocument__Class* get_class() {
            return il2cpp::get_class<app::IXmlDocument__Class>(type_info, "Newtonsoft.Json.Converters", "IXmlDocument");
        }
    } // namespace IXmlDocument
} // namespace app::classes::types
