#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConstNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConstNode__Class** type_info;
        inline app::ConstNode__Class* get_class() {
            return il2cpp::get_class<app::ConstNode__Class>(type_info, "System.Data", "ConstNode");
        }
        inline app::ConstNode* create() {
            return il2cpp::create_object<app::ConstNode>(get_class());
        }
    } // namespace ConstNode
} // namespace app::classes::types
