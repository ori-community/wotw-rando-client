#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StarNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StarNode__Class** type_info;
        inline app::StarNode__Class* get_class() {
            return il2cpp::get_class<app::StarNode__Class>(type_info, "System.Xml.Schema", "StarNode");
        }
        inline app::StarNode* create() {
            return il2cpp::create_object<app::StarNode>(get_class());
        }
    } // namespace StarNode
} // namespace app::classes::types
