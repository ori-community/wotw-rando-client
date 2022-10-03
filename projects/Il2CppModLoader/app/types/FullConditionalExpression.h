#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FullConditionalExpression {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FullConditionalExpression__Class** type_info;
        inline app::FullConditionalExpression__Class* get_class() {
            return il2cpp::get_class<app::FullConditionalExpression__Class>(type_info, "System.Linq.Expressions", "FullConditionalExpression");
        }
        inline app::FullConditionalExpression* create() {
            return il2cpp::create_object<app::FullConditionalExpression>(get_class());
        }
    } // namespace FullConditionalExpression
} // namespace app::classes::types
