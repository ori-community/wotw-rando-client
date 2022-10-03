#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LikeNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LikeNode__Class** type_info;
        inline app::LikeNode__Class* get_class() {
            return il2cpp::get_class<app::LikeNode__Class>(type_info, "System.Data", "LikeNode");
        }
        inline app::LikeNode* create() {
            return il2cpp::create_object<app::LikeNode>(get_class());
        }
    } // namespace LikeNode
} // namespace app::classes::types
