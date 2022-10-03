#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ZeroOpNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ZeroOpNode__Class** type_info;
        inline app::ZeroOpNode__Class* get_class() {
            return il2cpp::get_class<app::ZeroOpNode__Class>(type_info, "System.Data", "ZeroOpNode");
        }
        inline app::ZeroOpNode* create() {
            return il2cpp::create_object<app::ZeroOpNode>(get_class());
        }
    } // namespace ZeroOpNode
} // namespace app::classes::types
