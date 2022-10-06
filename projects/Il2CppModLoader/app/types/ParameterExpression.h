#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParameterExpression {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ParameterExpression__Class** type_info;
        inline app::ParameterExpression__Class* get_class() {
            return il2cpp::get_class<app::ParameterExpression__Class>(type_info, "System.Linq.Expressions", "ParameterExpression");
        }
        inline app::ParameterExpression* create() {
            return il2cpp::create_object<app::ParameterExpression>(get_class());
        }
        inline app::ParameterExpression__Array* create_array(int size) {
            return il2cpp::array_new<app::ParameterExpression__Array>(get_class(), size);
        }
        inline app::ParameterExpression__Array* create_array(const std::vector<app::ParameterExpression*>& items) {
            return il2cpp::array_new<app::ParameterExpression__Array>(get_class(), items);
        }
    } // namespace ParameterExpression
} // namespace app::classes::types
