#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NameNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NameNode__Class** type_info;
        inline app::NameNode__Class* get_class() {
            return il2cpp::get_class<app::NameNode__Class>(type_info, "System.Data", "NameNode");
        }
        inline app::NameNode* create() {
            return il2cpp::create_object<app::NameNode>(get_class());
        }
    } // namespace NameNode
} // namespace app::classes::types
