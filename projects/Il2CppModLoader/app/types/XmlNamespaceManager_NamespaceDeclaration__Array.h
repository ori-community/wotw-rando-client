#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlNamespaceManager_NamespaceDeclaration__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlNamespaceManager_NamespaceDeclaration__Array__Class** type_info;
        inline app::XmlNamespaceManager_NamespaceDeclaration__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlNamespaceManager_NamespaceDeclaration__Array__Class>(type_info, "System.Xml", "XmlNamespaceManager+NamespaceDeclaration[]");
        }
        inline app::XmlNamespaceManager_NamespaceDeclaration__Array* create() {
            return il2cpp::create_object<app::XmlNamespaceManager_NamespaceDeclaration__Array>(get_class());
        }
    } // namespace XmlNamespaceManager_NamespaceDeclaration__Array
} // namespace app::classes::types
