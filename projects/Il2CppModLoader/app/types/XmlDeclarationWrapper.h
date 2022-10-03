#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlDeclarationWrapper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlDeclarationWrapper__Class** type_info;
        inline app::XmlDeclarationWrapper__Class* get_class() {
            return il2cpp::get_class<app::XmlDeclarationWrapper__Class>(type_info, "Newtonsoft.Json.Converters", "XmlDeclarationWrapper");
        }
        inline app::XmlDeclarationWrapper* create() {
            return il2cpp::create_object<app::XmlDeclarationWrapper>(get_class());
        }
    } // namespace XmlDeclarationWrapper
} // namespace app::classes::types
