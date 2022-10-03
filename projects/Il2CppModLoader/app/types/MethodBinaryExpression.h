#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MethodBinaryExpression {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MethodBinaryExpression__Class** type_info;
        inline app::MethodBinaryExpression__Class* get_class() {
            return il2cpp::get_class<app::MethodBinaryExpression__Class>(type_info, "System.Linq.Expressions", "MethodBinaryExpression");
        }
        inline app::MethodBinaryExpression* create() {
            return il2cpp::create_object<app::MethodBinaryExpression>(get_class());
        }
    } // namespace MethodBinaryExpression
} // namespace app::classes::types
