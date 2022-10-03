#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SchemaNamespaceManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SchemaNamespaceManager__Class** type_info;
        inline app::SchemaNamespaceManager__Class* get_class() {
            return il2cpp::get_class<app::SchemaNamespaceManager__Class>(type_info, "System.Xml.Schema", "SchemaNamespaceManager");
        }
        inline app::SchemaNamespaceManager* create() {
            return il2cpp::create_object<app::SchemaNamespaceManager>(get_class());
        }
    } // namespace SchemaNamespaceManager
} // namespace app::classes::types
