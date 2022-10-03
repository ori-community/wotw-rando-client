#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlDeclaration {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlDeclaration__Class** type_info;
        inline app::XmlDeclaration__Class* get_class() {
            return il2cpp::get_class<app::XmlDeclaration__Class>(type_info, "System.Xml", "XmlDeclaration");
        }
        inline app::XmlDeclaration* create() {
            return il2cpp::create_object<app::XmlDeclaration>(get_class());
        }
    } // namespace XmlDeclaration
} // namespace app::classes::types
