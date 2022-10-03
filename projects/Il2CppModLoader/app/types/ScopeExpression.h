#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScopeExpression {
        namespace {
            app::ScopeExpression__Class* type_info_ref = nullptr;
        }
        app::ScopeExpression__Class** type_info = &type_info_ref;
        inline app::ScopeExpression__Class* get_class() {
            return il2cpp::get_class<app::ScopeExpression__Class>(type_info, "System.Linq.Expressions", "ScopeExpression");
        }
        inline app::ScopeExpression* create() {
            return il2cpp::create_object<app::ScopeExpression>(get_class());
        }
    } // namespace ScopeExpression
} // namespace app::classes::types
