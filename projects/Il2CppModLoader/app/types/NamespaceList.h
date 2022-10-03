#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NamespaceList {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NamespaceList__Class** type_info;
        inline app::NamespaceList__Class* get_class() {
            return il2cpp::get_class<app::NamespaceList__Class>(type_info, "System.Xml.Schema", "NamespaceList");
        }
        inline app::NamespaceList* create() {
            return il2cpp::create_object<app::NamespaceList>(get_class());
        }
    } // namespace NamespaceList
} // namespace app::classes::types
