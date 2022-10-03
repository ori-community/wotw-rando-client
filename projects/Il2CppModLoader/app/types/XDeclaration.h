#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XDeclaration {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XDeclaration__Class** type_info;
        inline app::XDeclaration__Class* get_class() {
            return il2cpp::get_class<app::XDeclaration__Class>(type_info, "System.Xml.Linq", "XDeclaration");
        }
        inline app::XDeclaration* create() {
            return il2cpp::create_object<app::XDeclaration>(get_class());
        }
    } // namespace XDeclaration
} // namespace app::classes::types
