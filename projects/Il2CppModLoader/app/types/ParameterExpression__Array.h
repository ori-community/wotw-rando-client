#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParameterExpression__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ParameterExpression__Array__Class** type_info;
        inline app::ParameterExpression__Array__Class* get_class() {
            return il2cpp::get_class<app::ParameterExpression__Array__Class>(type_info, "System.Linq.Expressions", "ParameterExpression[]");
        }
        inline app::ParameterExpression__Array* create() {
            return il2cpp::create_object<app::ParameterExpression__Array>(get_class());
        }
    } // namespace ParameterExpression__Array
} // namespace app::classes::types
