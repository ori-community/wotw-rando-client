#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NamespaceResolver_NamespaceDeclaration {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NamespaceResolver_NamespaceDeclaration__Class** type_info;
        inline app::NamespaceResolver_NamespaceDeclaration__Class* get_class() {
            return il2cpp::get_nested_class<app::NamespaceResolver_NamespaceDeclaration__Class>(type_info, "System.Xml.Linq", "NamespaceResolver", "NamespaceDeclaration");
        }
        inline app::NamespaceResolver_NamespaceDeclaration* create() {
            return il2cpp::create_object<app::NamespaceResolver_NamespaceDeclaration>(get_class());
        }
    } // namespace NamespaceResolver_NamespaceDeclaration
} // namespace app::classes::types
