#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlusNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlusNode__Class** type_info;
        inline app::PlusNode__Class* get_class() {
            return il2cpp::get_class<app::PlusNode__Class>(type_info, "System.Xml.Schema", "PlusNode");
        }
        inline app::PlusNode* create() {
            return il2cpp::create_object<app::PlusNode>(get_class());
        }
    } // namespace PlusNode
} // namespace app::classes::types
