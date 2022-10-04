#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IXmlDeclaration {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IXmlDeclaration__Class** type_info;
        inline app::IXmlDeclaration__Class* get_class() {
            return il2cpp::get_class<app::IXmlDeclaration__Class>(type_info, "Newtonsoft.Json.Converters", "IXmlDeclaration");
        }
    } // namespace IXmlDeclaration
} // namespace app::classes::types
