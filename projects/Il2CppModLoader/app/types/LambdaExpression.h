#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LambdaExpression {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LambdaExpression__Class** type_info;
        inline app::LambdaExpression__Class* get_class() {
            return il2cpp::get_class<app::LambdaExpression__Class>(type_info, "System.Linq.Expressions", "LambdaExpression");
        }
        inline app::LambdaExpression* create() {
            return il2cpp::create_object<app::LambdaExpression>(get_class());
        }
        inline app::LambdaExpression__Array* create_array(int size) {
            return il2cpp::array_new<app::LambdaExpression__Array>(get_class(), size);
        }
    } // namespace LambdaExpression
} // namespace app::classes::types
