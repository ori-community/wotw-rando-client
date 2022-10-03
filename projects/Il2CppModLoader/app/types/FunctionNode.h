#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FunctionNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FunctionNode__Class** type_info;
        inline app::FunctionNode__Class* get_class() {
            return il2cpp::get_class<app::FunctionNode__Class>(type_info, "System.Data", "FunctionNode");
        }
        inline app::FunctionNode* create() {
            return il2cpp::create_object<app::FunctionNode>(get_class());
        }
    } // namespace FunctionNode
} // namespace app::classes::types
