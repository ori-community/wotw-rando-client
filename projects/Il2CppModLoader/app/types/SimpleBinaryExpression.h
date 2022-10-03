#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SimpleBinaryExpression {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SimpleBinaryExpression__Class** type_info;
        inline app::SimpleBinaryExpression__Class* get_class() {
            return il2cpp::get_class<app::SimpleBinaryExpression__Class>(type_info, "System.Linq.Expressions", "SimpleBinaryExpression");
        }
        inline app::SimpleBinaryExpression* create() {
            return il2cpp::create_object<app::SimpleBinaryExpression>(get_class());
        }
    } // namespace SimpleBinaryExpression
} // namespace app::classes::types
