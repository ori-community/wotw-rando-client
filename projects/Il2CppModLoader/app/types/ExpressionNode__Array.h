#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExpressionNode__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExpressionNode__Array__Class** type_info;
        inline app::ExpressionNode__Array__Class* get_class() {
            return il2cpp::get_class<app::ExpressionNode__Array__Class>(type_info, "System.Data", "ExpressionNode[]");
        }
        inline app::ExpressionNode__Array* create() {
            return il2cpp::create_object<app::ExpressionNode__Array>(get_class());
        }
    } // namespace ExpressionNode__Array
} // namespace app::classes::types
