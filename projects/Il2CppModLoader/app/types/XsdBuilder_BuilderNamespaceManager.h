#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XsdBuilder_BuilderNamespaceManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XsdBuilder_BuilderNamespaceManager__Class** type_info;
        inline app::XsdBuilder_BuilderNamespaceManager__Class* get_class() {
            return il2cpp::get_nested_class<app::XsdBuilder_BuilderNamespaceManager__Class>(type_info, "System.Xml.Schema", "XsdBuilder", "BuilderNamespaceManager");
        }
        inline app::XsdBuilder_BuilderNamespaceManager* create() {
            return il2cpp::create_object<app::XsdBuilder_BuilderNamespaceManager>(get_class());
        }
    } // namespace XsdBuilder_BuilderNamespaceManager
} // namespace app::classes::types
